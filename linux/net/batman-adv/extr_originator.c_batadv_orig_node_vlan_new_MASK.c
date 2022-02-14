
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_orig_node_vlan {unsigned short vid; int list; int refcount; } ;
struct batadv_orig_node {int vlan_list_lock; int vlan_list; } ;


 int VAR_0 ;
 struct batadv_orig_node_vlan* FUNC_0 (struct batadv_orig_node*,unsigned short) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct batadv_orig_node_vlan* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct batadv_orig_node_vlan *
FUNC_7(struct batadv_orig_node *VAR_1,
     unsigned short VAR_2)
{
 struct batadv_orig_node_vlan *VAR_3;

 FUNC_5(&VAR_1->vlan_list_lock);


 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_4(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  goto out;

 FUNC_3(&VAR_3->refcount);
 VAR_3->vid = VAR_2;

 FUNC_2(&VAR_3->refcount);
 FUNC_1(&VAR_3->list, &VAR_1->vlan_list);

out:
 FUNC_6(&VAR_1->vlan_list_lock);

 return VAR_3;
}
