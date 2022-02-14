
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sub_bitmaps {int dummy; } ;
struct osd_state {int want_redraw_notification; int lock; TYPE_1__** objs; } ;
struct TYPE_2__ {int vo_change_id; struct sub_bitmaps* external2; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct osd_state *VAR_1, struct sub_bitmaps *VAR_2)
{
    FUNC_0(&VAR_1->lock);
    VAR_1->objs[VAR_0]->external2 = VAR_2;
    VAR_1->objs[VAR_0]->vo_change_id += 1;
    VAR_1->want_redraw_notification = 1;
    FUNC_1(&VAR_1->lock);
}
