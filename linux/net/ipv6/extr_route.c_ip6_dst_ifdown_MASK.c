
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt6_info {struct inet6_dev* rt6i_idev; } ;
struct net_device {int dummy; } ;
struct inet6_dev {struct net_device* dev; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {struct net_device* loopback_dev; } ;


 TYPE_1__* FUNC_0 (struct net_device*) ;
 struct inet6_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct inet6_dev*) ;

__attribute__((used)) static void FUNC_3(struct dst_entry *VAR_0, struct net_device *VAR_1,
      int VAR_2)
{
 struct rt6_info *VAR_3 = (struct rt6_info *)VAR_0;
 struct inet6_dev *VAR_4 = VAR_3->rt6i_idev;
 struct net_device *VAR_5 =
  FUNC_0(VAR_1)->loopback_dev;

 if (VAR_4 && VAR_4->dev != VAR_5) {
  struct inet6_dev *VAR_6 = FUNC_1(VAR_5);
  if (VAR_6) {
   VAR_3->rt6i_idev = VAR_6;
   FUNC_2(VAR_4);
  }
 }
}
