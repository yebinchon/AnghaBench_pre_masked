
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_image_pool {int dummy; } ;
struct mp_image {int h; int w; TYPE_2__* hwctx; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {int height; int width; } ;
typedef TYPE_1__ AVHWFramesContext ;
typedef int AVFrame ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct mp_image*,struct mp_image*) ;
 struct mp_image* FUNC_5 (int *) ;
 int FUNC_6 (struct mp_image*) ;
 struct mp_image* FUNC_7 (struct mp_image_pool*,int,int ,int ) ;
 int FUNC_8 (struct mp_image*,int ,int ) ;
 int * FUNC_9 (struct mp_image*) ;
 int * FUNC_10 (struct mp_image*) ;
 int FUNC_11 (struct mp_image**) ;

struct mp_image *FUNC_12(struct mp_image *VAR_0,
                                      struct mp_image_pool *VAR_1)
{
    int VAR_2 = FUNC_6(VAR_0);
    if (!VAR_2)
        return ((void*)0);

    FUNC_0(VAR_0->hwctx);
    AVHWFramesContext *VAR_3 = (void *)VAR_0->hwctx->data;

    struct mp_image *VAR_4 =
        FUNC_7(VAR_1, VAR_2, VAR_3->width, VAR_3->height);
    if (!VAR_4)
        return ((void*)0);


    AVFrame *VAR_5 = FUNC_10(VAR_4);
    if (!VAR_5)
        return ((void*)0);

    AVFrame *VAR_6 = FUNC_9(VAR_0);
    if (!VAR_6) {
        FUNC_2(VAR_5);
        return ((void*)0);
    }

    int VAR_7 = FUNC_3(VAR_5, VAR_6, 0);
    FUNC_1(&VAR_6);
    VAR_4 = FUNC_5(VAR_5);
    FUNC_1(&VAR_5);
    if (VAR_7 >= 0 && VAR_4) {
        FUNC_8(VAR_4, VAR_0->w, VAR_0->h);
        FUNC_4(VAR_4, VAR_0);
    } else {
        FUNC_11(&VAR_4);
    }
    return VAR_4;
}
