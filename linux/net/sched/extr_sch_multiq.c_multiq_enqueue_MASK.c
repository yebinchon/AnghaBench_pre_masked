
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct sk_buff**) ;
 struct Qdisc* FUNC_1 (struct sk_buff*,struct Qdisc*,int*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 int FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int
FUNC_5(struct sk_buff *VAR_2, struct Qdisc *VAR_3,
        struct sk_buff **VAR_4)
{
 struct Qdisc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2, VAR_3, &VAR_6);
 VAR_6 = FUNC_3(VAR_2, VAR_5, VAR_4);
 if (VAR_6 == VAR_0) {
  VAR_3->q.qlen++;
  return VAR_0;
 }
 if (FUNC_2(VAR_6))
  FUNC_4(VAR_3);
 return VAR_6;
}
