
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct batadv_priv {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (struct batadv_priv*,int ,int ,int *,int *,unsigned short) ;
 int FUNC_1 (struct batadv_priv*,int ,int *,unsigned short) ;
 int FUNC_2 (struct batadv_priv*,struct sk_buff*,int ,unsigned short,int ) ;
 int FUNC_3 (int ,struct batadv_priv*,char*,int *,int *,int ) ;
 int FUNC_4 (unsigned short) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_7(struct batadv_priv *VAR_3, u8 *VAR_4,
    __be32 VAR_5, u8 *VAR_6, __be32 VAR_7,
    unsigned short VAR_8)
{
 struct sk_buff *VAR_9;

 VAR_9 = FUNC_0(VAR_3, VAR_5, VAR_7, VAR_4,
       VAR_6, VAR_8);
 if (!VAR_9)
  return;

 FUNC_6(VAR_9, VAR_2);

 FUNC_1(VAR_3, VAR_5, VAR_4, VAR_8);
 FUNC_1(VAR_3, VAR_7, VAR_6, VAR_8);

 FUNC_2(VAR_3, VAR_9, VAR_5, VAR_8,
    VAR_1);
 FUNC_2(VAR_3, VAR_9, VAR_7, VAR_8,
    VAR_1);

 FUNC_5(VAR_9);

 FUNC_3(VAR_0, VAR_3,
     "Snooped from outgoing DHCPACK (server address): %pI4, %pM (vid: %i)\n",
     &VAR_7, VAR_6, FUNC_4(VAR_8));
 FUNC_3(VAR_0, VAR_3,
     "Snooped from outgoing DHCPACK (client address): %pI4, %pM (vid: %i)\n",
     &VAR_5, VAR_4, FUNC_4(VAR_8));
}
