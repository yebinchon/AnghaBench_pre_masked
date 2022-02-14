
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct osd_state {int want_redraw_notification; int lock; int opts_cache; TYPE_1__** objs; } ;
struct TYPE_2__ {int osd_changed; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct osd_state *VAR_1)
{
    FUNC_1(&VAR_1->lock);
    VAR_1->objs[VAR_0]->osd_changed = 1;
    VAR_1->want_redraw_notification = 1;

    FUNC_0(VAR_1->opts_cache);
    FUNC_2(&VAR_1->lock);
}
