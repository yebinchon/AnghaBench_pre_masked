
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_result {int classid; } ;
struct tcf_proto {int dummy; } ;
struct sk_buff {int priority; } ;
struct fq_codel_sched_data {scalar_t__ flows_cnt; int filter_list; } ;
struct Qdisc {scalar_t__ handle; } ;


 int VAR_0 ;




 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_2 (struct fq_codel_sched_data*,struct sk_buff*) ;
 struct fq_codel_sched_data* FUNC_3 (struct Qdisc*) ;
 struct tcf_proto* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,struct tcf_proto*,struct tcf_result*,int) ;

__attribute__((used)) static unsigned int FUNC_6(struct sk_buff *VAR_3, struct Qdisc *VAR_4,
          int *VAR_5)
{
 struct fq_codel_sched_data *VAR_6 = FUNC_3(VAR_4);
 struct tcf_proto *VAR_7;
 struct tcf_result VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_3->priority) == VAR_4->handle &&
     FUNC_1(VAR_3->priority) > 0 &&
     FUNC_1(VAR_3->priority) <= VAR_6->flows_cnt)
  return FUNC_1(VAR_3->priority);

 VAR_7 = FUNC_4(VAR_6->filter_list);
 if (!VAR_7)
  return FUNC_2(VAR_6, VAR_3) + 1;

 *VAR_5 = VAR_0 | VAR_1;
 VAR_9 = FUNC_5(VAR_3, VAR_7, &VAR_8, 0);
 if (VAR_9 >= 0) {
  if (FUNC_1(VAR_8.classid) <= VAR_6->flows_cnt)
   return FUNC_1(VAR_8.classid);
 }
 return 0;
}
