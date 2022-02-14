
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dev; } ;
struct in6_addr {int dummy; } ;
struct rt6_info {int rt6i_flags; int dst; struct in6_addr rt6i_gateway; int from; } ;
struct rd_msg {int dest; int target; int opt; } ;
struct netevent_redirect {struct neighbour* neigh; int * daddr; int * new; int * old; } ;
struct neighbour {scalar_t__ primary_key; } ;
struct ndisc_options {scalar_t__ nd_opts_tgt_lladdr; } ;
struct TYPE_4__ {int accept_redirects; scalar_t__ forwarding; } ;
struct inet6_dev {TYPE_1__ cnf; } ;
struct fib6_result {TYPE_2__* f6i; int fib6_type; int fib6_flags; scalar_t__ nh; } ;
struct fib6_nh_match_arg {scalar_t__ match; struct in6_addr* gw; int dev; } ;
struct dst_entry {int dev; } ;
struct TYPE_6__ {int saddr; } ;
struct TYPE_5__ {int fib6_type; int fib6_flags; scalar_t__ fib6_nh; scalar_t__ nh; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct inet6_dev* FUNC_0 (int ) ;
 struct neighbour* FUNC_1 (int *,int *,int ,int) ;
 int FUNC_2 (int ,struct netevent_redirect*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_14 ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 struct rt6_info* FUNC_6 (struct fib6_result*,int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_3__* FUNC_10 (struct sk_buff*) ;
 int VAR_15 ;
 int * FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int ,int ,int,struct ndisc_options*) ;
 int FUNC_13 (int ,struct neighbour*,int *,int ,int,int ,struct ndisc_options*) ;
 int FUNC_14 (struct neighbour*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (scalar_t__,int ,struct fib6_nh_match_arg*) ;
 TYPE_2__* FUNC_17 (int ) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 (struct rt6_info*,struct fib6_result*) ;
 int FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_23(struct dst_entry *VAR_16, struct sock *VAR_17, struct sk_buff *VAR_18)
{
 struct netevent_redirect VAR_19;
 struct rt6_info *VAR_20, *VAR_21 = ((void*)0);
 struct fib6_result VAR_22 = {};
 struct ndisc_options VAR_23;
 struct inet6_dev *VAR_24;
 struct neighbour *VAR_25;
 struct rd_msg *VAR_26;
 int VAR_27, VAR_28;
 u8 *VAR_29;

 VAR_27 = FUNC_21(VAR_18) - FUNC_22(VAR_18);
 VAR_27 -= sizeof(*VAR_26);

 if (VAR_27 < 0) {
  FUNC_15("rt6_do_redirect: packet too short\n");
  return;
 }

 VAR_26 = (struct rd_msg *)FUNC_5(VAR_18);

 if (FUNC_8(&VAR_26->dest)) {
  FUNC_15("rt6_do_redirect: destination address is multicast\n");
  return;
 }

 VAR_28 = 0;
 if (FUNC_7(&VAR_26->dest, &VAR_26->target)) {
  VAR_28 = 1;
 } else if (FUNC_9(&VAR_26->target) !=
     (VAR_1|VAR_0)) {
  FUNC_15("rt6_do_redirect: target address is not link-local unicast\n");
  return;
 }

 VAR_24 = FUNC_0(VAR_18->dev);
 if (!VAR_24)
  return;
 if (VAR_24->cnf.forwarding || !VAR_24->cnf.accept_redirects)
  return;






 if (!FUNC_12(VAR_18->dev, VAR_26->opt, VAR_27, &VAR_23)) {
  FUNC_15("rt6_redirect: invalid ND options\n");
  return;
 }

 VAR_29 = ((void*)0);
 if (VAR_23.nd_opts_tgt_lladdr) {
  VAR_29 = FUNC_11(VAR_23.nd_opts_tgt_lladdr,
          VAR_18->dev);
  if (!VAR_29) {
   FUNC_15("rt6_redirect: invalid link-layer address length\n");
   return;
  }
 }

 VAR_20 = (struct rt6_info *) VAR_16;
 if (VAR_20->rt6i_flags & VAR_12) {
  FUNC_15("rt6_redirect: source isn't a valid nexthop for redirect target\n");
  return;
 }





 FUNC_3(&VAR_20->dst, &FUNC_10(VAR_18)->saddr);

 VAR_25 = FUNC_1(&VAR_15, &VAR_26->target, VAR_18->dev, 1);
 if (!VAR_25)
  return;





 FUNC_13(VAR_18->dev, VAR_25, VAR_29, VAR_8,
       VAR_6|
       VAR_4|
       (VAR_28 ? 0 : (VAR_5|
         VAR_3)),
       VAR_2, &VAR_23);

 FUNC_18();
 VAR_22.f6i = FUNC_17(VAR_20->from);
 if (!VAR_22.f6i)
  goto out;

 if (VAR_22.f6i->nh) {
  struct fib6_nh_match_arg VAR_30 = {
   .dev = VAR_16->dev,
   .gw = &VAR_20->rt6i_gateway,
  };

  FUNC_16(VAR_22.f6i->nh,
      VAR_14, &VAR_30);




  if (!VAR_30.match)
   goto out;
  VAR_22.nh = VAR_30.match;
 } else {
  VAR_22.nh = VAR_22.f6i->fib6_nh;
 }

 VAR_22.fib6_flags = VAR_22.f6i->fib6_flags;
 VAR_22.fib6_type = VAR_22.f6i->fib6_type;
 VAR_21 = FUNC_6(&VAR_22, &VAR_26->dest, ((void*)0));
 if (!VAR_21)
  goto out;

 VAR_21->rt6i_flags = VAR_11|VAR_13|VAR_10|VAR_9;
 if (VAR_28)
  VAR_21->rt6i_flags &= ~VAR_11;

 VAR_21->rt6i_gateway = *(struct in6_addr *)VAR_25->primary_key;


 if (FUNC_20(VAR_21, &VAR_22)) {
  FUNC_4(&VAR_21->dst);
  goto out;
 }

 VAR_19.old = &VAR_20->dst;
 VAR_19.new = &VAR_21->dst;
 VAR_19.daddr = &VAR_26->dest;
 VAR_19.neigh = VAR_25;
 FUNC_2(VAR_7, &VAR_19);

out:
 FUNC_19();
 FUNC_14(VAR_25);
}
