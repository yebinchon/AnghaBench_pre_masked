
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct batadv_priv {int distributed_arp_table; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct batadv_priv*,struct sk_buff*,int) ;
 int * FUNC_2 (struct sk_buff*,int) ;
 int * FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct batadv_priv*,int ,int *,unsigned short) ;
 int FUNC_7 (struct batadv_priv*,struct sk_buff*,int ,unsigned short,int ) ;
 unsigned short FUNC_8 (struct sk_buff*,int*) ;
 int FUNC_9 (struct batadv_priv*,struct sk_buff*,int,char*) ;

void FUNC_10(struct batadv_priv *VAR_2,
      struct sk_buff *VAR_3)
{
 u16 VAR_4;
 __be32 VAR_5, VAR_6;
 u8 *VAR_7, *VAR_8;
 int VAR_9 = 0;
 unsigned short VAR_10;

 if (!FUNC_0(&VAR_2->distributed_arp_table))
  return;

 VAR_10 = FUNC_8(VAR_3, &VAR_9);

 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_9);
 if (VAR_4 != VAR_0)
  return;

 FUNC_9(VAR_2, VAR_3, VAR_9, "Parsing outgoing ARP REPLY");

 VAR_7 = FUNC_3(VAR_3, VAR_9);
 VAR_5 = FUNC_5(VAR_3, VAR_9);
 VAR_8 = FUNC_2(VAR_3, VAR_9);
 VAR_6 = FUNC_4(VAR_3, VAR_9);

 FUNC_6(VAR_2, VAR_5, VAR_7, VAR_10);
 FUNC_6(VAR_2, VAR_6, VAR_8, VAR_10);




 FUNC_7(VAR_2, VAR_3, VAR_5, VAR_10,
    VAR_1);
 FUNC_7(VAR_2, VAR_3, VAR_6, VAR_10,
    VAR_1);
}
