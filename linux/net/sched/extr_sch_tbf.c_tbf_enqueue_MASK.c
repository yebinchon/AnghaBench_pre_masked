
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tbf_sched_data {unsigned int max_size; int qdisc; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int qlen; } ;
struct TYPE_3__ {unsigned int backlog; } ;
struct Qdisc {TYPE_2__ q; TYPE_1__ qstats; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 int FUNC_2 (struct sk_buff*,int ,struct sk_buff**) ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 struct tbf_sched_data* FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (struct Qdisc*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_1, struct Qdisc *VAR_2,
         struct sk_buff **VAR_3)
{
 struct tbf_sched_data *VAR_4 = FUNC_4(VAR_2);
 unsigned int VAR_5 = FUNC_3(VAR_1);
 int VAR_6;

 if (FUNC_3(VAR_1) > VAR_4->max_size) {
  if (FUNC_7(VAR_1) &&
      FUNC_6(VAR_1, VAR_4->max_size))
   return FUNC_8(VAR_1, VAR_2, VAR_3);
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 }
 VAR_6 = FUNC_2(VAR_1, VAR_4->qdisc, VAR_3);
 if (VAR_6 != VAR_0) {
  if (FUNC_0(VAR_6))
   FUNC_5(VAR_2);
  return VAR_6;
 }

 VAR_2->qstats.backlog += VAR_5;
 VAR_2->q.qlen++;
 return VAR_0;
}
