
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_result {int classid; } ;
struct tcf_proto {int dummy; } ;
struct sk_buff {int priority; } ;
struct sfq_sched_data {scalar_t__ divisor; int filter_list; } ;
struct Qdisc {scalar_t__ handle; } ;


 int VAR_0 ;




 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct sfq_sched_data* FUNC_2 (struct Qdisc*) ;
 struct tcf_proto* FUNC_3 (int ) ;
 unsigned int FUNC_4 (struct sfq_sched_data*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct tcf_proto*,struct tcf_result*,int) ;

__attribute__((used)) static unsigned int FUNC_6(struct sk_buff *VAR_3, struct Qdisc *VAR_4,
     int *VAR_5)
{
 struct sfq_sched_data *VAR_6 = FUNC_2(VAR_4);
 struct tcf_result VAR_7;
 struct tcf_proto *VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_3->priority) == VAR_4->handle &&
     FUNC_1(VAR_3->priority) > 0 &&
     FUNC_1(VAR_3->priority) <= VAR_6->divisor)
  return FUNC_1(VAR_3->priority);

 VAR_8 = FUNC_3(VAR_6->filter_list);
 if (!VAR_8)
  return FUNC_4(VAR_6, VAR_3) + 1;

 *VAR_5 = VAR_0 | VAR_1;
 VAR_9 = FUNC_5(VAR_3, VAR_8, &VAR_7, 0);
 if (VAR_9 >= 0) {
  if (FUNC_1(VAR_7.classid) <= VAR_6->divisor)
   return FUNC_1(VAR_7.classid);
 }
 return 0;
}
