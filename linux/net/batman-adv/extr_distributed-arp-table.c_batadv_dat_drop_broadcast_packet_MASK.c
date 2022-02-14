
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct batadv_priv {int distributed_arp_table; } ;
struct batadv_forw_packet {int skb; } ;
struct batadv_dat_entry {int dummy; } ;
struct batadv_bcast_packet {int dummy; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct batadv_priv*,int ,int) ;
 int FUNC_2 (int ,int) ;
 struct batadv_dat_entry* FUNC_3 (struct batadv_priv*,int ,unsigned short) ;
 int FUNC_4 (struct batadv_dat_entry*) ;
 unsigned short FUNC_5 (int ,int*) ;
 int FUNC_6 (int ,struct batadv_priv*,char*,int *) ;
 scalar_t__ FUNC_7 (struct batadv_forw_packet*) ;

bool FUNC_8(struct batadv_priv *VAR_2,
          struct batadv_forw_packet *VAR_3)
{
 u16 VAR_4;
 __be32 VAR_5;
 struct batadv_dat_entry *VAR_6 = ((void*)0);
 bool VAR_7 = 0;
 int VAR_8 = sizeof(struct batadv_bcast_packet);
 unsigned short VAR_9;

 if (!FUNC_0(&VAR_2->distributed_arp_table))
  goto out;




 if (FUNC_7(VAR_3))
  goto out;

 VAR_9 = FUNC_5(VAR_3->skb, &VAR_8);

 VAR_4 = FUNC_1(VAR_2, VAR_3->skb, VAR_8);
 if (VAR_4 != VAR_0)
  goto out;

 VAR_5 = FUNC_2(VAR_3->skb, VAR_8);
 VAR_6 = FUNC_3(VAR_2, VAR_5, VAR_9);

 if (!VAR_6) {
  FUNC_6(VAR_1, VAR_2,
      "ARP Request for %pI4: fallback\n", &VAR_5);
  goto out;
 }

 FUNC_6(VAR_1, VAR_2,
     "ARP Request for %pI4: fallback prevented\n", &VAR_5);
 VAR_7 = 1;

out:
 if (VAR_6)
  FUNC_4(VAR_6);
 return VAR_7;
}
