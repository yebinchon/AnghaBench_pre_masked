
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nhc_scope; } ;
struct nh_info {int family; int reject_nh; int nh_info; TYPE_1__ fib_nhc; struct nh_info* nh_parent; struct net* net; int nh_flags; } ;
struct nh_config {int nh_family; int nh_ifindex; scalar_t__ nh_blackhole; int nh_flags; } ;
struct nexthop {int family; int reject_nh; int nh_info; TYPE_1__ fib_nhc; struct nexthop* nh_parent; struct net* net; int nh_flags; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {TYPE_2__* loopback_dev; } ;
struct TYPE_4__ {int ifindex; } ;




 int VAR_0 ;
 struct nh_info* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nh_info*) ;
 struct nh_info* FUNC_2 (int,int ) ;
 struct nh_info* FUNC_3 () ;
 int FUNC_4 (struct net*,struct nh_info*) ;
 int FUNC_5 (struct net*,struct nh_info*,struct nh_info*,struct nh_config*,struct netlink_ext_ack*) ;
 int FUNC_6 (struct net*,struct nh_info*,struct nh_info*,struct nh_config*,struct netlink_ext_ack*) ;
 int FUNC_7 (int ,struct nh_info*) ;

__attribute__((used)) static struct nexthop *FUNC_8(struct net *VAR_3, struct nh_config *VAR_4,
          struct netlink_ext_ack *VAR_5)
{
 struct nh_info *VAR_6;
 struct nexthop *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_3();
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  FUNC_1(VAR_7);
  return FUNC_0(-VAR_0);
 }

 VAR_7->nh_flags = VAR_4->nh_flags;
 VAR_7->net = VAR_3;

 VAR_6->nh_parent = VAR_7;
 VAR_6->family = VAR_4->nh_family;
 VAR_6->fib_nhc.nhc_scope = VAR_2;

 if (VAR_4->nh_blackhole) {
  VAR_6->reject_nh = 1;
  VAR_4->nh_ifindex = VAR_3->loopback_dev->ifindex;
 }

 switch (VAR_4->nh_family) {
 case 129:
  VAR_8 = FUNC_5(VAR_3, VAR_7, VAR_6, VAR_4, VAR_5);
  break;
 case 128:
  VAR_8 = FUNC_6(VAR_3, VAR_7, VAR_6, VAR_4, VAR_5);
  break;
 }

 if (VAR_8) {
  FUNC_1(VAR_6);
  FUNC_1(VAR_7);
  return FUNC_0(VAR_8);
 }


 FUNC_4(VAR_3, VAR_6);

 FUNC_7(VAR_7->nh_info, VAR_6);

 return VAR_7;
}
