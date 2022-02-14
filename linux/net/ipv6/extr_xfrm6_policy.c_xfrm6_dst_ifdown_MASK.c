
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ xfrm; } ;
struct TYPE_6__ {struct inet6_dev* rt6i_idev; } ;
struct TYPE_5__ {TYPE_3__ dst; TYPE_2__ rt6; } ;
struct xfrm_dst {TYPE_1__ u; } ;
struct net_device {int dummy; } ;
struct inet6_dev {struct net_device* dev; } ;
struct dst_entry {int dummy; } ;
struct TYPE_8__ {int loopback_dev; } ;


 int FUNC_0 (struct inet6_dev*) ;
 TYPE_4__* FUNC_1 (struct net_device*) ;
 struct inet6_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct inet6_dev*) ;
 int FUNC_4 (struct inet6_dev*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct dst_entry*,struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct dst_entry *VAR_0, struct net_device *VAR_1,
        int VAR_2)
{
 struct xfrm_dst *VAR_3;

 if (!VAR_2)
  return;

 VAR_3 = (struct xfrm_dst *)VAR_0;
 if (VAR_3->u.rt6.rt6i_idev->dev == VAR_1) {
  struct inet6_dev *VAR_4 =
   FUNC_2(FUNC_1(VAR_1)->loopback_dev);

  do {
   FUNC_4(VAR_3->u.rt6.rt6i_idev);
   VAR_3->u.rt6.rt6i_idev = VAR_4;
   FUNC_3(VAR_4);
   VAR_3 = (struct xfrm_dst *)FUNC_5(&VAR_3->u.dst);
  } while (VAR_3->u.dst.xfrm);

  FUNC_0(VAR_4);
 }

 FUNC_6(VAR_0, VAR_1);
}
