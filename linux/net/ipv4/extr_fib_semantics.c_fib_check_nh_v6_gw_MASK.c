
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct fib_nh {int fib_nh_flags; int fib_nh_scope; TYPE_2__* fib_nh_dev; int fib_nh_oif; int fib_nh_gw6; } ;
struct fib6_nh {TYPE_2__* fib_nh_dev; } ;
struct fib6_config {int fc_flags; int fc_gateway; int fc_ifindex; int fc_table; } ;
struct TYPE_4__ {int ifindex; } ;
struct TYPE_3__ {int (* fib6_nh_init ) (struct net*,struct fib6_nh*,struct fib6_config*,int ,struct netlink_ext_ack*) ;int (* fib6_nh_release ) (struct fib6_nh*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct net*,struct fib6_nh*,struct fib6_config*,int ,struct netlink_ext_ack*) ;
 int FUNC_2 (struct fib6_nh*) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_4, struct fib_nh *VAR_5,
         u32 VAR_6, struct netlink_ext_ack *VAR_7)
{
 struct fib6_config VAR_8 = {
  .fc_table = VAR_6,
  .fc_flags = VAR_5->fib_nh_flags | VAR_1,
  .fc_ifindex = VAR_5->fib_nh_oif,
  .fc_gateway = VAR_5->fib_nh_gw6,
 };
 struct fib6_nh VAR_9 = {};
 int VAR_10;

 VAR_10 = VAR_3->fib6_nh_init(VAR_4, &VAR_9, &VAR_8, VAR_0, VAR_7);
 if (!VAR_10) {
  VAR_5->fib_nh_dev = VAR_9.fib_nh_dev;
  FUNC_0(VAR_5->fib_nh_dev);
  VAR_5->fib_nh_oif = VAR_5->fib_nh_dev->ifindex;
  VAR_5->fib_nh_scope = VAR_2;

  VAR_3->fib6_nh_release(&VAR_9);
 }

 return VAR_10;
}
