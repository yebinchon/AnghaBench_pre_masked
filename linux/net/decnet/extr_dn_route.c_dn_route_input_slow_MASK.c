
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; int mark; } ;
struct net_device {int ifindex; int dn_ptr; } ;
struct neighbour {int dummy; } ;
struct flowidn {scalar_t__ daddr; scalar_t__ saddr; int flowidn_mark; int flowidn_oif; int flowidn_iif; int flowidn_scope; } ;
struct dn_skb_cb {scalar_t__ dst; scalar_t__ src; int rt_flags; } ;
struct TYPE_8__ {int input; struct net_device* dev; int output; int lastuse; } ;
struct TYPE_9__ {scalar_t__ saddr; scalar_t__ daddr; int flowidn_mark; int flowidn_iif; scalar_t__ flowidn_oif; } ;
struct dn_route {scalar_t__ rt_saddr; scalar_t__ rt_daddr; scalar_t__ rt_gateway; scalar_t__ rt_dst_map; scalar_t__ rt_src_map; int rt_flags; TYPE_3__ dst; TYPE_4__ fld; struct neighbour* n; void* rt_local_src; int * dn_next; } ;
struct dn_neigh {void* addr; } ;
struct dn_fib_res {int type; TYPE_2__* fi; scalar_t__ r; } ;
struct TYPE_6__ {int forwarding; } ;
struct dn_dev {int router; TYPE_1__ parms; } ;
typedef void* __le16 ;
struct TYPE_7__ {int fib_nhs; } ;


 struct net_device* FUNC_0 (struct dn_fib_res) ;
 void* FUNC_1 (struct dn_fib_res) ;
 void* FUNC_2 (struct dn_fib_res) ;
 int VAR_0 ;
 struct dn_skb_cb* FUNC_3 (struct sk_buff*) ;
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
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*,scalar_t__) ;
 int VAR_13 ;
 int FUNC_7 (struct flowidn*,struct dn_fib_res*) ;
 int FUNC_8 (struct dn_fib_res*) ;
 scalar_t__ FUNC_9 (scalar_t__,struct dn_fib_res*) ;
 int FUNC_10 (struct flowidn*,struct dn_fib_res*) ;
 int VAR_14 ;
 unsigned int FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (struct dn_route*,unsigned int,struct dn_route**) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_13 (struct dn_route*,struct dn_fib_res*) ;
 struct dn_route* FUNC_14 (int *,struct net_device*,int,int ,int ) ;
 int VAR_18 ;
 int FUNC_15 (TYPE_3__*) ;
 int VAR_19 ;
 int FUNC_16 (TYPE_4__*,int ,int) ;
 struct neighbour* FUNC_17 (int ) ;
 int FUNC_18 (struct neighbour*) ;
 int FUNC_19 (char*) ;
 struct dn_dev* FUNC_20 (int ) ;
 int FUNC_21 (struct sk_buff*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_22(struct sk_buff *VAR_20)
{
 struct dn_route *VAR_21 = ((void*)0);
 struct dn_skb_cb *VAR_22 = FUNC_3(VAR_20);
 struct net_device *VAR_23 = VAR_20->dev;
 struct net_device *VAR_24 = ((void*)0);
 struct dn_dev *VAR_25;
 struct neighbour *VAR_26 = ((void*)0);
 unsigned int VAR_27;
 int VAR_28 = 0;
 __le16 VAR_29 = 0;
 __le16 VAR_30 = 0;
 struct flowidn VAR_31 = {
  .daddr = VAR_22->dst,
  .saddr = VAR_22->src,
  .flowidn_scope = VAR_12,
  .flowidn_mark = VAR_20->mark,
  .flowidn_iif = VAR_20->dev->ifindex,
 };
 struct dn_fib_res VAR_32 = { .fi = ((void*)0), .type = 128 };
 int VAR_33 = -VAR_3;
 int VAR_34 = 0;

 FUNC_4(VAR_23);

 if ((VAR_25 = FUNC_20(VAR_23->dn_ptr)) == ((void*)0))
  goto out;


 if (VAR_31.saddr == 0)
  goto out;
 VAR_33 = -VAR_5;
 if (FUNC_6(VAR_23, VAR_22->src))
  goto out;

 VAR_33 = FUNC_7(&VAR_31, &VAR_32);
 if (VAR_33) {
  if (VAR_33 != -VAR_6)
   goto out;



  if (!FUNC_6(VAR_23, VAR_22->dst))
   goto e_inval;

  VAR_32.type = 130;
 } else {
  __le16 VAR_35 = VAR_31.saddr;
  VAR_34 = 1;

  VAR_24 = FUNC_0(VAR_32);
  if (VAR_24 == ((void*)0)) {
   FUNC_19("Bug in dn_route_input_slow() No output device\n");
   goto e_inval;
  }
  FUNC_4(VAR_24);

  if (VAR_32.r)
   VAR_35 = VAR_31.saddr;

  VAR_29 = FUNC_1(VAR_32);
  if (VAR_32.type == VAR_11) {
   VAR_31.daddr = FUNC_9(VAR_31.daddr, &VAR_32);
   FUNC_8(&VAR_32);
   VAR_34 = 0;
   if (FUNC_7(&VAR_31, &VAR_32))
    goto e_inval;
   VAR_34 = 1;
   if (VAR_32.type != 129)
    goto e_inval;
   VAR_28 |= VAR_7;
   VAR_29 = VAR_31.daddr;
  }
  VAR_31.saddr = VAR_35;
 }

 switch(VAR_32.type) {
 case 129:






  if (VAR_25->parms.forwarding == 0)
   goto e_inval;

  if (VAR_32.fi->fib_nhs > 1 && VAR_31.flowidn_oif == 0)
   FUNC_10(&VAR_31, &VAR_32);







  if (VAR_24 == VAR_23 && !(VAR_28 & VAR_10))
   VAR_28 |= VAR_8;

  VAR_30 = FUNC_2(VAR_32);

 case 131:
 case 128:
  break;
 case 130:
  VAR_28 |= VAR_9;
  VAR_31.saddr = VAR_22->dst;
  VAR_31.daddr = VAR_22->src;


  if (VAR_29)
   goto make_route;


  if (VAR_22->rt_flags & VAR_0) {
   VAR_29 = VAR_22->src;
   goto make_route;
  }


  VAR_26 = FUNC_17(VAR_25->router);
  if (VAR_26) {
   VAR_29 = ((struct dn_neigh *)VAR_26)->addr;
   goto make_route;
  }


  VAR_29 = VAR_22->src;
  goto make_route;
 default:
  goto e_inval;
 }

make_route:
 VAR_21 = FUNC_14(&VAR_13, VAR_24, 1, VAR_2, VAR_1);
 if (VAR_21 == ((void*)0))
  goto e_nobufs;

 VAR_21->dn_next = ((void*)0);
 FUNC_16(&VAR_21->fld, 0, sizeof(VAR_21->fld));
 VAR_21->rt_saddr = VAR_31.saddr;
 VAR_21->rt_daddr = VAR_31.daddr;
 VAR_21->rt_gateway = VAR_31.daddr;
 if (VAR_29)
  VAR_21->rt_gateway = VAR_29;
 VAR_21->rt_local_src = VAR_30 ? VAR_30 : VAR_21->rt_saddr;

 VAR_21->rt_dst_map = VAR_31.daddr;
 VAR_21->rt_src_map = VAR_31.saddr;

 VAR_21->fld.saddr = VAR_22->src;
 VAR_21->fld.daddr = VAR_22->dst;
 VAR_21->fld.flowidn_oif = 0;
 VAR_21->fld.flowidn_iif = VAR_23->ifindex;
 VAR_21->fld.flowidn_mark = VAR_31.flowidn_mark;

 VAR_21->n = VAR_26;
 VAR_21->dst.lastuse = VAR_19;
 VAR_21->dst.output = VAR_17;
 switch (VAR_32.type) {
 case 129:
  VAR_21->dst.input = VAR_14;
  break;
 case 130:
  VAR_21->dst.output = VAR_16;
  VAR_21->dst.input = VAR_15;
  VAR_21->dst.dev = VAR_23;
  VAR_28 |= VAR_9;
  break;
 default:
 case 128:
 case 131:
  VAR_21->dst.input = VAR_18;
 }
 VAR_21->rt_flags = VAR_28;

 VAR_33 = FUNC_13(VAR_21, &VAR_32);
 if (VAR_33)
  goto e_neighbour;

 VAR_27 = FUNC_11(VAR_21->fld.saddr, VAR_21->fld.daddr);

 FUNC_12(VAR_21, VAR_27, &VAR_21);
 FUNC_21(VAR_20, &VAR_21->dst);

done:
 if (VAR_26)
  FUNC_18(VAR_26);
 if (VAR_34)
  FUNC_8(&VAR_32);
 FUNC_5(VAR_23);
 if (VAR_24)
  FUNC_5(VAR_24);
out:
 return VAR_33;

e_inval:
 VAR_33 = -VAR_3;
 goto done;

e_nobufs:
 VAR_33 = -VAR_4;
 goto done;

e_neighbour:
 FUNC_15(&VAR_21->dst);
 goto done;
}
