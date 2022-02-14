
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_imgfmt_desc {int num_planes; int id; } ;
struct mp_image_params {int imgfmt; } ;
struct mp_image {struct mp_image_params params; int num_planes; int imgfmt; struct mp_imgfmt_desc fmt; } ;


 struct mp_imgfmt_desc FUNC_0 (int) ;

void FUNC_1(struct mp_image *VAR_0, int VAR_1)
{
    struct mp_image_params VAR_2 = VAR_0->params;
    struct mp_imgfmt_desc VAR_3 = FUNC_0(VAR_1);
    VAR_2.imgfmt = VAR_3.id;
    VAR_0->fmt = VAR_3;
    VAR_0->imgfmt = VAR_3.id;
    VAR_0->num_planes = VAR_3.num_planes;
    VAR_0->params = VAR_2;
}
