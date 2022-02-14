
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fib6_nh {int fib_nh_flags; } ;
struct nh_info {struct fib6_nh fib6_nh; } ;
struct TYPE_3__ {int ipv6; } ;
struct nh_config {TYPE_1__ gw; int nh_encap_type; int nh_encap; int nh_flags; int nh_ifindex; int dev; } ;
struct nexthop {int nh_flags; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct fib6_config {int fc_flags; int fc_encap_type; int fc_encap; int fc_gateway; int fc_ifindex; int fc_table; } ;
struct TYPE_4__ {int (* fib6_nh_init ) (struct net*,struct fib6_nh*,struct fib6_config*,int ,struct netlink_ext_ack*) ;int (* fib6_nh_release ) (struct fib6_nh*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net*,struct fib6_nh*,struct fib6_config*,int ,struct netlink_ext_ack*) ;
 int FUNC_3 (struct fib6_nh*) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_3, struct nexthop *VAR_4,
     struct nh_info *VAR_5, struct nh_config *VAR_6,
     struct netlink_ext_ack *VAR_7)
{
 struct fib6_nh *VAR_8 = &VAR_5->fib6_nh;
 struct fib6_config VAR_9 = {
  .fc_table = FUNC_1(VAR_6->dev),
  .fc_ifindex = VAR_6->nh_ifindex,
  .fc_gateway = VAR_6->gw.ipv6,
  .fc_flags = VAR_6->nh_flags,
  .fc_encap = VAR_6->nh_encap,
  .fc_encap_type = VAR_6->nh_encap_type,
 };
 int VAR_10;

 if (!FUNC_0(&VAR_6->gw.ipv6))
  VAR_9.fc_flags |= VAR_1;


 VAR_10 = VAR_2->fib6_nh_init(VAR_3, VAR_8, &VAR_9, VAR_0,
          VAR_7);
 if (VAR_10)
  VAR_2->fib6_nh_release(VAR_8);
 else
  VAR_4->nh_flags = VAR_8->fib_nh_flags;

 return VAR_10;
}
