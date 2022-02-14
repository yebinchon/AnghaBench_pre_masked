
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct TYPE_3__ {scalar_t__ suppress_frag_ndisc; } ;
struct inet6_dev {TYPE_1__ cnf; } ;
struct TYPE_4__ {int flags; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 struct inet6_dev* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bool FUNC_3(struct sk_buff *VAR_1)
{
 struct inet6_dev *VAR_2 = FUNC_1(VAR_1->dev);

 if (!VAR_2)
  return 1;
 if (FUNC_0(VAR_1)->flags & VAR_0 &&
     VAR_2->cnf.suppress_frag_ndisc) {
  FUNC_2("Received fragmented ndisc packet. Carefully consider disabling suppress_frag_ndisc.\n");
  return 1;
 }
 return 0;
}
