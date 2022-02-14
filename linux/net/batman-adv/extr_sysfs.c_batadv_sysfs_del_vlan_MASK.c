
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_softif_vlan {int * kobj; } ;
struct batadv_priv {int * mesh_obj; } ;
struct batadv_attribute {int attr; } ;


 int VAR_0 ;
 struct batadv_attribute** VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(struct batadv_priv *VAR_2,
      struct batadv_softif_vlan *VAR_3)
{
 struct batadv_attribute **VAR_4;

 for (VAR_4 = VAR_1; *VAR_4; ++VAR_4)
  FUNC_3(VAR_3->kobj, &((*VAR_4)->attr));

 if (VAR_3->kobj != VAR_2->mesh_obj) {
  FUNC_2(VAR_3->kobj, VAR_0);
  FUNC_0(VAR_3->kobj);
 }
 FUNC_1(VAR_3->kobj);
 VAR_3->kobj = ((void*)0);
}
