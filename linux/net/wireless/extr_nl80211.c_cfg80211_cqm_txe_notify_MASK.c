
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
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (struct net_device*,int const*,int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;

void FUNC_4(struct net_device *VAR_3,
        const u8 *VAR_4, u32 VAR_5,
        u32 VAR_6, u32 VAR_7, gfp_t VAR_8)
{
 struct sk_buff *VAR_9;

 VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_8);
 if (!VAR_9)
  return;

 if (FUNC_2(VAR_9, VAR_1, VAR_5))
  goto nla_put_failure;

 if (FUNC_2(VAR_9, VAR_2, VAR_6))
  goto nla_put_failure;

 if (FUNC_2(VAR_9, VAR_0, VAR_7))
  goto nla_put_failure;

 FUNC_1(VAR_9, VAR_8);
 return;

 nla_put_failure:
 FUNC_3(VAR_9);
}
