
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int qlen; } ;
struct TYPE_4__ {unsigned int backlog; } ;
struct Qdisc {TYPE_1__ q; TYPE_2__ qstats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct sk_buff**) ;
 scalar_t__ FUNC_1 (int) ;
 struct Qdisc* FUNC_2 (struct sk_buff*,struct Qdisc*,int*) ;
 int FUNC_3 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct Qdisc*) ;

__attribute__((used)) static int
FUNC_6(struct sk_buff *VAR_2, struct Qdisc *VAR_3, struct sk_buff **VAR_4)
{
 unsigned int VAR_5 = FUNC_4(VAR_2);
 struct Qdisc *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_2, VAR_3, &VAR_7);
 VAR_7 = FUNC_3(VAR_2, VAR_6, VAR_4);
 if (VAR_7 == VAR_0) {
  VAR_3->qstats.backlog += VAR_5;
  VAR_3->q.qlen++;
  return VAR_0;
 }
 if (FUNC_1(VAR_7))
  FUNC_5(VAR_3);
 return VAR_7;
}
