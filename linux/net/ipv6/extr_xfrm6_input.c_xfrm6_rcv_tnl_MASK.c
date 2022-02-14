
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ip6_tnl {int dummy; } ;
struct TYPE_2__ {size_t nhoff; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int * FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ,int ,struct ip6_tnl*) ;

int FUNC_3(struct sk_buff *VAR_0, struct ip6_tnl *VAR_1)
{
 return FUNC_2(VAR_0, FUNC_1(VAR_0)[FUNC_0(VAR_0)->nhoff],
        0, VAR_1);
}
