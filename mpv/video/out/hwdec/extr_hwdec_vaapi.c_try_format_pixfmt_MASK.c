
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ra_hwdec {struct priv_owner* priv; } ;
struct priv_owner {int* formats; TYPE_1__* ctx; } ;
struct mp_image {int params; } ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {int sw_format; int width; int height; int format; } ;
struct TYPE_8__ {int av_device_ref; } ;
typedef TYPE_2__ AVHWFramesContext ;
typedef int AVFrame ;
typedef TYPE_3__ AVBufferRef ;


 int VAR_0 ;
 int FUNC_0 (struct priv_owner*,int*,int,int) ;
 int FUNC_1 (TYPE_3__**) ;
 int * FUNC_2 () ;
 int FUNC_3 (int **) ;
 TYPE_3__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int *,int ) ;
 struct mp_image* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct mp_image*) ;
 scalar_t__ FUNC_11 (struct ra_hwdec*,struct mp_image*) ;

__attribute__((used)) static void FUNC_12(struct ra_hwdec *VAR_1, enum AVPixelFormat VAR_2)
{
    struct priv_owner *VAR_3 = VAR_1->priv;

    int VAR_4 = FUNC_9(VAR_2);
    if (!VAR_4)
        return;

    int VAR_5 = 0;
    for (int VAR_6 = 0; VAR_3->formats && VAR_3->formats[VAR_6]; VAR_6++) {
        if (VAR_3->formats[VAR_6] == VAR_4)
            return;
        VAR_5 += 1;
    }

    AVBufferRef *VAR_7 = ((void*)0);
    struct mp_image *VAR_8 = ((void*)0);
    AVFrame *VAR_9 = ((void*)0);
    VAR_7 = FUNC_4(VAR_3->ctx->av_device_ref);
    if (!VAR_7)
        goto err;
    AVHWFramesContext *VAR_10 = (void *)VAR_7->data;
    VAR_10->format = VAR_0;
    VAR_10->sw_format = VAR_2;
    VAR_10->width = 128;
    VAR_10->height = 128;
    if (FUNC_5(VAR_7) < 0)
        goto err;
    VAR_9 = FUNC_2();
    if (!VAR_9)
        goto err;
    if (FUNC_6(VAR_7, VAR_9, 0) < 0)
        goto err;
    VAR_8 = FUNC_7(VAR_9);
    if (!VAR_8 || !FUNC_8(&VAR_8->params))
        goto err;
    if (FUNC_11(VAR_1, VAR_8)) {
        FUNC_0(VAR_3, VAR_3->formats, VAR_5, VAR_4);
        FUNC_0(VAR_3, VAR_3->formats, VAR_5, 0);
    }
err:
    FUNC_10(VAR_8);
    FUNC_3(&VAR_9);
    FUNC_1(&VAR_7);
}
