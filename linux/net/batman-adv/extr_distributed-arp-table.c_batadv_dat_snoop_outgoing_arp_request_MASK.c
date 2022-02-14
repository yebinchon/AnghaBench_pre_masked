
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; int protocol; } ;
struct net_device {int dummy; } ;
struct batadv_priv {int distributed_arp_table; struct net_device* soft_iface; } ;
struct batadv_dat_entry {int mac_addr; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct batadv_priv*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct batadv_priv*,struct sk_buff*,int) ;
 int * FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct batadv_priv*,int ,unsigned short) ;
 struct sk_buff* FUNC_7 (struct batadv_priv*,int ,int ,int ,int *,unsigned short) ;
 int FUNC_8 (struct batadv_priv*,int ,int *,unsigned short) ;
 struct batadv_dat_entry* FUNC_9 (struct batadv_priv*,int ,unsigned short) ;
 int FUNC_10 (struct batadv_dat_entry*) ;
 int FUNC_11 (struct batadv_priv*,struct sk_buff*,int ,unsigned short,int ) ;
 unsigned short FUNC_12 (struct sk_buff*,int*) ;
 int FUNC_13 (int ,struct batadv_priv*,char*,...) ;
 int FUNC_14 (struct batadv_priv*,struct sk_buff*,int,char*) ;
 int FUNC_15 (struct batadv_priv*,int ) ;
 scalar_t__ FUNC_16 (struct batadv_priv*,int ,unsigned short) ;
 int FUNC_17 (struct sk_buff*,struct net_device*) ;
 int FUNC_18 (struct sk_buff*) ;

bool FUNC_19(struct batadv_priv *VAR_6,
        struct sk_buff *VAR_7)
{
 u16 VAR_8 = 0;
 __be32 VAR_9, VAR_10;
 u8 *VAR_11;
 bool VAR_12 = 0;
 struct batadv_dat_entry *VAR_13 = ((void*)0);
 struct sk_buff *VAR_14;
 struct net_device *VAR_15 = VAR_6->soft_iface;
 int VAR_16 = 0;
 unsigned short VAR_17;

 if (!FUNC_0(&VAR_6->distributed_arp_table))
  goto out;

 VAR_17 = FUNC_12(VAR_7, &VAR_16);

 VAR_8 = FUNC_2(VAR_6, VAR_7, VAR_16);



 if (VAR_8 != VAR_0)
  goto out;

 FUNC_14(VAR_6, VAR_7, VAR_16, "Parsing outgoing ARP REQUEST");

 VAR_10 = FUNC_5(VAR_7, VAR_16);
 VAR_11 = FUNC_3(VAR_7, VAR_16);
 VAR_9 = FUNC_4(VAR_7, VAR_16);

 FUNC_8(VAR_6, VAR_10, VAR_11, VAR_17);

 VAR_13 = FUNC_9(VAR_6, VAR_9, VAR_17);
 if (VAR_13) {
  if (FUNC_16(VAR_6, VAR_13->mac_addr, VAR_17)) {
   VAR_12 = 1;
   goto out;
  }






  if (!FUNC_6(VAR_6,
         VAR_13->mac_addr, VAR_17)) {
   FUNC_13(VAR_3, VAR_6,
       "Device %pM claimed by another backbone gw. Don't send ARP reply!",
       VAR_13->mac_addr);
   VAR_12 = 1;
   goto out;
  }

  VAR_14 = FUNC_7(VAR_6, VAR_9, VAR_10,
            VAR_13->mac_addr,
            VAR_11, VAR_17);
  if (!VAR_14)
   goto out;

  VAR_14->protocol = FUNC_17(VAR_14, VAR_15);

  FUNC_15(VAR_6, VAR_1);
  FUNC_1(VAR_6, VAR_2,
       VAR_7->len + VAR_5 + VAR_16);

  FUNC_18(VAR_14);
  FUNC_13(VAR_3, VAR_6, "ARP request replied locally\n");
  VAR_12 = 1;
 } else {

  VAR_12 = FUNC_11(VAR_6, VAR_7, VAR_9, VAR_17,
           VAR_4);
 }
out:
 if (VAR_13)
  FUNC_10(VAR_13);
 return VAR_12;
}
