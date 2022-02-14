
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct taprio_sched {int flags; struct Qdisc** qdiscs; } ;
struct sk_buff {int tstamp; scalar_t__ sk; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct Qdisc*) ;
 int FUNC_2 (struct sk_buff*,struct Qdisc*) ;
 int FUNC_3 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 int FUNC_4 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 struct taprio_sched* FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_1, struct Qdisc *VAR_2,
     struct sk_buff **VAR_3)
{
 struct taprio_sched *VAR_4 = FUNC_5(VAR_2);
 struct Qdisc *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_7(VAR_1);

 VAR_5 = VAR_4->qdiscs[VAR_6];
 if (FUNC_9(!VAR_5))
  return FUNC_3(VAR_1, VAR_2, VAR_3);

 if (VAR_1->sk && FUNC_8(VAR_1->sk, VAR_0)) {
  if (!FUNC_2(VAR_1, VAR_2))
   return FUNC_3(VAR_1, VAR_2, VAR_3);
 } else if (FUNC_0(VAR_4->flags)) {
  VAR_1->tstamp = FUNC_1(VAR_1, VAR_2);
  if (!VAR_1->tstamp)
   return FUNC_3(VAR_1, VAR_2, VAR_3);
 }

 FUNC_6(VAR_2, VAR_1);
 VAR_2->q.qlen++;

 return FUNC_4(VAR_1, VAR_5, VAR_3);
}
