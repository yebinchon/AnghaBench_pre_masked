
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cbs_sched_data {int (* enqueue ) (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;} ;
struct Qdisc {int dummy; } ;


 struct cbs_sched_data* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0, struct Qdisc *VAR_1,
         struct sk_buff **VAR_2)
{
 struct cbs_sched_data *VAR_3 = FUNC_0(VAR_1);

 return VAR_3->enqueue(VAR_0, VAR_1, VAR_2);
}
