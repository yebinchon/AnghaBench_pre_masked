
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct spdifContext {int codec_id; int need_close; int fmt; int sstride; int use_dts_hd; TYPE_3__* lavf_ctx; } ;
struct mp_filter {struct spdifContext* priv; } ;
struct mp_chmap {int dummy; } ;
struct TYPE_12__ {int direct; } ;
struct TYPE_11__ {TYPE_4__* pb; int oformat; } ;
struct TYPE_10__ {TYPE_1__* codecpar; } ;
struct TYPE_9__ {int codec_id; } ;
typedef TYPE_2__ AVStream ;
typedef int AVPacket ;
typedef TYPE_3__ AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct mp_filter*,char*) ;
 int FUNC_1 (struct mp_filter*,char*,int,int) ;
 int VAR_10 ;
 int FUNC_2 () ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int **,char*,int,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (char*,int *,int *) ;
 void* FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 () ;
 TYPE_2__* FUNC_9 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int **) ;
 TYPE_4__* FUNC_11 (void*,int ,int,struct spdifContext*,int *,int ,int *) ;
 int FUNC_12 (struct mp_filter*) ;
 int FUNC_13 (struct mp_filter*,int *,int*,int*) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,struct mp_chmap*) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (struct mp_chmap*,int) ;
 int FUNC_20 (struct mp_filter*) ;
 int FUNC_21 (struct spdifContext*,int ) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_22(struct mp_filter *VAR_12, AVPacket *VAR_13)
{
    struct spdifContext *VAR_14 = VAR_12->priv;

    int VAR_15 = VAR_9;
    int VAR_16 = 0;
    FUNC_13(VAR_12, VAR_13, &VAR_15, &VAR_16);
    FUNC_1(VAR_12, "In: profile=%d samplerate=%d\n", VAR_15, VAR_16);

    AVFormatContext *VAR_17 = FUNC_8();
    if (!VAR_17)
        goto fail;

    VAR_14->lavf_ctx = VAR_17;

    VAR_17->oformat = FUNC_6("spdif", ((void*)0), ((void*)0));
    if (!VAR_17->oformat)
        goto fail;

    void *VAR_18 = FUNC_7(VAR_10);
    if (!VAR_18)
        FUNC_2();
    VAR_17->pb = FUNC_11(VAR_18, VAR_10, 1, VAR_14, ((void*)0),
                                      VAR_11, ((void*)0));
    if (!VAR_17->pb) {
        FUNC_5(VAR_18);
        goto fail;
    }






    AVStream *VAR_19 = FUNC_9(VAR_17, 0);
    if (!VAR_19)
        goto fail;

    VAR_19->codecpar->codec_id = VAR_14->codec_id;

    AVDictionary *VAR_20 = ((void*)0);

    VAR_14->fmt = FUNC_14();
    FUNC_21(VAR_14, VAR_14->fmt);

    int VAR_21 = 0;
    int VAR_22 = 0;
    int VAR_23 = 0;
    switch (VAR_14->codec_id) {
    case 133:
        VAR_22 = VAR_0;
        VAR_23 = 48000;
        VAR_21 = 2;
        break;
    case 132:
        VAR_22 = VAR_1;
        VAR_23 = VAR_16 > 0 ? VAR_16 : 48000;
        VAR_21 = 2;
        break;
    case 131: {
        bool VAR_24 = VAR_15 == VAR_7 ||
                     VAR_15 == VAR_8 ||
                     VAR_15 == VAR_9;





        int VAR_25 = VAR_15 == VAR_7 ?
                                         2 : 8;
        if (VAR_14->use_dts_hd && VAR_24) {
            FUNC_4(&VAR_20, "dtshd_rate",
                            VAR_25 * 96000, 0);
            VAR_22 = VAR_3;
            VAR_23 = 192000;
            VAR_21 = VAR_25;
        } else {
            VAR_22 = VAR_2;
            VAR_23 = 48000;
            VAR_21 = 2;
        }
        break;
    }
    case 130:
        VAR_22 = VAR_4;
        VAR_23 = 192000;
        VAR_21 = 2;
        break;
    case 129:
        VAR_22 = VAR_5;
        VAR_23 = 48000;
        VAR_21 = 2;
        break;
    case 128:
        VAR_22 = VAR_6;
        VAR_23 = 192000;
        VAR_21 = 8;
        break;
    default:
        FUNC_2();
    }

    struct mp_chmap VAR_26;
    FUNC_19(&VAR_26, VAR_21);
    FUNC_16(VAR_14->fmt, &VAR_26);
    FUNC_17(VAR_14->fmt, VAR_22);
    FUNC_18(VAR_14->fmt, VAR_23);

    VAR_14->sstride = FUNC_15(VAR_14->fmt);

    if (FUNC_10(VAR_17, &VAR_20) < 0) {
        FUNC_0(VAR_12, "libavformat spdif initialization failed.\n");
        FUNC_3(&VAR_20);
        goto fail;
    }
    FUNC_3(&VAR_20);

    VAR_14->need_close = 1;

    return 0;

fail:
    FUNC_12(VAR_12);
    FUNC_20(VAR_12);
    return -1;
}
