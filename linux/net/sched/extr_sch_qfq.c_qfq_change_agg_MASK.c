
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qfq_sched {int dummy; } ;
struct qfq_class {int dummy; } ;
struct qfq_aggregate {int dummy; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qfq_aggregate* FUNC_0 (int,int ) ;
 struct qfq_sched* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (struct qfq_sched*,struct qfq_aggregate*,struct qfq_class*) ;
 int FUNC_3 (struct qfq_sched*,struct qfq_class*) ;
 struct qfq_aggregate* FUNC_4 (struct qfq_sched*,int ,int ) ;
 int FUNC_5 (struct qfq_sched*,struct qfq_aggregate*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_2, struct qfq_class *VAR_3, u32 VAR_4,
      u32 VAR_5)
{
 struct qfq_sched *VAR_6 = FUNC_1(VAR_2);
 struct qfq_aggregate *VAR_7 = FUNC_4(VAR_6, VAR_5, VAR_4);

 if (VAR_7 == ((void*)0)) {
  VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
  if (VAR_7 == ((void*)0))
   return -VAR_0;
  FUNC_5(VAR_6, VAR_7, VAR_5, VAR_4);
 }
 FUNC_3(VAR_6, VAR_3);
 FUNC_2(VAR_6, VAR_7, VAR_3);

 return 0;
}
