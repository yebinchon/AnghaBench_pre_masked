
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct TYPE_8__ {TYPE_1__* devconf_all; } ;
struct net {TYPE_2__ ipv6; } ;
struct inet6_ifaddr {int flags; int tokenized; struct inet6_dev* idev; int tmp_list; int refcnt; struct fib6_info* rt; int tstamp; int cstamp; int prefered_lft; int valid_lft; int rt_priority; int prefix_len; int scope; int addr_lst; int dad_work; int lock; int peer_addr; int addr; } ;
struct TYPE_9__ {scalar_t__ disable_policy; scalar_t__ disable_ipv6; } ;
struct inet6_dev {int lock; int tempaddr_list; TYPE_4__* dev; int nd_parms; TYPE_3__ cnf; scalar_t__ dead; } ;
struct in6_validator_info {struct netlink_ext_ack* extack; struct inet6_dev* i6vi_dev; int i6vi_addr; } ;
struct ifa6_config {int ifa_flags; int preferred_lft; int valid_lft; int rt_priority; int plen; int scope; int * peer_pfx; int * pfx; } ;
struct fib6_info {int dst_nopolicy; } ;
typedef int gfp_t ;
struct TYPE_10__ {int flags; } ;
struct TYPE_7__ {scalar_t__ disable_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inet6_ifaddr* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (struct fib6_info*) ;
 int VAR_14 ;
 int FUNC_4 (struct fib6_info*) ;
 int VAR_15 ;
 struct fib6_info* FUNC_5 (struct net*,struct inet6_dev*,int *,int,int ) ;
 struct net* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (struct fib6_info*) ;
 int FUNC_8 (struct inet6_dev*) ;
 int FUNC_9 (struct inet6_dev*) ;
 int FUNC_10 (struct inet6_ifaddr*) ;
 int FUNC_11 (int ,struct inet6_ifaddr*) ;
 int FUNC_12 (int ,struct in6_validator_info*) ;
 int FUNC_13 (TYPE_4__*,struct inet6_ifaddr*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct inet6_dev*,struct inet6_ifaddr*) ;
 int VAR_16 ;
 int FUNC_16 (struct inet6_ifaddr*) ;
 struct inet6_ifaddr* FUNC_17 (int,int ) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (int) ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 (int *,int) ;
 int FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (int) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;

__attribute__((used)) static struct inet6_ifaddr *
FUNC_29(struct inet6_dev *VAR_17, struct ifa6_config *VAR_18,
       bool VAR_19, struct netlink_ext_ack *VAR_20)
{
 gfp_t VAR_21 = VAR_19 ? VAR_5 : VAR_4;
 int VAR_22 = FUNC_14(VAR_18->pfx);
 struct net *VAR_23 = FUNC_6(VAR_17->dev);
 struct inet6_ifaddr *VAR_24 = ((void*)0);
 struct fib6_info *VAR_25 = ((void*)0);
 int VAR_26 = 0;

 if (VAR_22 == VAR_11 ||
     (VAR_22 & VAR_13 &&
      !(VAR_18->ifa_flags & VAR_6)) ||
     (!(VAR_17->dev->flags & VAR_10) &&
      !FUNC_20(VAR_17->dev) &&
      VAR_22 & VAR_12))
  return FUNC_0(-VAR_1);

 if (VAR_17->dead) {
  VAR_26 = -VAR_3;
  goto out;
 }

 if (VAR_17->cnf.disable_ipv6) {
  VAR_26 = -VAR_0;
  goto out;
 }




 if (VAR_19) {
  struct in6_validator_info VAR_27 = {
   .i6vi_addr = *VAR_18->pfx,
   .i6vi_dev = VAR_17,
   .extack = VAR_20,
  };

  VAR_26 = FUNC_12(VAR_14, &VAR_27);
  VAR_26 = FUNC_21(VAR_26);
  if (VAR_26 < 0)
   goto out;
 }

 VAR_24 = FUNC_17(sizeof(*VAR_24), VAR_21);
 if (!VAR_24) {
  VAR_26 = -VAR_2;
  goto out;
 }

 VAR_25 = FUNC_5(VAR_23, VAR_17, VAR_18->pfx, 0, VAR_21);
 if (FUNC_3(VAR_25)) {
  VAR_26 = FUNC_4(VAR_25);
  VAR_25 = ((void*)0);
  goto out;
 }

 if (VAR_23->ipv6.devconf_all->disable_policy ||
     VAR_17->cnf.disable_policy)
  VAR_25->dst_nopolicy = 1;

 FUNC_19(VAR_17->nd_parms);

 VAR_24->addr = *VAR_18->pfx;
 if (VAR_18->peer_pfx)
  VAR_24->peer_addr = *VAR_18->peer_pfx;

 FUNC_25(&VAR_24->lock);
 FUNC_1(&VAR_24->dad_work, VAR_15);
 FUNC_2(&VAR_24->addr_lst);
 VAR_24->scope = VAR_18->scope;
 VAR_24->prefix_len = VAR_18->plen;
 VAR_24->rt_priority = VAR_18->rt_priority;
 VAR_24->flags = VAR_18->ifa_flags;

 if (!(VAR_18->ifa_flags & VAR_7))
  VAR_24->flags |= VAR_9;
 VAR_24->valid_lft = VAR_18->valid_lft;
 VAR_24->prefered_lft = VAR_18->preferred_lft;
 VAR_24->cstamp = VAR_24->tstamp = VAR_16;
 VAR_24->tokenized = 0;

 VAR_24->rt = VAR_25;

 VAR_24->idev = VAR_17;
 FUNC_8(VAR_17);


 FUNC_24(&VAR_24->refcnt, 1);

 FUNC_22();

 VAR_26 = FUNC_13(VAR_17->dev, VAR_24);
 if (VAR_26 < 0) {
  FUNC_23();
  goto out;
 }

 FUNC_27(&VAR_17->lock);


 FUNC_15(VAR_17, VAR_24);

 if (VAR_24->flags&VAR_8) {
  FUNC_18(&VAR_24->tmp_list, &VAR_17->tempaddr_list);
  FUNC_10(VAR_24);
 }

 FUNC_10(VAR_24);
 FUNC_28(&VAR_17->lock);

 FUNC_23();

 FUNC_11(VAR_14, VAR_24);
out:
 if (FUNC_26(VAR_26 < 0)) {
  FUNC_7(VAR_25);

  if (VAR_24) {
   if (VAR_24->idev)
    FUNC_9(VAR_24->idev);
   FUNC_16(VAR_24);
  }
  VAR_24 = FUNC_0(VAR_26);
 }

 return VAR_24;
}
