
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int mcast_handler_lock; struct batadv_priv* bat_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct batadv_priv*,struct batadv_orig_node*,int ) ;
 int FUNC_1 (struct batadv_priv*,struct batadv_orig_node*,int ) ;
 int FUNC_2 (struct batadv_priv*,struct batadv_orig_node*,int ) ;
 int FUNC_3 (struct batadv_priv*,struct batadv_orig_node*,int ) ;
 int FUNC_4 (struct batadv_priv*,struct batadv_orig_node*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct batadv_orig_node *VAR_3)
{
 struct batadv_priv *VAR_4 = VAR_3->bat_priv;

 FUNC_5(&VAR_3->mcast_handler_lock);

 FUNC_4(VAR_4, VAR_3, VAR_2);
 FUNC_0(VAR_4, VAR_3, VAR_2);
 FUNC_1(VAR_4, VAR_3, VAR_2);
 FUNC_2(VAR_4, VAR_3,
          VAR_0);
 FUNC_3(VAR_4, VAR_3,
          VAR_1);

 FUNC_6(&VAR_3->mcast_handler_lock);
}
