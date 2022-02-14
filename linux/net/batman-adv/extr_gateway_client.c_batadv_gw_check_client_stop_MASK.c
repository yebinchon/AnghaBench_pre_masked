
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; } ;
struct batadv_priv {TYPE_1__ gw; } ;
struct batadv_gw_node {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct batadv_gw_node* FUNC_1 (struct batadv_priv*) ;
 int FUNC_2 (struct batadv_gw_node*) ;
 int FUNC_3 (struct batadv_priv*,int *) ;
 int FUNC_4 (struct batadv_priv*,int ,int ,int *) ;

void FUNC_5(struct batadv_priv *VAR_3)
{
 struct batadv_gw_node *VAR_4;

 if (FUNC_0(&VAR_3->gw.mode) != VAR_0)
  return;

 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4)
  return;




 FUNC_3(VAR_3, ((void*)0));




 FUNC_4(VAR_3, VAR_2, VAR_1, ((void*)0));

 FUNC_2(VAR_4);
}
