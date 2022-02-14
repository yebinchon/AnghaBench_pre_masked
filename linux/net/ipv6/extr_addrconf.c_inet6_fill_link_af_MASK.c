
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct inet6_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inet6_dev* FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct inet6_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2, const struct net_device *VAR_3,
         u32 VAR_4)
{
 struct inet6_dev *VAR_5 = FUNC_0(VAR_3);

 if (!VAR_5)
  return -VAR_1;

 if (FUNC_1(VAR_2, VAR_5, VAR_4) < 0)
  return -VAR_0;

 return 0;
}
