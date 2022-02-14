
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_tgdtor_param {struct idletimer_tg_info* targinfo; } ;
struct idletimer_tg_info {TYPE_3__* timer; int label; } ;
struct TYPE_5__ {TYPE_3__* name; } ;
struct TYPE_4__ {TYPE_2__ attr; } ;
struct TYPE_6__ {scalar_t__ refcnt; TYPE_1__ attr; int work; int timer; int entry; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,...) ;
 int FUNC_7 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(const struct xt_tgdtor_param *VAR_2)
{
 const struct idletimer_tg_info *VAR_3 = VAR_2->targinfo;

 FUNC_6("destroy targinfo %s\n", VAR_3->label);

 FUNC_4(&VAR_1);

 if (--VAR_3->timer->refcnt == 0) {
  FUNC_6("deleting timer %s\n", VAR_3->label);

  FUNC_3(&VAR_3->timer->entry);
  FUNC_1(&VAR_3->timer->timer);
  FUNC_0(&VAR_3->timer->work);
  FUNC_7(VAR_0, &VAR_3->timer->attr.attr);
  FUNC_2(VAR_3->timer->attr.attr.name);
  FUNC_2(VAR_3->timer);
 } else {
  FUNC_6("decreased refcnt of timer %s to %u\n",
    VAR_3->label, VAR_3->timer->refcnt);
 }

 FUNC_5(&VAR_1);
}
