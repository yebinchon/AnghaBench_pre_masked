
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ protocol; int mark; } ;
struct TYPE_9__ {scalar_t__ input; int error; TYPE_5__* lwtstate; scalar_t__ tclassid; int output; } ;
struct rtable {int rt_is_input; unsigned int rt_flags; TYPE_3__ dst; } ;
struct net_device {int name; int ifindex; } ;
struct net {int loopback_dev; } ;
struct TYPE_7__ {scalar_t__ tun_id; } ;
struct ip_tunnel_info {int mode; TYPE_1__ key; } ;
struct in_device {int dummy; } ;
struct TYPE_8__ {scalar_t__ tun_id; } ;
struct flowi4 {scalar_t__ fl4_dport; scalar_t__ fl4_sport; scalar_t__ flowi4_proto; int flowi4_uid; void* saddr; void* daddr; scalar_t__ flowi4_flags; int flowi4_scope; int flowi4_tos; int flowi4_mark; int flowi4_iif; scalar_t__ flowi4_oif; TYPE_2__ flowi4_tun_key; } ;
struct flow_keys {int dummy; } ;
struct fib_result {scalar_t__ type; int * table; int * fi; } ;
struct fib_nh_common {int nhc_lwtstate; int nhc_rth_input; } ;
typedef void* __be32 ;
struct TYPE_10__ {scalar_t__ orig_input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fib_nh_common* FUNC_0 (struct fib_result) ;
 scalar_t__ FUNC_1 (struct in_device*) ;
 int FUNC_2 (struct in_device*,int ) ;
 int FUNC_3 (struct in_device*) ;
 scalar_t__ FUNC_4 (struct in_device*) ;
 int FUNC_5 (struct in_device*,struct net*) ;
 scalar_t__ FUNC_6 (struct net*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_7 (int ) ;
 int VAR_13 ;
 int FUNC_8 (int) ;
 struct in_device* FUNC_9 (struct net_device*) ;
 struct net* FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (struct net*,struct sk_buff*,struct flowi4*,struct flow_keys*) ;
 int FUNC_12 (struct net*,struct flowi4*,struct fib_result*,int ) ;
 int FUNC_13 (struct sk_buff*,void*,void*,int ,int ,struct net_device*,struct in_device*,scalar_t__*) ;
 scalar_t__ FUNC_14 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_15 (struct net_device*,struct in_device*,struct sk_buff*,void*,void*) ;
 int FUNC_16 (struct sk_buff*,struct fib_result*,struct in_device*,void*,void*,int ,struct flow_keys*) ;
 int VAR_19 ;
 scalar_t__ FUNC_17 (void*) ;
 scalar_t__ FUNC_18 (void*) ;
 scalar_t__ FUNC_19 (void*) ;
 scalar_t__ FUNC_20 (void*) ;
 scalar_t__ FUNC_21 (struct net_device*) ;
 TYPE_5__* FUNC_22 (int ) ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_23 (TYPE_5__*) ;
 int FUNC_24 (char*,void**,void**,int ) ;
 struct rtable* FUNC_25 (int ) ;
 int FUNC_26 (struct rtable*) ;
 int FUNC_27 (struct fib_nh_common*,struct rtable*) ;
 scalar_t__ FUNC_28 (struct rtable*) ;
 struct rtable* FUNC_29 (int ,unsigned int,scalar_t__,int ,int,int) ;
 int FUNC_30 (struct sk_buff*) ;
 int FUNC_31 (struct sk_buff*,TYPE_3__*) ;
 int FUNC_32 (struct sk_buff*,TYPE_3__*) ;
 struct ip_tunnel_info* FUNC_33 (struct sk_buff*) ;
 int FUNC_34 (struct net*,int *) ;
 scalar_t__ FUNC_35 (int) ;

__attribute__((used)) static int FUNC_36(struct sk_buff *VAR_21, __be32 VAR_22, __be32 VAR_23,
          u8 VAR_24, struct net_device *VAR_25,
          struct fib_result *VAR_26)
{
 struct in_device *VAR_27 = FUNC_9(VAR_25);
 struct flow_keys *VAR_28 = ((void*)0), VAR_29;
 struct net *VAR_30 = FUNC_10(VAR_25);
 struct ip_tunnel_info *VAR_31;
 int VAR_32 = -VAR_2;
 unsigned int VAR_33 = 0;
 u32 VAR_34 = 0;
 struct rtable *VAR_35;
 struct flowi4 VAR_36;
 bool VAR_37 = 1;



 if (!VAR_27)
  goto out;





 VAR_31 = FUNC_33(VAR_21);
 if (VAR_31 && !(VAR_31->mode & VAR_5))
  VAR_36 = VAR_31->key.tun_id;
 else
  VAR_36 = 0;
 FUNC_30(VAR_21);

 if (FUNC_19(VAR_23) || FUNC_17(VAR_23))
  goto martian_source;

 VAR_26->fi = ((void*)0);
 VAR_26->table = ((void*)0);
 if (FUNC_17(VAR_22) || (VAR_23 == 0 && VAR_22 == 0))
  goto brd_input;




 if (FUNC_20(VAR_23))
  goto martian_source;

 if (FUNC_20(VAR_22))
  goto martian_destination;




 if (FUNC_18(VAR_22)) {
  if (!FUNC_5(VAR_27, VAR_30))
   goto martian_destination;
 } else if (FUNC_18(VAR_23)) {
  if (!FUNC_5(VAR_27, VAR_30))
   goto martian_source;
 }




 VAR_36 = 0;
 VAR_36 = VAR_25->ifindex;
 VAR_36 = VAR_21->mark;
 VAR_36 = VAR_24;
 VAR_36 = VAR_13;
 VAR_36 = 0;
 VAR_36 = VAR_22;
 VAR_36 = VAR_23;
 VAR_36 = FUNC_34(VAR_30, ((void*)0));

 if (FUNC_11(VAR_30, VAR_21, &VAR_36, &VAR_29)) {
  VAR_28 = &VAR_29;
 } else {
  VAR_36 = 0;
  VAR_36 = 0;
  VAR_36 = 0;
 }

 VAR_32 = FUNC_12(VAR_30, &VAR_36, VAR_26, 0);
 if (VAR_32 != 0) {
  if (!FUNC_3(VAR_27))
   VAR_32 = -VAR_1;
  goto no_route;
 }

 if (VAR_26->type == VAR_9) {
  if (FUNC_1(VAR_27))
   goto make_route;

  if (FUNC_6(VAR_30, VAR_0))
   VAR_37 = 0;
  goto brd_input;
 }

 if (VAR_26->type == VAR_10) {
  VAR_32 = FUNC_13(VAR_21, VAR_23, VAR_22, VAR_24,
       0, VAR_25, VAR_27, &VAR_34);
  if (VAR_32 < 0)
   goto martian_source;
  goto local_input;
 }

 if (!FUNC_3(VAR_27)) {
  VAR_32 = -VAR_1;
  goto no_route;
 }
 if (VAR_26->type != VAR_11)
  goto martian_destination;

make_route:
 VAR_32 = FUNC_16(VAR_21, VAR_26, VAR_27, VAR_22, VAR_23, VAR_24, VAR_28);
out: return VAR_32;

brd_input:
 if (VAR_21->protocol != FUNC_14(VAR_4))
  goto e_inval;

 if (!FUNC_20(VAR_23)) {
  VAR_32 = FUNC_13(VAR_21, VAR_23, 0, VAR_24, 0, VAR_25,
       VAR_27, &VAR_34);
  if (VAR_32 < 0)
   goto martian_source;
 }
 VAR_33 |= VAR_7;
 VAR_26->type = VAR_9;
 FUNC_7(VAR_14);

local_input:
 VAR_37 &= VAR_26->fi && !VAR_34;
 if (VAR_37) {
  struct fib_nh_common *VAR_38 = FUNC_0(*VAR_26);

  VAR_35 = FUNC_25(VAR_38->nhc_rth_input);
  if (FUNC_28(VAR_35)) {
   FUNC_32(VAR_21, &VAR_35->dst);
   VAR_32 = 0;
   goto out;
  }
 }

 VAR_35 = FUNC_29(FUNC_21(VAR_25) ? : VAR_30->loopback_dev,
      VAR_33 | VAR_8, VAR_26->type,
      FUNC_2(VAR_27, VAR_6), 0, VAR_37);
 if (!VAR_35)
  goto e_nobufs;

 VAR_35->dst.output= VAR_19;



 VAR_35->rt_is_input = 1;

 FUNC_7(VAR_17);
 if (VAR_26->type == VAR_12) {
  VAR_35->dst.input= VAR_18;
  VAR_35->dst.error= -VAR_32;
  VAR_35->rt_flags &= ~VAR_8;
 }

 if (VAR_37) {
  struct fib_nh_common *VAR_39 = FUNC_0(*VAR_26);

  VAR_35->dst.lwtstate = FUNC_22(VAR_39->nhc_lwtstate);
  if (FUNC_23(VAR_35->dst.lwtstate)) {
   FUNC_8(VAR_35->dst.input == VAR_20);
   VAR_35->dst.lwtstate->orig_input = VAR_35->dst.input;
   VAR_35->dst.input = VAR_20;
  }

  if (FUNC_35(!FUNC_27(VAR_39, VAR_35)))
   FUNC_26(VAR_35);
 }
 FUNC_31(VAR_21, &VAR_35->dst);
 VAR_32 = 0;
 goto out;

no_route:
 FUNC_7(VAR_16);
 VAR_26->type = VAR_12;
 VAR_26->fi = ((void*)0);
 VAR_26->table = ((void*)0);
 goto local_input;




martian_destination:
 FUNC_7(VAR_15);






e_inval:
 VAR_32 = -VAR_2;
 goto out;

e_nobufs:
 VAR_32 = -VAR_3;
 goto out;

martian_source:
 FUNC_15(VAR_25, VAR_27, VAR_21, VAR_22, VAR_23);
 goto out;
}
