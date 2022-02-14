
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct batadv_tvlv_gateway_data {int bandwidth_down; int bandwidth_up; } ;
struct TYPE_2__ {int list_lock; int generation; } ;
struct batadv_priv {TYPE_1__ gw; } ;
struct batadv_orig_node {int orig; } ;
struct batadv_gw_node {int bandwidth_down; int bandwidth_up; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct batadv_priv*,char*,int ,...) ;
 struct batadv_gw_node* FUNC_1 (struct batadv_priv*) ;
 int FUNC_2 (struct batadv_priv*,struct batadv_orig_node*,struct batadv_tvlv_gateway_data*) ;
 struct batadv_gw_node* FUNC_3 (struct batadv_priv*,struct batadv_orig_node*) ;
 int FUNC_4 (struct batadv_gw_node*) ;
 int FUNC_5 (struct batadv_priv*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct batadv_priv *VAR_1,
      struct batadv_orig_node *VAR_2,
      struct batadv_tvlv_gateway_data *VAR_3)
{
 struct batadv_gw_node *VAR_4, *VAR_5 = ((void*)0);

 FUNC_9(&VAR_1->gw.list_lock);
 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (!VAR_4) {
  FUNC_2(VAR_1, VAR_2, VAR_3);
  FUNC_10(&VAR_1->gw.list_lock);
  goto out;
 }
 FUNC_10(&VAR_1->gw.list_lock);

 if (VAR_4->bandwidth_down == FUNC_8(VAR_3->bandwidth_down) &&
     VAR_4->bandwidth_up == FUNC_8(VAR_3->bandwidth_up))
  goto out;

 FUNC_0(VAR_0, VAR_1,
     "Gateway bandwidth of originator %pM changed from %u.%u/%u.%u MBit to %u.%u/%u.%u MBit\n",
     VAR_2->orig,
     VAR_4->bandwidth_down / 10,
     VAR_4->bandwidth_down % 10,
     VAR_4->bandwidth_up / 10,
     VAR_4->bandwidth_up % 10,
     FUNC_8(VAR_3->bandwidth_down) / 10,
     FUNC_8(VAR_3->bandwidth_down) % 10,
     FUNC_8(VAR_3->bandwidth_up) / 10,
     FUNC_8(VAR_3->bandwidth_up) % 10);

 VAR_4->bandwidth_down = FUNC_8(VAR_3->bandwidth_down);
 VAR_4->bandwidth_up = FUNC_8(VAR_3->bandwidth_up);

 if (FUNC_8(VAR_3->bandwidth_down) == 0) {
  FUNC_0(VAR_0, VAR_1,
      "Gateway %pM removed from gateway list\n",
      VAR_2->orig);




  FUNC_9(&VAR_1->gw.list_lock);
  if (!FUNC_7(&VAR_4->list)) {
   FUNC_6(&VAR_4->list);
   FUNC_4(VAR_4);
   VAR_1->gw.generation++;
  }
  FUNC_10(&VAR_1->gw.list_lock);

  VAR_5 = FUNC_1(VAR_1);
  if (VAR_4 == VAR_5)
   FUNC_5(VAR_1);

  if (VAR_5)
   FUNC_4(VAR_5);
 }

out:
 if (VAR_4)
  FUNC_4(VAR_4);
}
