
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct htb_sched {int dummy; } ;
struct TYPE_5__ {TYPE_1__* clprio; } ;
struct htb_class {long prio_activity; scalar_t__ cmode; struct htb_class* parent; TYPE_2__ inner; } ;
struct TYPE_6__ {scalar_t__ rb_node; } ;
struct TYPE_4__ {TYPE_3__ feed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (long) ;
 int FUNC_1 (struct htb_sched*,struct htb_class*,long) ;
 int FUNC_2 (TYPE_3__*,struct htb_class*,int) ;

__attribute__((used)) static void FUNC_3(struct htb_sched *VAR_2, struct htb_class *VAR_3)
{
 struct htb_class *VAR_4 = VAR_3->parent;
 long VAR_5, VAR_6 = VAR_3->prio_activity;

 while (VAR_3->cmode == VAR_1 && VAR_4 && VAR_6) {
  VAR_5 = VAR_6;
  while (VAR_5) {
   int VAR_7 = FUNC_0(~VAR_5);
   VAR_5 &= ~(1 << VAR_7);

   if (VAR_4->inner.clprio[VAR_7].feed.rb_node)



    VAR_6 &= ~(1 << VAR_7);

   FUNC_2(&VAR_4->inner.clprio[VAR_7].feed, VAR_3, VAR_7);
  }
  VAR_4->prio_activity |= VAR_6;
  VAR_3 = VAR_4;
  VAR_4 = VAR_3->parent;

 }
 if (VAR_3->cmode == VAR_0 && VAR_6)
  FUNC_1(VAR_2, VAR_3, VAR_6);
}
