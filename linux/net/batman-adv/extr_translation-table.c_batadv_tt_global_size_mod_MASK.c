
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_entries; } ;
struct batadv_orig_node_vlan {int list; TYPE_1__ tt; } ;
struct batadv_orig_node {int vlan_list_lock; } ;


 scalar_t__ FUNC_0 (int,int *) ;
 struct batadv_orig_node_vlan* FUNC_1 (struct batadv_orig_node*,unsigned short) ;
 int FUNC_2 (struct batadv_orig_node_vlan*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct batadv_orig_node *VAR_0,
          unsigned short VAR_1, int VAR_2)
{
 struct batadv_orig_node_vlan *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_3)
  return;

 if (FUNC_0(VAR_2, &VAR_3->tt.num_entries) == 0) {
  FUNC_5(&VAR_0->vlan_list_lock);
  if (!FUNC_4(&VAR_3->list)) {
   FUNC_3(&VAR_3->list);
   FUNC_2(VAR_3);
  }
  FUNC_6(&VAR_0->vlan_list_lock);
 }

 FUNC_2(VAR_3);
}
