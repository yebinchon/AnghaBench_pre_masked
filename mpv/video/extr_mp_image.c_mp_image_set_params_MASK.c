
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image_params {int h; int w; int imgfmt; } ;
struct mp_image {struct mp_image_params params; } ;


 int FUNC_0 (struct mp_image*,int ,int ) ;
 int FUNC_1 (struct mp_image*,int ) ;

void FUNC_2(struct mp_image *VAR_0,
                         const struct mp_image_params *VAR_1)
{

    FUNC_1(VAR_0, VAR_1->imgfmt);
    FUNC_0(VAR_0, VAR_1->w, VAR_1->h);
    VAR_0->params = *VAR_1;
}
