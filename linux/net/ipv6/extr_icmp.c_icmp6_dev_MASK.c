
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; } ;
struct rt6_info {TYPE_1__* rt6i_idev; } ;
struct net_device {scalar_t__ ifindex; } ;
struct TYPE_2__ {struct net_device* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 struct rt6_info* FUNC_1 (struct sk_buff const*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct net_device *FUNC_3(const struct sk_buff *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->dev;






 if (FUNC_2(VAR_2->ifindex == VAR_0 || FUNC_0(VAR_1->dev))) {
  const struct rt6_info *VAR_3 = FUNC_1(VAR_1);

  if (VAR_3)
   VAR_2 = VAR_3->rt6i_idev->dev;
 }

 return VAR_2;
}
