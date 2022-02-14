
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_7__ {struct net_device* dev; } ;
struct rt6_info {TYPE_3__ dst; } ;
struct net_device {int ifindex; } ;
struct TYPE_6__ {TYPE_1__* devconf_all; } ;
struct net {int user_ns; TYPE_2__ ipv6; } ;
struct ipv6_pinfo {struct ipv6_ac_socklist* ipv6_ac_list; } ;
struct in6_addr {int dummy; } ;
struct ipv6_ac_socklist {struct ipv6_ac_socklist* acl_next; int acl_ifindex; struct in6_addr acl_addr; } ;
struct TYPE_8__ {int forwarding; } ;
struct inet6_dev {TYPE_4__ cnf; } ;
struct TYPE_5__ {int forwarding; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct net_device* FUNC_1 (struct net*,int,int) ;
 struct net_device* FUNC_2 (struct net*,int) ;
 struct inet6_dev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct inet6_dev*,struct in6_addr const*) ;
 struct ipv6_pinfo* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct rt6_info*) ;
 scalar_t__ FUNC_7 (struct in6_addr const*) ;
 scalar_t__ FUNC_8 (struct net*,struct in6_addr const*,struct net_device*,int,int ,int ) ;
 int FUNC_9 (struct in6_addr const*,struct net_device*) ;
 int FUNC_10 (int ,int ) ;
 struct rt6_info* FUNC_11 (struct net*,struct in6_addr const*,int *,int ,int *,int ) ;
 int FUNC_12 (struct sock*,struct ipv6_ac_socklist*,int) ;
 struct ipv6_ac_socklist* FUNC_13 (struct sock*,int,int ) ;
 struct net* FUNC_14 (struct sock*) ;

int FUNC_15(struct sock *VAR_10, int VAR_11, const struct in6_addr *VAR_12)
{
 struct ipv6_pinfo *VAR_13 = FUNC_5(VAR_10);
 struct net_device *VAR_14 = ((void*)0);
 struct inet6_dev *VAR_15;
 struct ipv6_ac_socklist *VAR_16;
 struct net *VAR_17 = FUNC_14(VAR_10);
 int VAR_18 = !VAR_17->ipv6.devconf_all->forwarding;
 int VAR_19 = 0;

 FUNC_0();

 if (!FUNC_10(VAR_17->user_ns, VAR_0))
  return -VAR_5;
 if (FUNC_7(VAR_12))
  return -VAR_2;

 if (VAR_11)
  VAR_14 = FUNC_2(VAR_17, VAR_11);

 if (FUNC_8(VAR_17, VAR_12, VAR_14, 1, 0, VAR_7))
  return -VAR_2;

 VAR_16 = FUNC_13(VAR_10, sizeof(struct ipv6_ac_socklist), VAR_6);
 if (!VAR_16)
  return -VAR_4;
 VAR_16->acl_next = ((void*)0);
 VAR_16->acl_addr = *VAR_12;

 if (VAR_11 == 0) {
  struct rt6_info *VAR_20;

  VAR_20 = FUNC_11(VAR_17, VAR_12, ((void*)0), 0, ((void*)0), 0);
  if (VAR_20) {
   VAR_14 = VAR_20->dst.dev;
   FUNC_6(VAR_20);
  } else if (VAR_18) {
   VAR_19 = -VAR_1;
   goto error;
  } else {

   VAR_14 = FUNC_1(VAR_17, VAR_9,
       VAR_9 | VAR_8);
  }
 }

 if (!VAR_14) {
  VAR_19 = -VAR_3;
  goto error;
 }

 VAR_15 = FUNC_3(VAR_14);
 if (!VAR_15) {
  if (VAR_11)
   VAR_19 = -VAR_3;
  else
   VAR_19 = -VAR_1;
  goto error;
 }

 VAR_18 = !VAR_15->cnf.forwarding;

 VAR_16->acl_ifindex = VAR_14->ifindex;






 if (!FUNC_9(VAR_12, VAR_14)) {
  if (VAR_18)
   VAR_19 = -VAR_1;
  if (VAR_19)
   goto error;
 }

 VAR_19 = FUNC_4(VAR_15, VAR_12);
 if (!VAR_19) {
  VAR_16->acl_next = VAR_13->ipv6_ac_list;
  VAR_13->ipv6_ac_list = VAR_16;
  VAR_16 = ((void*)0);
 }

error:
 if (VAR_16)
  FUNC_12(VAR_10, VAR_16, sizeof(*VAR_16));
 return VAR_19;
}
