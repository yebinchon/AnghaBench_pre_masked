
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct codel_sched_data {int drop_overlimit; } ;
struct Qdisc {scalar_t__ limit; } ;


 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 int FUNC_3 (struct sk_buff*,struct Qdisc*) ;
 struct codel_sched_data* FUNC_4 (struct Qdisc*) ;
 scalar_t__ FUNC_5 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_0, struct Qdisc *VAR_1,
          struct sk_buff **VAR_2)
{
 struct codel_sched_data *VAR_3;

 if (FUNC_1(FUNC_5(VAR_1) < VAR_1->limit)) {
  FUNC_0(VAR_0);
  return FUNC_3(VAR_0, VAR_1);
 }
 VAR_3 = FUNC_4(VAR_1);
 VAR_3->drop_overlimit++;
 return FUNC_2(VAR_0, VAR_1, VAR_2);
}
