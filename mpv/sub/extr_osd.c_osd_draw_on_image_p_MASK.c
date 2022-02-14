
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_state {int dummy; } ;
struct mp_osd_res {int dummy; } ;
struct mp_image_pool {int dummy; } ;
struct mp_image {int dummy; } ;
struct draw_on_image_closure {struct mp_image_pool* member_2; struct mp_image* member_1; struct osd_state* member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct osd_state*,struct mp_osd_res,double,int,int ,int *,struct draw_on_image_closure*) ;

void FUNC_1(struct osd_state *VAR_2, struct mp_osd_res VAR_3,
                         double VAR_4, int VAR_5,
                         struct mp_image_pool *VAR_6, struct mp_image *VAR_7)
{
    struct draw_on_image_closure VAR_8 = {VAR_2, VAR_7, VAR_6};
    FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_1,
             &VAR_0, &VAR_8);
}
