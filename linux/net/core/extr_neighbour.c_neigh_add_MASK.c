
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct sk_buff {int sk; } ;
struct pneigh_entry {int flags; void* protocol; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int addr_len; } ;
struct net {int dummy; } ;
struct neighbour {void* protocol; } ;
struct neigh_table {int (* allow_add ) (struct net_device*,struct netlink_ext_ack*) ;scalar_t__ key_len; } ;
struct ndmsg {int ndm_flags; int ndm_state; int ndm_family; scalar_t__ ndm_ifindex; } ;
struct TYPE_2__ {int portid; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct neighbour*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_1__ FUNC_2 (struct sk_buff*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (struct netlink_ext_ack*,char*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (struct neighbour*) ;
 struct neighbour* FUNC_5 (struct neigh_table*,void*,struct net_device*,int,int) ;
 struct net_device* FUNC_6 (struct net*,scalar_t__) ;
 int FUNC_7 (struct neighbour*,void*,int,int,int ,struct netlink_ext_ack*) ;
 int VAR_23 ;
 int FUNC_8 (struct neighbour*,int *) ;
 struct neigh_table* FUNC_9 (int ) ;
 struct neighbour* FUNC_10 (struct neigh_table*,void*,struct net_device*) ;
 int FUNC_11 (struct neighbour*) ;
 int * FUNC_12 (struct nlattr*) ;
 void* FUNC_13 (struct nlattr*) ;
 int FUNC_14 (struct nlattr*) ;
 struct ndmsg* FUNC_15 (struct nlmsghdr*) ;
 int FUNC_16 (struct nlmsghdr*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 struct pneigh_entry* FUNC_17 (struct neigh_table*,struct net*,void*,struct net_device*,int) ;
 struct net* FUNC_18 (int ) ;
 int FUNC_19 (struct net_device*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_20(struct sk_buff *VAR_24, struct nlmsghdr *VAR_25,
       struct netlink_ext_ack *VAR_26)
{
 int VAR_27 = VAR_10 | VAR_13 |
  VAR_14;
 struct net *VAR_28 = FUNC_18(VAR_24->sk);
 struct ndmsg *VAR_29;
 struct nlattr *VAR_30[VAR_8+1];
 struct neigh_table *VAR_31;
 struct net_device *VAR_32 = ((void*)0);
 struct neighbour *VAR_33;
 void *VAR_34, *VAR_35;
 u8 VAR_36 = 0;
 int VAR_37;

 FUNC_0();
 VAR_37 = FUNC_16(VAR_25, sizeof(*VAR_29), VAR_30, VAR_8,
         VAR_23, VAR_26);
 if (VAR_37 < 0)
  goto out;

 VAR_37 = -VAR_2;
 if (!VAR_30[VAR_6]) {
  FUNC_3(VAR_26, "Network address not specified");
  goto out;
 }

 VAR_29 = FUNC_15(VAR_25);
 if (VAR_29->ndm_ifindex) {
  VAR_32 = FUNC_6(VAR_28, VAR_29->ndm_ifindex);
  if (VAR_32 == ((void*)0)) {
   VAR_37 = -VAR_4;
   goto out;
  }

  if (VAR_30[VAR_7] && FUNC_14(VAR_30[VAR_7]) < VAR_32->addr_len) {
   FUNC_3(VAR_26, "Invalid link address");
   goto out;
  }
 }

 VAR_31 = FUNC_9(VAR_29->ndm_family);
 if (VAR_31 == ((void*)0))
  return -VAR_0;

 if (FUNC_14(VAR_30[VAR_6]) < (int)VAR_31->key_len) {
  FUNC_3(VAR_26, "Invalid network address");
  goto out;
 }

 VAR_34 = FUNC_12(VAR_30[VAR_6]);
 VAR_35 = VAR_30[VAR_7] ? FUNC_12(VAR_30[VAR_7]) : ((void*)0);

 if (VAR_30[VAR_9])
  VAR_36 = FUNC_13(VAR_30[VAR_9]);

 if (VAR_29->ndm_flags & VAR_19) {
  struct pneigh_entry *VAR_38;

  VAR_37 = -VAR_3;
  VAR_38 = FUNC_17(VAR_31, VAR_28, VAR_34, VAR_32, 1);
  if (VAR_38) {
   VAR_38->flags = VAR_29->ndm_flags;
   if (VAR_36)
    VAR_38->protocol = VAR_36;
   VAR_37 = 0;
  }
  goto out;
 }

 if (!VAR_32) {
  FUNC_3(VAR_26, "Device not specified");
  goto out;
 }

 if (VAR_31->allow_add && !VAR_31->allow_add(VAR_32, VAR_26)) {
  VAR_37 = -VAR_2;
  goto out;
 }

 VAR_33 = FUNC_10(VAR_31, VAR_34, VAR_32);
 if (VAR_33 == ((void*)0)) {
  bool VAR_39;

  if (!(VAR_25->nlmsg_flags & VAR_15)) {
   VAR_37 = -VAR_5;
   goto out;
  }

  VAR_39 = VAR_29->ndm_state & VAR_22 ||
     VAR_29->ndm_flags & VAR_18;
  VAR_33 = FUNC_5(VAR_31, VAR_34, VAR_32, VAR_39, 1);
  if (FUNC_1(VAR_33)) {
   VAR_37 = FUNC_4(VAR_33);
   goto out;
  }
 } else {
  if (VAR_25->nlmsg_flags & VAR_16) {
   VAR_37 = -VAR_1;
   FUNC_11(VAR_33);
   goto out;
  }

  if (!(VAR_25->nlmsg_flags & VAR_17))
   VAR_27 &= ~(VAR_13 |
       VAR_14);
 }

 if (VAR_29->ndm_flags & VAR_18)
  VAR_27 |= VAR_11;

 if (VAR_29->ndm_flags & VAR_20)
  VAR_27 |= VAR_12;

 if (VAR_29->ndm_flags & VAR_21) {
  FUNC_8(VAR_33, ((void*)0));
  VAR_37 = 0;
 } else
  VAR_37 = FUNC_7(VAR_33, VAR_35, VAR_29->ndm_state, VAR_27,
         FUNC_2(VAR_24).portid, VAR_26);

 if (VAR_36)
  VAR_33->protocol = VAR_36;

 FUNC_11(VAR_33);

out:
 return VAR_37;
}
