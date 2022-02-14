
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct batadv_priv {int dummy; } ;
struct batadv_hard_iface {scalar_t__ if_status; int soft_iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct batadv_priv*,int ,scalar_t__) ;
 int FUNC_1 (struct batadv_priv*,int ) ;
 int FUNC_2 (struct sk_buff*,struct batadv_hard_iface*) ;
 struct batadv_priv* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_4,
        struct batadv_hard_iface *VAR_5)
{
 struct batadv_priv *VAR_6 = FUNC_3(VAR_5->soft_iface);

 if (VAR_5->if_status != VAR_2)
  return;

 FUNC_1(VAR_6, VAR_0);
 FUNC_0(VAR_6, VAR_1,
      VAR_4->len + VAR_3);

 FUNC_2(VAR_4, VAR_5);
}
