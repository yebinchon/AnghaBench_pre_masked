
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct net_device*,int const*,int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct net_device*,int const*,int ) ;

void FUNC_5(struct net_device *VAR_1,
     const u8 *VAR_2, u32 VAR_3, gfp_t VAR_4)
{
 struct sk_buff *VAR_5;

 FUNC_4(VAR_1, VAR_2, VAR_3);

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_4);
 if (!VAR_5)
  return;

 if (FUNC_2(VAR_5, VAR_0, VAR_3))
  goto nla_put_failure;

 FUNC_1(VAR_5, VAR_4);
 return;

 nla_put_failure:
 FUNC_3(VAR_5);
}
