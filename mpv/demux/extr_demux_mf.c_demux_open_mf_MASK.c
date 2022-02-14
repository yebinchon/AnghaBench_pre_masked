
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct sh_stream {struct mp_codec_params* codec; } ;
struct mp_codec_params {char const* codec; double fps; int reliable_fps; scalar_t__ disp_h; scalar_t__ disp_w; } ;
struct TYPE_15__ {int nr_of_files; struct sh_stream* sh; scalar_t__ curr_frame; int streams; } ;
typedef TYPE_2__ mf_t ;
typedef enum demux_check { ____Placeholder_demux_check } demux_check ;
struct TYPE_16__ {int seekable; int duration; void* priv; TYPE_12__* stream; int global; int log; } ;
typedef TYPE_3__ demuxer_t ;
struct TYPE_14__ {int name; } ;
struct TYPE_13__ {int mime_type; scalar_t__ url; TYPE_1__* info; } ;


 int MP_TARRAY_APPEND (TYPE_2__*,int ,int,TYPE_12__*) ;
 int STREAM_VIDEO ;
 int demux_add_sh_stream (TYPE_3__*,struct sh_stream*) ;
 struct sh_stream* demux_alloc_sh_stream (int ) ;
 int m_option_type_double ;
 int m_option_type_string ;
 char* mp_map_mimetype_to_video_codec (int ) ;
 int mp_read_option_raw (int ,char*,int *,...) ;
 TYPE_2__* open_mf_pattern (TYPE_3__*,int ,scalar_t__) ;
 TYPE_2__* open_mf_single (TYPE_3__*,int ,scalar_t__) ;
 char* probe_format (TYPE_2__*,char*,int) ;
 scalar_t__ strcmp (int ,char*) ;
 scalar_t__ strncmp (scalar_t__,char*,int) ;
 int talloc_free (char*) ;

__attribute__((used)) static int demux_open_mf(demuxer_t *demuxer, enum demux_check check)
{
    mf_t *mf;

    if (strncmp(demuxer->stream->url, "mf://", 5) == 0 &&
        demuxer->stream->info && strcmp(demuxer->stream->info->name, "mf") == 0)
    {
        mf = open_mf_pattern(demuxer, demuxer->log, demuxer->stream->url + 5);
    } else {
        mf = open_mf_single(demuxer, demuxer->log, demuxer->stream->url);
        int bog = 0;
        MP_TARRAY_APPEND(mf, mf->streams, bog, demuxer->stream);
    }

    if (!mf || mf->nr_of_files < 1)
        goto error;

    double mf_fps;
    char *mf_type;
    mp_read_option_raw(demuxer->global, "mf-fps", &m_option_type_double, &mf_fps);
    mp_read_option_raw(demuxer->global, "mf-type", &m_option_type_string, &mf_type);

    const char *codec = mp_map_mimetype_to_video_codec(demuxer->stream->mime_type);
    if (!codec || (mf_type && mf_type[0]))
        codec = probe_format(mf, mf_type, check);
    talloc_free(mf_type);
    if (!codec)
        goto error;

    mf->curr_frame = 0;


    struct sh_stream *sh = demux_alloc_sh_stream(STREAM_VIDEO);
    struct mp_codec_params *c = sh->codec;

    c->codec = codec;
    c->disp_w = 0;
    c->disp_h = 0;
    c->fps = mf_fps;
    c->reliable_fps = 1;

    demux_add_sh_stream(demuxer, sh);

    mf->sh = sh;
    demuxer->priv = (void *)mf;
    demuxer->seekable = 1;
    demuxer->duration = mf->nr_of_files / mf->sh->codec->fps;

    return 0;

error:
    return -1;
}
