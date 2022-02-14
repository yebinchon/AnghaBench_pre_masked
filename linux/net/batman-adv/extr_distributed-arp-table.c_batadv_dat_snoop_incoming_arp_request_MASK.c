
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct batadv_unicast_4addr_packet {int dummy; } ;
struct batadv_priv {int distributed_arp_table; } ;
struct batadv_dat_entry {int mac_addr; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct batadv_priv*,struct sk_buff*,int) ;
 int * FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_5 (struct batadv_priv*,int ,int ,int ,int *,unsigned short) ;
 int FUNC_6 (struct batadv_priv*,int ,int *,unsigned short) ;
 struct batadv_dat_entry* FUNC_7 (struct batadv_priv*,int ,unsigned short) ;
 int FUNC_8 (struct batadv_dat_entry*) ;
 unsigned short FUNC_9 (struct sk_buff*,int*) ;
 int FUNC_10 (struct batadv_priv*,struct sk_buff*,int,char*) ;
 int FUNC_11 (struct batadv_priv*,int ) ;
 int FUNC_12 (struct batadv_priv*,struct sk_buff*,int *,unsigned short) ;
 int FUNC_13 (struct batadv_priv*,struct sk_buff*,int ,int *,unsigned short) ;
 int FUNC_14 (struct sk_buff*) ;

bool FUNC_15(struct batadv_priv *VAR_4,
        struct sk_buff *VAR_5, int VAR_6)
{
 u16 VAR_7;
 __be32 VAR_8, VAR_9;
 u8 *VAR_10;
 struct sk_buff *VAR_11;
 struct batadv_dat_entry *VAR_12 = ((void*)0);
 bool VAR_13 = 0;
 unsigned short VAR_14;
 int VAR_15;

 if (!FUNC_0(&VAR_4->distributed_arp_table))
  goto out;

 VAR_14 = FUNC_9(VAR_5, &VAR_6);

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6);
 if (VAR_7 != VAR_0)
  goto out;

 VAR_10 = FUNC_2(VAR_5, VAR_6);
 VAR_8 = FUNC_4(VAR_5, VAR_6);
 VAR_9 = FUNC_3(VAR_5, VAR_6);

 FUNC_10(VAR_4, VAR_5, VAR_6, "Parsing incoming ARP REQUEST");

 FUNC_6(VAR_4, VAR_8, VAR_10, VAR_14);

 VAR_12 = FUNC_7(VAR_4, VAR_9, VAR_14);
 if (!VAR_12)
  goto out;

 VAR_11 = FUNC_5(VAR_4, VAR_9, VAR_8,
           VAR_12->mac_addr, VAR_10, VAR_14);
 if (!VAR_11)
  goto out;





 if (VAR_6 == sizeof(struct batadv_unicast_4addr_packet))
  VAR_15 = FUNC_13(VAR_4, VAR_11,
         VAR_2,
         ((void*)0), VAR_14);
 else
  VAR_15 = FUNC_12(VAR_4, VAR_11, ((void*)0), VAR_14);

 if (VAR_15 != VAR_3) {
  FUNC_11(VAR_4, VAR_1);
  VAR_13 = 1;
 }
out:
 if (VAR_12)
  FUNC_8(VAR_12);
 if (VAR_13)
  FUNC_14(VAR_5);
 return VAR_13;
}
