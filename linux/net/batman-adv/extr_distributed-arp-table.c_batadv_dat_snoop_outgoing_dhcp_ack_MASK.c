
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct batadv_priv {int distributed_arp_table; } ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_2__ {int h_source; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*,int ,int *,int *,int *) ;
 int FUNC_2 (struct batadv_priv*,int *,int ,int ,int ,unsigned short) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

void FUNC_4(struct batadv_priv *VAR_1,
     struct sk_buff *VAR_2,
     __be16 VAR_3,
     unsigned short VAR_4)
{
 u8 VAR_5[VAR_0];
 __be32 VAR_6, VAR_7;

 if (!FUNC_0(&VAR_1->distributed_arp_table))
  return;

 if (!FUNC_1(VAR_2, VAR_3, &VAR_6, VAR_5, &VAR_7))
  return;

 FUNC_2(VAR_1, VAR_5, VAR_7, FUNC_3(VAR_2)->h_source,
       VAR_6, VAR_4);
}
