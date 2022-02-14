
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int ifindex; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct fib6_table {int flags; } ;
struct fib6_info {int dummy; } ;
struct TYPE_2__ {struct net* nl_net; int * nlh; int portid; } ;
struct fib6_config {int fc_flags; int fc_table; struct in6_addr fc_gateway; TYPE_1__ fc_nlinfo; int fc_type; int fc_protocol; int fc_ifindex; int fc_metric; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct net_device*) ;
 struct fib6_table* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct fib6_config*,int ,int *) ;
 int FUNC_4 (struct net_device*) ;
 struct fib6_info* FUNC_5 (struct net*,struct in6_addr const*,struct net_device*) ;

struct fib6_info *FUNC_6(struct net *VAR_11,
         const struct in6_addr *VAR_12,
         struct net_device *VAR_13,
         unsigned int VAR_14)
{
 struct fib6_config VAR_15 = {
  .fc_table = FUNC_4(VAR_13) ? : VAR_2,
  .fc_metric = VAR_1,
  .fc_ifindex = VAR_13->ifindex,
  .fc_flags = VAR_7 | VAR_4 | VAR_5 |
      VAR_8 | VAR_6 | FUNC_0(VAR_14),
  .fc_protocol = VAR_10,
  .fc_type = VAR_9,
  .fc_nlinfo.portid = 0,
  .fc_nlinfo.nlh = ((void*)0),
  .fc_nlinfo.nl_net = VAR_11,
 };

 VAR_15.fc_gateway = *VAR_12;

 if (!FUNC_3(&VAR_15, VAR_0, ((void*)0))) {
  struct fib6_table *VAR_16;

  VAR_16 = FUNC_2(FUNC_1(VAR_13), VAR_15.fc_table);
  if (VAR_16)
   VAR_16->flags |= VAR_3;
 }

 return FUNC_5(VAR_11, VAR_12, VAR_13);
}
