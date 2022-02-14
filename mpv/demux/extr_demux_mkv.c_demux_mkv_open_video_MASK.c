
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned char uint8_t ;
typedef int uint32_t ;
struct sh_stream {struct mp_codec_params* codec; } ;
struct mp_image_params {int w; int h; int p_h; int p_w; } ;
struct mp_codec_params {int bits_per_coded_sample; int codec_tag; int avi_dts; char* codec; unsigned int extradata_size; int disp_w; int disp_h; int color; int stereo_mode; int par_h; int par_w; int fps; int extradata; } ;
struct TYPE_4__ {char const* codec_id; unsigned char* private_data; int private_size; int v_width; int v_height; int parse; int parse_timebase; int colorspace; int require_keyframes; int v_dwidth; int v_dheight; int color; int stereo_mode; scalar_t__ v_dheight_set; scalar_t__ v_dwidth_set; int v_frate; int tnum; } ;
typedef TYPE_1__ mkv_track_t ;
typedef int demuxer_t ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 void* FUNC_2 (unsigned char*) ;
 int FUNC_3 (char,char,char,char) ;
 int FUNC_4 (int *,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *,struct sh_stream*) ;
 struct sh_stream* FUNC_6 (int ) ;
 int FUNC_7 (int *,TYPE_1__*,struct sh_stream*) ;
 char const*** VAR_2 ;
 int FUNC_8 (struct mp_image_params*,int,int) ;
 int FUNC_9 (struct mp_codec_params*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (struct mp_codec_params*,unsigned char*,unsigned int) ;

__attribute__((used)) static int FUNC_12(demuxer_t *VAR_3, mkv_track_t *VAR_4)
{
    unsigned char *VAR_5 = ((void*)0);
    unsigned int VAR_6 = 0;
    struct sh_stream *VAR_7 = FUNC_6(VAR_1);
    FUNC_7(VAR_3, VAR_4, VAR_7);
    struct mp_codec_params *VAR_8 = VAR_7->codec;

    VAR_8->bits_per_coded_sample = 24;

    if (!FUNC_10(VAR_4->codec_id, "V_MS/VFW/FOURCC")) {

        if (VAR_4->private_data == ((void*)0) || VAR_4->private_size < 40)
            goto done;

        unsigned char *VAR_9 = VAR_4->private_data;
        if (VAR_4->v_width == 0)
            VAR_4->v_width = FUNC_2(VAR_9 + 4);
        if (VAR_4->v_height == 0)
            VAR_4->v_height = FUNC_2(VAR_9 + 8);
        VAR_8->bits_per_coded_sample = FUNC_1(VAR_9 + 14);
        VAR_8->codec_tag = FUNC_2(VAR_9 + 16);

        VAR_5 = VAR_4->private_data + 40;
        VAR_6 = VAR_4->private_size - 40;
        FUNC_9(VAR_8);
        VAR_8->avi_dts = 1;
    } else if (VAR_4->private_size >= VAR_0
               && (!FUNC_10(VAR_4->codec_id, "V_REAL/RV10")
                || !FUNC_10(VAR_4->codec_id, "V_REAL/RV20")
                || !FUNC_10(VAR_4->codec_id, "V_REAL/RV30")
                || !FUNC_10(VAR_4->codec_id, "V_REAL/RV40")))
    {
        unsigned char *VAR_10;
        unsigned int VAR_11;

        VAR_10 = (uint8_t *) VAR_4->private_data + VAR_0;

        VAR_11 = VAR_4->private_size - VAR_0;
        uint32_t VAR_12 = FUNC_0(VAR_10 - 4);
        switch (VAR_12 == 0x10003000 || VAR_12 == 0x10003001 ? '1' : VAR_4->codec_id[9]) {
        case '1': VAR_8->codec = "rv10"; break;
        case '2': VAR_8->codec = "rv20"; break;
        case '3': VAR_8->codec = "rv30"; break;
        case '4': VAR_8->codec = "rv40"; break;
        }

        VAR_6 = VAR_11 + 8;
        VAR_5 = VAR_10 - 8;
        VAR_4->parse = 1;
        VAR_4->parse_timebase = 1e3;
    } else if (FUNC_10(VAR_4->codec_id, "V_UNCOMPRESSED") == 0) {

        VAR_8->codec_tag = VAR_4->colorspace;
        VAR_8->codec = "rawvideo";
    } else if (FUNC_10(VAR_4->codec_id, "V_QUICKTIME") == 0) {
        uint32_t VAR_13 = 0, VAR_14 = 0;
        if (VAR_4->private_size >= 8) {
            VAR_13 = FUNC_2(VAR_4->private_data + 0);
            VAR_14 = FUNC_2(VAR_4->private_data + 4);
        }
        if (VAR_13 == FUNC_3('S', 'V', 'Q', '3') ||
            VAR_14 == FUNC_3('S', 'V', 'Q', '3'))
        {
            VAR_8->codec = "svq3";
            VAR_5 = VAR_4->private_data;
            VAR_6 = VAR_4->private_size;
        }
    } else {
        for (int VAR_15 = 0; VAR_2[VAR_15][0]; VAR_15++) {
            if (!FUNC_10(VAR_2[VAR_15][0], VAR_4->codec_id)) {
                VAR_8->codec = VAR_2[VAR_15][1];
                break;
            }
        }
        if (VAR_4->private_data && VAR_4->private_size > 0) {
            VAR_5 = VAR_4->private_data;
            VAR_6 = VAR_4->private_size;
        }
    }

    const char *VAR_16 = VAR_8->codec ? VAR_8->codec : "";
    if (!FUNC_10(VAR_16, "mjpeg")) {
        VAR_8->codec_tag = FUNC_3('m', 'j', 'p', 'g');
        VAR_4->require_keyframes = 1;
    }

    if (VAR_6 > 0x1000000) {
        FUNC_4(VAR_3, "Invalid CodecPrivate\n");
        goto done;
    }

    VAR_8->extradata = FUNC_11(VAR_8, VAR_5, VAR_6);
    VAR_8->extradata_size = VAR_6;
    if (!VAR_8->codec) {
        FUNC_4(VAR_3, "Unknown/unsupported CodecID (%s) or missing/bad "
                "CodecPrivate data (track %d).\n",
                VAR_4->codec_id, VAR_4->tnum);
    }
    VAR_8->fps = VAR_4->v_frate;
    VAR_8->disp_w = VAR_4->v_width;
    VAR_8->disp_h = VAR_4->v_height;

    int VAR_17 = VAR_4->v_dwidth_set ? VAR_4->v_dwidth : VAR_4->v_width;
    int VAR_18 = VAR_4->v_dheight_set ? VAR_4->v_dheight : VAR_4->v_height;
    struct mp_image_params VAR_19 = {.w = VAR_4->v_width, .h = VAR_4->v_height};
    FUNC_8(&VAR_19, VAR_17, VAR_18);
    VAR_8->par_w = VAR_19.p_w;
    VAR_8->par_h = VAR_19.p_h;

    VAR_8->stereo_mode = VAR_4->stereo_mode;
    VAR_8->color = VAR_4->color;

done:
    FUNC_5(VAR_3, VAR_7);

    return 0;
}
