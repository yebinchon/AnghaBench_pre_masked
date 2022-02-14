
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {int fib_num_tclassid_users; } ;
struct net {TYPE_1__ ipv4; } ;
struct fib_nh {scalar_t__ fib_nh_gw_family; int fib_nh_weight; scalar_t__ nh_tclassid; int fib_nh_flags; int fib_nh_gw6; int fib_nh_gw4; int fib_nh_oif; int nh_common; scalar_t__ fib_nh_family; } ;
struct fib_config {scalar_t__ fc_gw_family; scalar_t__ fc_flow; int fc_flags; int fc_gw6; int fc_gw4; int fc_oif; int fc_encap_type; int fc_encap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,struct fib_config*,int ,struct netlink_ext_ack*) ;

int FUNC_1(struct net *VAR_3, struct fib_nh *VAR_4,
  struct fib_config *VAR_5, int VAR_6,
  struct netlink_ext_ack *VAR_7)
{
 int VAR_8;

 VAR_4->fib_nh_family = VAR_0;

 VAR_8 = FUNC_0(&VAR_4->nh_common, VAR_5->fc_encap,
     VAR_5->fc_encap_type, VAR_5, VAR_2, VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_4->fib_nh_oif = VAR_5->fc_oif;
 VAR_4->fib_nh_gw_family = VAR_5->fc_gw_family;
 if (VAR_5->fc_gw_family == VAR_0)
  VAR_4->fib_nh_gw4 = VAR_5->fc_gw4;
 else if (VAR_5->fc_gw_family == VAR_1)
  VAR_4->fib_nh_gw6 = VAR_5->fc_gw6;

 VAR_4->fib_nh_flags = VAR_5->fc_flags;
 return 0;
}
