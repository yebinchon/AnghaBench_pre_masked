
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fib_nh {int fib_nh_scope; int nh_common; int fib_nh_flags; } ;
struct nh_info {struct fib_nh fib_nh; } ;
struct TYPE_2__ {int ipv4; } ;
struct nh_config {int dev; int nh_encap_type; int nh_encap; int nh_flags; TYPE_1__ gw; int nh_ifindex; } ;
struct nexthop {int nh_flags; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct fib_config {int fc_encap_type; int fc_encap; int fc_flags; int fc_gw_family; int fc_gw4; int fc_oif; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,struct fib_nh*,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_1 (struct net*,int *,int ) ;
 int FUNC_2 (struct net*,struct fib_nh*,struct fib_config*,int,struct netlink_ext_ack*) ;
 int FUNC_3 (struct net*,struct fib_nh*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_1, struct nexthop *VAR_2,
     struct nh_info *VAR_3, struct nh_config *VAR_4,
     struct netlink_ext_ack *VAR_5)
{
 struct fib_nh *VAR_6 = &VAR_3->fib_nh;
 struct fib_config VAR_7 = {
  .fc_oif = VAR_4->nh_ifindex,
  .fc_gw4 = VAR_4->gw.ipv4,
  .fc_gw_family = VAR_4->gw.ipv4 ? VAR_0 : 0,
  .fc_flags = VAR_4->nh_flags,
  .fc_encap = VAR_4->nh_encap,
  .fc_encap_type = VAR_4->nh_encap_type,
 };
 u32 VAR_8 = FUNC_4(VAR_4->dev);
 int VAR_9;

 VAR_9 = FUNC_2(VAR_1, VAR_6, &VAR_7, 1, VAR_5);
 if (VAR_9) {
  FUNC_3(VAR_1, VAR_6);
  goto out;
 }


 VAR_9 = FUNC_0(VAR_1, VAR_6, VAR_8, 0, VAR_5);
 if (!VAR_9) {
  VAR_2->nh_flags = VAR_6->fib_nh_flags;
  FUNC_1(VAR_1, &VAR_6->nh_common,
       VAR_6->fib_nh_scope);
 } else {
  FUNC_3(VAR_1, VAR_6);
 }
out:
 return VAR_9;
}
