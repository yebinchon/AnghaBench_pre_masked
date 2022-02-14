
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image_pool {int fmt; int w; int h; int allocator_ctx; struct mp_image* (* allocator ) (int ,int,int,int) ;} ;
struct mp_image {int dummy; } ;


 struct mp_image* FUNC_0 (int,int,int) ;
 int FUNC_1 (struct mp_image_pool*,struct mp_image*) ;
 int FUNC_2 (struct mp_image_pool*) ;
 struct mp_image* FUNC_3 (struct mp_image_pool*,int,int,int) ;
 struct mp_image* FUNC_4 (int ,int,int,int) ;

struct mp_image *FUNC_5(struct mp_image_pool *VAR_0, int VAR_1,
                                   int VAR_2, int VAR_3)
{
    if (!VAR_0)
        return FUNC_0(VAR_1, VAR_2, VAR_3);
    struct mp_image *VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
    if (!VAR_4) {
        if (VAR_1 != VAR_0->fmt || VAR_2 != VAR_0->w || VAR_3 != VAR_0->h)
            FUNC_2(VAR_0);
        VAR_0->fmt = VAR_1;
        VAR_0->w = VAR_2;
        VAR_0->h = VAR_3;
        if (VAR_0->allocator) {
            VAR_4 = VAR_0->allocator(VAR_0->allocator_ctx, VAR_1, VAR_2, VAR_3);
        } else {
            VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
        }
        if (!VAR_4)
            return ((void*)0);
        FUNC_1(VAR_0, VAR_4);
        VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
    }
    return VAR_4;
}
