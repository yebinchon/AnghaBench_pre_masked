
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int tstamp; } ;
struct etf_sched_data {int watchdog; int delta; } ;
struct Qdisc {int dummy; } ;
typedef int ktime_t ;


 struct sk_buff* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 struct etf_sched_data* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct Qdisc *VAR_0)
{
 struct etf_sched_data *VAR_1 = FUNC_3(VAR_0);
 struct sk_buff *VAR_2 = FUNC_0(VAR_0);
 ktime_t VAR_3;

 if (!VAR_2) {
  FUNC_4(&VAR_1->watchdog);
  return;
 }

 VAR_3 = FUNC_1(VAR_2->tstamp, VAR_1->delta);
 FUNC_5(&VAR_1->watchdog, FUNC_2(VAR_3));
}
