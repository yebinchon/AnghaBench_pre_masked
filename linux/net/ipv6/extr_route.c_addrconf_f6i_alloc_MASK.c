
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net {int dummy; } ;
struct inet6_dev {TYPE_2__* dev; } ;
struct in6_addr {int dummy; } ;
struct fib6_info {int dst_nocount; } ;
struct TYPE_3__ {struct net* nl_net; } ;
struct fib6_config {int fc_flags; int fc_dst_len; int fc_ignore_dev_down; int fc_type; TYPE_1__ fc_nlinfo; int fc_protocol; struct in6_addr const fc_dst; int fc_ifindex; int fc_table; } ;
typedef int gfp_t ;
struct TYPE_4__ {int ifindex; } ;


 int FUNC_0 (struct fib6_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct fib6_info* FUNC_1 (struct fib6_config*,int ,int *) ;
 int FUNC_2 (TYPE_2__*) ;

struct fib6_info *FUNC_3(struct net *VAR_8,
         struct inet6_dev *VAR_9,
         const struct in6_addr *VAR_10,
         bool VAR_11, gfp_t VAR_12)
{
 struct fib6_config VAR_13 = {
  .fc_table = FUNC_2(VAR_9->dev) ? : VAR_0,
  .fc_ifindex = VAR_9->dev->ifindex,
  .fc_flags = VAR_4 | VAR_3,
  .fc_dst = *VAR_10,
  .fc_dst_len = 128,
  .fc_protocol = VAR_7,
  .fc_nlinfo.nl_net = VAR_8,
  .fc_ignore_dev_down = 1,
 };
 struct fib6_info *VAR_14;

 if (VAR_11) {
  VAR_13.fc_type = VAR_5;
  VAR_13.fc_flags |= VAR_1;
 } else {
  VAR_13.fc_type = VAR_6;
  VAR_13.fc_flags |= VAR_2;
 }

 VAR_14 = FUNC_1(&VAR_13, VAR_12, ((void*)0));
 if (!FUNC_0(VAR_14))
  VAR_14->dst_nocount = 1;
 return VAR_14;
}
