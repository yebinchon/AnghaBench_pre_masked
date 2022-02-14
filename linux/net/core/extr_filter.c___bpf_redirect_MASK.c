
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct sk_buff*,struct net_device*,int ) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,int ) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0, struct net_device *VAR_1,
     u32 VAR_2)
{
 if (FUNC_2(VAR_1))
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  return FUNC_1(VAR_0, VAR_1, VAR_2);
}
