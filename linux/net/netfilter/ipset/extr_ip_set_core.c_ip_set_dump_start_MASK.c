
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int sk; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_len; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct ip_set_net {int ip_set_max; int is_destroyed; } ;
struct ip_set {int family; int revision; int name; TYPE_3__* variant; TYPE_2__* type; int ref_netlink; } ;
typedef int ip_set_id_t ;
struct TYPE_8__ {scalar_t__ portid; } ;
struct TYPE_7__ {int (* head ) (struct ip_set*,struct sk_buff*) ;int (* list ) (struct ip_set*,struct sk_buff*,struct netlink_callback*) ;int (* uref ) (struct ip_set*,struct netlink_callback*,int) ;} ;
struct TYPE_6__ {int features; int name; } ;
struct TYPE_5__ {int nlmsg_seq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 TYPE_4__ FUNC_2 (int ) ;
 int VAR_22 ;
 unsigned int VAR_23 ;
 int FUNC_3 (struct ip_set*) ;
 int FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 (struct netlink_callback*,struct ip_set_net*) ;
 int FUNC_6 (int) ;
 struct ip_set* FUNC_7 (struct ip_set_net*,int) ;
 struct ip_set_net* FUNC_8 (int ) ;
 int VAR_24 ;
 struct ip_set* FUNC_9 (struct ip_set_net*,int) ;
 int FUNC_10 (int ,struct nlmsghdr*,int,int *) ;
 int FUNC_11 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_13 (struct sk_buff*,int ,int) ;
 int FUNC_14 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_15 (int ) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (int ) ;
 struct nlmsghdr* FUNC_18 (struct sk_buff*,scalar_t__,int ,unsigned int,int ) ;
 int FUNC_19 (struct ip_set*,struct sk_buff*) ;
 int FUNC_20 (struct ip_set*,struct netlink_callback*,int) ;
 int FUNC_21 (struct ip_set*,struct sk_buff*,struct netlink_callback*) ;
 int FUNC_22 (struct ip_set*,struct netlink_callback*,int) ;
 int FUNC_23 (struct ip_set*,struct netlink_callback*,int) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static int
FUNC_26(struct sk_buff *VAR_25, struct netlink_callback *VAR_26)
{
 ip_set_id_t VAR_27 = VAR_20, VAR_28;
 struct ip_set *VAR_29 = ((void*)0);
 struct nlmsghdr *VAR_30 = ((void*)0);
 unsigned int VAR_31 = FUNC_2(VAR_26->skb).portid ? VAR_23 : 0;
 struct ip_set_net *VAR_32 = FUNC_8(FUNC_17(VAR_25->sk));
 u32 VAR_33, VAR_34;
 bool VAR_35;
 int VAR_36 = 0;

 if (!VAR_26->args[VAR_13]) {
  VAR_36 = FUNC_5(VAR_26, VAR_32);
  if (VAR_36 < 0) {
   VAR_30 = FUNC_15(VAR_26->skb);



   if (VAR_30->nlmsg_flags & VAR_22)
    FUNC_10(VAR_26->skb, VAR_30, VAR_36, ((void*)0));
   return VAR_36;
  }
 }

 if (VAR_26->args[VAR_14] >= VAR_32->ip_set_max)
  goto out;

 VAR_33 = FUNC_1(VAR_26->args[VAR_13]);
 VAR_34 = FUNC_0(VAR_26->args[VAR_13]);
 VAR_28 = VAR_33 == VAR_2 ? VAR_26->args[VAR_14] + 1
        : VAR_32->ip_set_max;
dump_last:
 FUNC_16("dump type, flag: %u %u index: %ld\n",
   VAR_33, VAR_34, VAR_26->args[VAR_14]);
 for (; VAR_26->args[VAR_14] < VAR_28; VAR_26->args[VAR_14]++) {
  VAR_27 = (ip_set_id_t)VAR_26->args[VAR_14];
  FUNC_24(&VAR_24);
  VAR_29 = FUNC_7(VAR_32, VAR_27);
  VAR_35 = VAR_32->is_destroyed;
  if (!VAR_29 || VAR_35) {
   FUNC_25(&VAR_24);
   if (VAR_33 == VAR_2) {
    VAR_36 = -VAR_5;
    goto out;
   }
   if (VAR_35) {

    VAR_36 = 0;
    goto out;
   }
   continue;
  }



  if (VAR_33 != VAR_2 &&
      ((VAR_33 == VAR_0) ==
       !!(VAR_29->type->features & VAR_17))) {
   FUNC_25(&VAR_24);
   continue;
  }
  FUNC_16("List set: %s\n", VAR_29->name);
  if (!VAR_26->args[VAR_12]) {

   FUNC_16("reference set\n");
   VAR_29->ref_netlink++;
  }
  FUNC_25(&VAR_24);
  VAR_30 = FUNC_18(VAR_25, FUNC_2(VAR_26->skb).portid,
    VAR_26->nlh->nlmsg_seq, VAR_31,
    VAR_16);
  if (!VAR_30) {
   VAR_36 = -VAR_4;
   goto release_refcount;
  }
  if (FUNC_13(VAR_25, VAR_8,
          VAR_26->args[VAR_15]) ||
      FUNC_12(VAR_25, VAR_10, VAR_29->name))
   goto nla_put_failure;
  if (VAR_34 & VAR_19)
   goto next_set;
  switch (VAR_26->args[VAR_12]) {
  case 0:

   if (FUNC_12(VAR_25, VAR_11,
        VAR_29->type->name) ||
       FUNC_13(VAR_25, VAR_6,
           VAR_29->family) ||
       FUNC_13(VAR_25, VAR_9,
           VAR_29->revision))
    goto nla_put_failure;
   if (VAR_26->args[VAR_15] > VAR_21 &&
       FUNC_11(VAR_25, VAR_7, FUNC_6(VAR_27)))
    goto nla_put_failure;
   VAR_36 = VAR_29->variant->head(VAR_29, VAR_25);
   if (VAR_36 < 0)
    goto release_refcount;
   if (VAR_34 & VAR_18)
    goto next_set;
   if (VAR_29->variant->uref)
    VAR_29->variant->uref(VAR_29, VAR_26, 1);

  default:
   VAR_36 = VAR_29->variant->list(VAR_29, VAR_25, VAR_26);
   if (!VAR_26->args[VAR_12])

    goto next_set;
   goto release_refcount;
  }
 }

 if (VAR_33 == VAR_0) {
  VAR_33 = VAR_1;
  VAR_26->args[VAR_13] = VAR_33 | (VAR_34 << 16);
  VAR_26->args[VAR_14] = 0;
  if (VAR_29 && VAR_29->variant->uref)
   VAR_29->variant->uref(VAR_29, VAR_26, 0);
  goto dump_last;
 }
 goto out;

nla_put_failure:
 VAR_36 = -VAR_3;
next_set:
 if (VAR_33 == VAR_2)
  VAR_26->args[VAR_14] = VAR_20;
 else
  VAR_26->args[VAR_14]++;
release_refcount:

 if (VAR_36 || !VAR_26->args[VAR_12]) {
  VAR_29 = FUNC_9(VAR_32, VAR_27);
  if (VAR_29->variant->uref)
   VAR_29->variant->uref(VAR_29, VAR_26, 0);
  FUNC_16("release set %s\n", VAR_29->name);
  FUNC_3(VAR_29);
  VAR_26->args[VAR_12] = 0;
 }
out:
 if (VAR_30) {
  FUNC_14(VAR_25, VAR_30);
  FUNC_16("nlmsg_len: %u\n", VAR_30->nlmsg_len);
  FUNC_4(VAR_30);
 }

 return VAR_36 < 0 ? VAR_36 : VAR_25->len;
}
