
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_priority_tci_mapping {struct vlan_priority_tci_mapping* next; } ;
struct vlan_dev_priv {struct vlan_priority_tci_mapping** egress_priority_map; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct vlan_priority_tci_mapping**) ;
 int FUNC_1 (struct vlan_priority_tci_mapping*) ;
 struct vlan_dev_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct vlan_priority_tci_mapping *VAR_1;
 struct vlan_dev_priv *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->egress_priority_map); VAR_3++) {
  while ((VAR_1 = VAR_2->egress_priority_map[VAR_3]) != ((void*)0)) {
   VAR_2->egress_priority_map[VAR_3] = VAR_1->next;
   FUNC_1(VAR_1);
  }
 }
}
