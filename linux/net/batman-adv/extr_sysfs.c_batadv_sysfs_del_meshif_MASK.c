
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct batadv_priv {int * mesh_obj; } ;
struct batadv_attribute {int attr; } ;


 int VAR_0 ;
 struct batadv_attribute** VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 struct batadv_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5(struct net_device *VAR_2)
{
 struct batadv_priv *VAR_3 = FUNC_3(VAR_2);
 struct batadv_attribute **VAR_4;

 for (VAR_4 = VAR_1; *VAR_4; ++VAR_4)
  FUNC_4(VAR_3->mesh_obj, &((*VAR_4)->attr));

 FUNC_2(VAR_3->mesh_obj, VAR_0);
 FUNC_0(VAR_3->mesh_obj);
 FUNC_1(VAR_3->mesh_obj);
 VAR_3->mesh_obj = ((void*)0);
}
