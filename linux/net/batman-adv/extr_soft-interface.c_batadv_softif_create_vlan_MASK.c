
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct batadv_softif_vlan {unsigned short vid; int list; int refcount; int ap_isolation; struct batadv_priv* bat_priv; } ;
struct batadv_priv {TYPE_1__* soft_iface; int softif_vlan_list_lock; int softif_vlan_list; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 struct batadv_softif_vlan* FUNC_1 (struct batadv_priv*,unsigned short) ;
 int FUNC_2 (struct batadv_softif_vlan*) ;
 int FUNC_3 (TYPE_1__*,struct batadv_softif_vlan*) ;
 int FUNC_4 (TYPE_1__*,int ,unsigned short,int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct batadv_softif_vlan* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct batadv_priv *VAR_5, unsigned short VAR_6)
{
 struct batadv_softif_vlan *VAR_7;
 int VAR_8;

 FUNC_9(&VAR_5->softif_vlan_list_lock);

 VAR_7 = FUNC_1(VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_2(VAR_7);
  FUNC_10(&VAR_5->softif_vlan_list_lock);
  return -VAR_2;
 }

 VAR_7 = FUNC_8(sizeof(*VAR_7), VAR_4);
 if (!VAR_7) {
  FUNC_10(&VAR_5->softif_vlan_list_lock);
  return -VAR_3;
 }

 VAR_7->bat_priv = VAR_5;
 VAR_7->vid = VAR_6;
 FUNC_7(&VAR_7->refcount);

 FUNC_0(&VAR_7->ap_isolation, 0);

 FUNC_6(&VAR_7->refcount);
 FUNC_5(&VAR_7->list, &VAR_5->softif_vlan_list);
 FUNC_10(&VAR_5->softif_vlan_list_lock);




 VAR_8 = FUNC_3(VAR_5->soft_iface, VAR_7);
 if (VAR_8) {

  FUNC_2(VAR_7);


  FUNC_2(VAR_7);
  return VAR_8;
 }




 FUNC_4(VAR_5->soft_iface,
       VAR_5->soft_iface->dev_addr, VAR_6,
       VAR_1, VAR_0);


 FUNC_2(VAR_7);

 return 0;
}
