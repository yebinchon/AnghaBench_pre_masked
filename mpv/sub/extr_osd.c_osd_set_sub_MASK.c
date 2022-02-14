
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_state {int want_redraw_notification; int lock; struct osd_object** objs; } ;
struct osd_object {int vo_change_id; struct dec_sub* sub; } ;
struct dec_sub {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct osd_state *VAR_1, int VAR_2, struct dec_sub *VAR_3)
{
    FUNC_0(&VAR_1->lock);
    if (VAR_2 >= 0 && VAR_2 < 2) {
        struct osd_object *VAR_4 = VAR_1->objs[VAR_0 + VAR_2];
        VAR_4->sub = VAR_3;
        VAR_4->vo_change_id += 1;
    }
    VAR_1->want_redraw_notification = 1;
    FUNC_1(&VAR_1->lock);
}
