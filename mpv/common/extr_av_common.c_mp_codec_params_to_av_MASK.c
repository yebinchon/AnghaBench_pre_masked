
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int num; } ;
struct mp_codec_params {TYPE_3__ channels; int block_align; int bitrate; int samplerate; int disp_h; int disp_w; int bits_per_coded_sample; int extradata; scalar_t__ extradata_size; int codec_tag; int codec; int type; int lav_codecpar; } ;
struct TYPE_8__ {int channel_layout; int channels; int block_align; int bit_rate; int sample_rate; int height; int width; int bits_per_coded_sample; scalar_t__ extradata_size; int extradata; int codec_tag; int codec_id; int codec_type; } ;
typedef TYPE_1__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

AVCodecParameters *FUNC_9(struct mp_codec_params *VAR_1)
{
    AVCodecParameters *VAR_2 = FUNC_1();
    if (!VAR_2)
        return ((void*)0);


    if (VAR_1->lav_codecpar) {
        if (FUNC_2(VAR_2, VAR_1->lav_codecpar) < 0)
            goto error;
        return VAR_2;
    }

    VAR_2->codec_type = FUNC_8(VAR_1->type);
    VAR_2->codec_id = FUNC_7(VAR_1->codec);
    VAR_2->codec_tag = VAR_1->codec_tag;
    if (VAR_1->extradata_size) {
        VAR_2->extradata =
            FUNC_0(VAR_1->extradata_size + VAR_0);
        if (!VAR_2->extradata)
            goto error;
        VAR_2->extradata_size = VAR_1->extradata_size;
        FUNC_4(VAR_2->extradata, VAR_1->extradata, VAR_2->extradata_size);
    }
    VAR_2->bits_per_coded_sample = VAR_1->bits_per_coded_sample;


    VAR_2->width = VAR_1->disp_w;
    VAR_2->height = VAR_1->disp_h;


    VAR_2->sample_rate = VAR_1->samplerate;
    VAR_2->bit_rate = VAR_1->bitrate;
    VAR_2->block_align = VAR_1->block_align;
    VAR_2->channels = VAR_1->channels.num;
    if (!FUNC_5(&VAR_1->channels))
        VAR_2->channel_layout = FUNC_6(&VAR_1->channels);

    return VAR_2;
error:
    FUNC_3(&VAR_2);
    return ((void*)0);
}
