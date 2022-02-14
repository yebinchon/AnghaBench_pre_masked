
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct net_device*,int *,int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;

void FUNC_4(struct net_device *VAR_1, gfp_t VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_0(VAR_1, ((void*)0), VAR_2);
 if (!VAR_3)
  return;

 if (FUNC_2(VAR_3, VAR_0))
  goto nla_put_failure;

 FUNC_1(VAR_3, VAR_2);
 return;

 nla_put_failure:
 FUNC_3(VAR_3);
}
