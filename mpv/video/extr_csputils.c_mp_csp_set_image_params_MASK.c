
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image_params {int color; } ;
struct mp_csp_params {int color; } ;


 int FUNC_0 (struct mp_image_params*) ;

void FUNC_1(struct mp_csp_params *VAR_0,
                             const struct mp_image_params *VAR_1)
{
    struct mp_image_params VAR_2 = *VAR_1;
    FUNC_0(&VAR_2);
    VAR_0->color = VAR_2.color;
}
