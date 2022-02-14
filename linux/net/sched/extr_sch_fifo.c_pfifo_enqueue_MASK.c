
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ qlen; } ;
struct Qdisc {scalar_t__ limit; TYPE_1__ q; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 int FUNC_2 (struct sk_buff*,struct Qdisc*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0, struct Qdisc *VAR_1,
    struct sk_buff **VAR_2)
{
 if (FUNC_0(VAR_1->q.qlen < VAR_1->limit))
  return FUNC_2(VAR_0, VAR_1);

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
