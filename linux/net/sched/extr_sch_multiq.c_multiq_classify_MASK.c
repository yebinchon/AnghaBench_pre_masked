
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tcf_result {int dummy; } ;
struct tcf_proto {int dummy; } ;
struct sk_buff {int dummy; } ;
struct multiq_sched_data {size_t bands; struct Qdisc** queues; int filter_list; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 struct multiq_sched_data* FUNC_0 (struct Qdisc*) ;
 struct tcf_proto* FUNC_1 (int ) ;
 size_t FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct tcf_proto*,struct tcf_result*,int) ;

__attribute__((used)) static struct Qdisc *
FUNC_4(struct sk_buff *VAR_3, struct Qdisc *VAR_4, int *VAR_5)
{
 struct multiq_sched_data *VAR_6 = FUNC_0(VAR_4);
 u32 VAR_7;
 struct tcf_result VAR_8;
 struct tcf_proto *VAR_9 = FUNC_1(VAR_6->filter_list);
 int VAR_10;

 *VAR_5 = VAR_0 | VAR_1;
 VAR_10 = FUNC_3(VAR_3, VAR_9, &VAR_8, 0);
 VAR_7 = FUNC_2(VAR_3);

 if (VAR_7 >= VAR_6->bands)
  return VAR_6->queues[0];

 return VAR_6->queues[VAR_7];
}
