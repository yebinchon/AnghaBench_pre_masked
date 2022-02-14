
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct plug_sched_data {int throttled; int pkts_to_release; int unplug_indefinite; } ;
struct Qdisc {int dummy; } ;


 struct sk_buff* FUNC_0 (struct Qdisc*) ;
 struct plug_sched_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct Qdisc *VAR_0)
{
 struct plug_sched_data *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->throttled)
  return ((void*)0);

 if (!VAR_1->unplug_indefinite) {
  if (!VAR_1->pkts_to_release) {



   VAR_1->throttled = 1;
   return ((void*)0);
  }
  VAR_1->pkts_to_release--;
 }

 return FUNC_0(VAR_0);
}
