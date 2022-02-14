
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct ethhdr {int * h_source; int h_proto; } ;
struct batadv_priv {int distributed_arp_table; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*,int ,int *,int *,int *) ;
 int FUNC_2 (struct batadv_priv*,int ,int *,unsigned short) ;
 unsigned short FUNC_3 (struct sk_buff*,int*) ;
 int FUNC_4 (int ,struct batadv_priv*,char*,int *,int *,int ) ;
 int FUNC_5 (unsigned short) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;

void FUNC_9(struct batadv_priv *VAR_3,
     struct sk_buff *VAR_4, int VAR_5)
{
 u8 VAR_6[VAR_1];
 struct ethhdr *VAR_7;
 __be32 VAR_8, VAR_9;
 unsigned short VAR_10;
 __be16 VAR_11;
 u8 *VAR_12;

 if (!FUNC_0(&VAR_3->distributed_arp_table))
  return;

 if (FUNC_8(!FUNC_6(VAR_4, VAR_5 + VAR_2)))
  return;

 VAR_7 = (struct ethhdr *)(VAR_4->data + VAR_5);
 FUNC_7(VAR_4, VAR_5 + VAR_2);
 VAR_11 = VAR_7->h_proto;

 if (!FUNC_1(VAR_4, VAR_11, &VAR_8, VAR_6, &VAR_9))
  return;

 VAR_12 = VAR_7->h_source;
 VAR_10 = FUNC_3(VAR_4, &VAR_5);

 FUNC_2(VAR_3, VAR_9, VAR_6, VAR_10);
 FUNC_2(VAR_3, VAR_8, VAR_12, VAR_10);

 FUNC_4(VAR_0, VAR_3,
     "Snooped from incoming DHCPACK (server address): %pI4, %pM (vid: %i)\n",
     &VAR_8, VAR_12, FUNC_5(VAR_10));
 FUNC_4(VAR_0, VAR_3,
     "Snooped from incoming DHCPACK (client address): %pI4, %pM (vid: %i)\n",
     &VAR_9, VAR_6, FUNC_5(VAR_10));
}
