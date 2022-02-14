
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image_pool {int dummy; } ;
struct mp_image {int h; int w; int imgfmt; } ;


 int FUNC_0 (struct mp_image*,struct mp_image*) ;
 int FUNC_1 (struct mp_image*,struct mp_image*) ;
 struct mp_image* FUNC_2 (struct mp_image_pool*,int ,int ,int ) ;

struct mp_image *FUNC_3(struct mp_image_pool *VAR_0,
                                        struct mp_image *VAR_1)
{
    struct mp_image *VAR_2 = FUNC_2(VAR_0, VAR_1->imgfmt, VAR_1->w, VAR_1->h);
    if (VAR_2) {
        FUNC_0(VAR_2, VAR_1);
        FUNC_1(VAR_2, VAR_1);
    }
    return VAR_2;
}
