
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct neighbour {int dummy; } ;
struct neigh_table {int lock; scalar_t__ key_len; } ;
struct ndmsg {int ndm_flags; int ndm_family; scalar_t__ ndm_ifindex; } ;
struct TYPE_2__ {int portid; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct netlink_ext_ack*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct net_device* FUNC_3 (struct net*,scalar_t__) ;
 int FUNC_4 (struct neighbour*,int *,int ,int,int ,struct netlink_ext_ack*) ;
 struct neigh_table* FUNC_5 (int ) ;
 struct neighbour* FUNC_6 (struct neigh_table*,int ,struct net_device*) ;
 int FUNC_7 (struct neighbour*) ;
 int FUNC_8 (struct neighbour*,struct neigh_table*) ;
 int FUNC_9 (struct nlattr*) ;
 int FUNC_10 (struct nlattr*) ;
 struct ndmsg* FUNC_11 (struct nlmsghdr*) ;
 struct nlattr* FUNC_12 (struct nlmsghdr*,int,int ) ;
 int FUNC_13 (struct nlmsghdr*) ;
 int FUNC_14 (struct neigh_table*,struct net*,int ,struct net_device*) ;
 struct net* FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct sk_buff *VAR_9, struct nlmsghdr *VAR_10,
   struct netlink_ext_ack *VAR_11)
{
 struct net *VAR_12 = FUNC_15(VAR_9->sk);
 struct ndmsg *VAR_13;
 struct nlattr *VAR_14;
 struct neigh_table *VAR_15;
 struct neighbour *VAR_16;
 struct net_device *VAR_17 = ((void*)0);
 int VAR_18 = -VAR_1;

 FUNC_0();
 if (FUNC_13(VAR_10) < sizeof(*VAR_13))
  goto out;

 VAR_14 = FUNC_12(VAR_10, sizeof(*VAR_13), VAR_4);
 if (!VAR_14) {
  FUNC_2(VAR_11, "Network address not specified");
  goto out;
 }

 VAR_13 = FUNC_11(VAR_10);
 if (VAR_13->ndm_ifindex) {
  VAR_17 = FUNC_3(VAR_12, VAR_13->ndm_ifindex);
  if (VAR_17 == ((void*)0)) {
   VAR_18 = -VAR_2;
   goto out;
  }
 }

 VAR_15 = FUNC_5(VAR_13->ndm_family);
 if (VAR_15 == ((void*)0))
  return -VAR_0;

 if (FUNC_10(VAR_14) < (int)VAR_15->key_len) {
  FUNC_2(VAR_11, "Invalid network address");
  goto out;
 }

 if (VAR_13->ndm_flags & VAR_7) {
  VAR_18 = FUNC_14(VAR_15, VAR_12, FUNC_9(VAR_14), VAR_17);
  goto out;
 }

 if (VAR_17 == ((void*)0))
  goto out;

 VAR_16 = FUNC_6(VAR_15, FUNC_9(VAR_14), VAR_17);
 if (VAR_16 == ((void*)0)) {
  VAR_18 = -VAR_3;
  goto out;
 }

 VAR_18 = FUNC_4(VAR_16, ((void*)0), VAR_8,
        VAR_6 | VAR_5,
        FUNC_1(VAR_9).portid, VAR_11);
 FUNC_16(&VAR_15->lock);
 FUNC_7(VAR_16);
 FUNC_8(VAR_16, VAR_15);
 FUNC_17(&VAR_15->lock);

out:
 return VAR_18;
}
