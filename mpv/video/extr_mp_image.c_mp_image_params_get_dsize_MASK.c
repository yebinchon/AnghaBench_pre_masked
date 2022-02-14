
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image_params {int w; int h; int p_w; int p_h; } ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ) ;

void FUNC_1(const struct mp_image_params *VAR_1,
                               int *VAR_2, int *VAR_3)
{
    *VAR_2 = VAR_1->w;
    *VAR_3 = VAR_1->h;
    if (VAR_1->p_w > VAR_1->p_h && VAR_1->p_h >= 1)
        *VAR_2 = FUNC_0(*VAR_2 * (int64_t)VAR_1->p_w / VAR_1->p_h, 1, VAR_0);
    if (VAR_1->p_h > VAR_1->p_w && VAR_1->p_w >= 1)
        *VAR_3 = FUNC_0(*VAR_3 * (int64_t)VAR_1->p_h / VAR_1->p_w, 1, VAR_0);
}
