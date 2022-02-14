
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct batadv_priv {int distributed_arp_table; } ;
struct batadv_dat_entry {int ip; int mac_addr; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct batadv_priv*,struct sk_buff*,int) ;
 int * FUNC_2 (struct sk_buff*,int) ;
 int * FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct batadv_priv*,int *,unsigned short) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (struct batadv_priv*,int ,int *,unsigned short) ;
 struct batadv_dat_entry* FUNC_9 (struct batadv_priv*,int ,unsigned short) ;
 int FUNC_10 (struct batadv_dat_entry*) ;
 unsigned short FUNC_11 (struct sk_buff*,int*) ;
 int FUNC_12 (int ,struct batadv_priv*,char*,int *,...) ;
 int FUNC_13 (struct batadv_priv*,struct sk_buff*,int,char*) ;
 int FUNC_14 (struct batadv_priv*,int *,unsigned short) ;
 int FUNC_15 (struct sk_buff*) ;

bool FUNC_16(struct batadv_priv *VAR_2,
      struct sk_buff *VAR_3, int VAR_4)
{
 struct batadv_dat_entry *VAR_5 = ((void*)0);
 u16 VAR_6;
 __be32 VAR_7, VAR_8;
 u8 *VAR_9, *VAR_10;
 bool VAR_11 = 0;
 unsigned short VAR_12;

 if (!FUNC_0(&VAR_2->distributed_arp_table))
  goto out;

 VAR_12 = FUNC_11(VAR_3, &VAR_4);

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_6 != VAR_0)
  goto out;

 FUNC_13(VAR_2, VAR_3, VAR_4, "Parsing incoming ARP REPLY");

 VAR_9 = FUNC_3(VAR_3, VAR_4);
 VAR_7 = FUNC_5(VAR_3, VAR_4);
 VAR_10 = FUNC_2(VAR_3, VAR_4);
 VAR_8 = FUNC_4(VAR_3, VAR_4);







 VAR_5 = FUNC_9(VAR_2, VAR_7, VAR_12);
 if (VAR_5 && FUNC_7(VAR_9, VAR_5->mac_addr)) {
  FUNC_12(VAR_1, VAR_2, "Doubled ARP reply removed: ARP MSG = [src: %pM-%pI4 dst: %pM-%pI4]; dat_entry: %pM-%pI4\n",
      VAR_9, &VAR_7, VAR_10, &VAR_8,
      VAR_5->mac_addr, &VAR_5->ip);
  VAR_11 = 1;
 }




 FUNC_8(VAR_2, VAR_7, VAR_9, VAR_12);
 FUNC_8(VAR_2, VAR_8, VAR_10, VAR_12);

 if (VAR_11)
  goto out;







 if (!FUNC_6(VAR_2, VAR_9, VAR_12)) {
  FUNC_12(VAR_1, VAR_2,
      "Device %pM claimed by another backbone gw. Drop ARP reply.\n",
      VAR_9);
  VAR_11 = 1;
  goto out;
 }




 VAR_11 = !FUNC_14(VAR_2, VAR_10, VAR_12);




 VAR_11 |= FUNC_14(VAR_2, VAR_9, VAR_12);
out:
 if (VAR_11)
  FUNC_15(VAR_3);
 if (VAR_5)
  FUNC_10(VAR_5);

 return VAR_11;
}
