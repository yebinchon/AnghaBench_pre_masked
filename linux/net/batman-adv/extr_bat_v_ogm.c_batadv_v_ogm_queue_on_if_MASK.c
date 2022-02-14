
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct batadv_priv {int aggregated_ogms; } ;
struct TYPE_2__ {int aggr_list_lock; int aggr_list; int aggr_len; } ;
struct batadv_hard_iface {TYPE_1__ bat_v; int soft_iface; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct batadv_hard_iface*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct batadv_hard_iface*) ;
 int FUNC_4 (struct sk_buff*,struct batadv_hard_iface*) ;
 struct batadv_priv* FUNC_5 (int ) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct sk_buff *VAR_0,
         struct batadv_hard_iface *VAR_1)
{
 struct batadv_priv *VAR_2 = FUNC_5(VAR_1->soft_iface);

 if (!FUNC_0(&VAR_2->aggregated_ogms)) {
  FUNC_4(VAR_0, VAR_1);
  return;
 }

 FUNC_7(&VAR_1->bat_v.aggr_list_lock);
 if (!FUNC_3(VAR_0, VAR_1))
  FUNC_1(VAR_1);

 VAR_1->bat_v.aggr_len += FUNC_2(VAR_0);
 FUNC_6(&VAR_1->bat_v.aggr_list, VAR_0);
 FUNC_8(&VAR_1->bat_v.aggr_list_lock);
}
