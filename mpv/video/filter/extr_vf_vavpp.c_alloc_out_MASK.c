
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct priv {int hw_pool; int av_device_ref; int queue; } ;
struct mp_image {int h; int w; TYPE_1__* hwctx; } ;
struct mp_filter {struct priv* priv; } ;
struct TYPE_4__ {int width; int height; } ;
struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_2__ AVHWFramesContext ;
typedef int AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mp_filter*,char*) ;
 int FUNC_1 () ;
 int * FUNC_2 () ;
 int FUNC_3 (int **) ;
 scalar_t__ FUNC_4 (int ,int *,int ) ;
 struct mp_image* FUNC_5 (int *) ;
 int FUNC_6 (struct mp_image*,int ,int ) ;
 struct mp_image* FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ,int ,int,int) ;

__attribute__((used)) static struct mp_image *FUNC_9(struct mp_filter *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;

    struct mp_image *VAR_4 = FUNC_7(VAR_3->queue);
    if (!VAR_4 || !VAR_4->hwctx)
        return ((void*)0);

    AVHWFramesContext *VAR_5 = (void *)VAR_4->hwctx->data;

    int VAR_6 = VAR_5->width;
    int VAR_7 = VAR_5->height;

    if (!FUNC_8(&VAR_3->hw_pool, VAR_3->av_device_ref,
                                     VAR_1, VAR_0, VAR_6, VAR_7))
    {
        FUNC_0(VAR_2, "Failed to create hw pool.\n");
        return ((void*)0);
    }

    AVFrame *VAR_8 = FUNC_2();
    if (!VAR_8)
        FUNC_1();
    if (FUNC_4(VAR_3->hw_pool, VAR_8, 0) < 0) {
        FUNC_0(VAR_2, "Failed to allocate frame from hw pool.\n");
        FUNC_3(&VAR_8);
        return ((void*)0);
    }
    struct mp_image *VAR_9 = FUNC_5(VAR_8);
    FUNC_3(&VAR_8);
    if (!VAR_9) {
        FUNC_0(VAR_2, "Unknown error.\n");
        return ((void*)0);
    }
    FUNC_6(VAR_9, VAR_4->w, VAR_4->h);
    return VAR_9;
}
