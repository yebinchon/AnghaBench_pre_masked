
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct vlan_dev_priv {int * ingress_priority_map; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct vlan_dev_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline u32 FUNC_1(struct net_device *VAR_1,
         u16 VAR_2)
{
 struct vlan_dev_priv *VAR_3 = FUNC_0(VAR_1);

 return VAR_3->ingress_priority_map[(VAR_2 >> VAR_0) & 0x7];
}
