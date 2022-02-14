
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {scalar_t__ undertime; } ;
struct cbq_sched_data {scalar_t__ toplevel; scalar_t__ wd_expires; int watchdog; TYPE_1__ link; scalar_t__ now; scalar_t__ tx_class; } ;
struct TYPE_4__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_2__ q; } ;
typedef scalar_t__ psched_time_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sk_buff* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct cbq_sched_data*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct Qdisc*,struct sk_buff*) ;
 struct cbq_sched_data* FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (int *,scalar_t__) ;

__attribute__((used)) static struct sk_buff *
FUNC_7(struct Qdisc *VAR_2)
{
 struct sk_buff *VAR_3;
 struct cbq_sched_data *VAR_4 = FUNC_4(VAR_2);
 psched_time_t VAR_5;

 VAR_5 = FUNC_2();

 if (VAR_4->tx_class)
  FUNC_1(VAR_4);

 VAR_4->now = VAR_5;

 for (;;) {
  VAR_4->wd_expires = 0;

  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3) {
   FUNC_3(VAR_2, VAR_3);
   VAR_2->q.qlen--;
   return VAR_3;
  }
  if (VAR_4->toplevel == VAR_1 &&
      VAR_4->link.undertime == VAR_0)
   break;

  VAR_4->toplevel = VAR_1;
  VAR_4->link.undertime = VAR_0;
 }





 if (VAR_2->q.qlen) {
  FUNC_5(VAR_2);
  if (VAR_4->wd_expires)
   FUNC_6(&VAR_4->watchdog,
      VAR_5 + VAR_4->wd_expires);
 }
 return ((void*)0);
}
