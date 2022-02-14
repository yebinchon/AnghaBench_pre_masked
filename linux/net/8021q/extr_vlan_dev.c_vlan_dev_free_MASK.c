
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_dev_priv {int * vlan_pcpu_stats; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct vlan_dev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct vlan_dev_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->vlan_pcpu_stats);
 VAR_1->vlan_pcpu_stats = ((void*)0);
}
