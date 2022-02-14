
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct spdifContext {scalar_t__ codec_id; } ;
struct mp_filter {struct spdifContext* priv; } ;
struct TYPE_17__ {int profile; int sample_rate; } ;
struct TYPE_16__ {int flags; } ;
struct TYPE_15__ {int size; int data; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_2__ AVCodecParserContext ;
typedef TYPE_3__ AVCodecContext ;
typedef int AVCodec ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mp_filter*,char*) ;
 int VAR_2 ;
 int * FUNC_1 () ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int **,int*,int ,int ,int ,int ,int ) ;
 TYPE_3__* FUNC_6 (int *) ;
 int * FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_3__**) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int *,int *) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_11 (TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_12(struct mp_filter *VAR_3, AVPacket *VAR_4,
                                   int *VAR_5, int *VAR_6)
{
    struct spdifContext *VAR_7 = VAR_3->priv;
    int VAR_8 = VAR_1;
    AVCodecContext *VAR_9 = ((void*)0);
    AVFrame *VAR_10 = ((void*)0);

    AVCodecParserContext *VAR_11 = FUNC_4(VAR_7->codec_id);
    if (VAR_11) {

        VAR_11->flags |= VAR_2;

        VAR_9 = FUNC_6(((void*)0));
        if (!VAR_9) {
            FUNC_3(VAR_11);
            goto done;
        }

        uint8_t *VAR_12 = ((void*)0);
        int VAR_13 = 0;
        FUNC_5(VAR_11, VAR_9, &VAR_12, &VAR_13, VAR_4->data, VAR_4->size, 0, 0, 0);
        *VAR_5 = VAR_8 = VAR_9->profile;
        *VAR_6 = VAR_9->sample_rate;

        FUNC_8(&VAR_9);
        FUNC_3(VAR_11);
    }

    if (VAR_8 != VAR_1 || VAR_7->codec_id != VAR_0)
        return;

    AVCodec *VAR_14 = FUNC_7(VAR_7->codec_id);
    if (!VAR_14)
        goto done;

    VAR_10 = FUNC_1();
    if (!VAR_10)
        goto done;

    VAR_9 = FUNC_6(VAR_14);
    if (!VAR_9)
        goto done;

    if (FUNC_9(VAR_9, VAR_14, ((void*)0)) < 0)
        goto done;

    if (FUNC_11(VAR_9, VAR_4) < 0)
        goto done;
    if (FUNC_10(VAR_9, VAR_10) < 0)
        goto done;

    *VAR_5 = VAR_8 = VAR_9->profile;
    *VAR_6 = VAR_9->sample_rate;

done:
    FUNC_2(&VAR_10);
    FUNC_8(&VAR_9);

    if (VAR_8 == VAR_1)
        FUNC_0(VAR_3, "Failed to parse codec profile.\n");
}
