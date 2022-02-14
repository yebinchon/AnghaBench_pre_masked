
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int sk; } ;
struct pneigh_entry {int dummy; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct neighbour {int dummy; } ;
struct neigh_table {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int VAR_3 ;
 struct net_device* FUNC_2 (struct net*,int) ;
 int FUNC_3 (struct net*,struct neighbour*,int ,int ) ;
 struct neighbour* FUNC_4 (struct neigh_table*,void*,struct net_device*) ;
 int FUNC_5 (struct neighbour*) ;
 int FUNC_6 (struct nlmsghdr*,struct neigh_table**,void**,int*,int*,struct netlink_ext_ack*) ;
 int FUNC_7 (struct net*,struct pneigh_entry*,int ,int ,struct neigh_table*) ;
 struct pneigh_entry* FUNC_8 (struct neigh_table*,struct net*,void*,struct net_device*,int ) ;
 struct net* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_4, struct nlmsghdr *VAR_5,
       struct netlink_ext_ack *VAR_6)
{
 struct net *VAR_7 = FUNC_9(VAR_4->sk);
 struct net_device *VAR_8 = ((void*)0);
 struct neigh_table *VAR_9 = ((void*)0);
 struct neighbour *VAR_10;
 void *VAR_11 = ((void*)0);
 u8 VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14;

 VAR_14 = FUNC_6(VAR_5, &VAR_9, &VAR_11, &VAR_13, &VAR_12,
      VAR_6);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_13) {
  VAR_8 = FUNC_2(VAR_7, VAR_13);
  if (!VAR_8) {
   FUNC_1(VAR_6, "Unknown device ifindex");
   return -VAR_1;
  }
 }

 if (!VAR_11) {
  FUNC_1(VAR_6, "Network address not specified");
  return -VAR_0;
 }

 if (VAR_12 & VAR_3) {
  struct pneigh_entry *VAR_15;

  VAR_15 = FUNC_8(VAR_9, VAR_7, VAR_11, VAR_8, 0);
  if (!VAR_15) {
   FUNC_1(VAR_6, "Proxy neighbour entry not found");
   return -VAR_2;
  }
  return FUNC_7(VAR_7, VAR_15, FUNC_0(VAR_4).portid,
     VAR_5->nlmsg_seq, VAR_9);
 }

 if (!VAR_8) {
  FUNC_1(VAR_6, "No device specified");
  return -VAR_0;
 }

 VAR_10 = FUNC_4(VAR_9, VAR_11, VAR_8);
 if (!VAR_10) {
  FUNC_1(VAR_6, "Neighbour entry not found");
  return -VAR_2;
 }

 VAR_14 = FUNC_3(VAR_7, VAR_10, FUNC_0(VAR_4).portid,
         VAR_5->nlmsg_seq);

 FUNC_5(VAR_10);

 return VAR_14;
}
