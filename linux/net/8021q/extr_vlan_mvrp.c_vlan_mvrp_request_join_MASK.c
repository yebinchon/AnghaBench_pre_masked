
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlan_id ;
struct vlan_dev_priv {int real_dev; int vlan_proto; int vlan_id; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int,int ) ;
 struct vlan_dev_priv* FUNC_2 (struct net_device const*) ;
 int VAR_2 ;

int FUNC_3(const struct net_device *VAR_3)
{
 const struct vlan_dev_priv *VAR_4 = FUNC_2(VAR_3);
 __be16 VAR_5 = FUNC_0(VAR_4->vlan_id);

 if (VAR_4->vlan_proto != FUNC_0(VAR_0))
  return 0;
 return FUNC_1(VAR_4->real_dev, &VAR_2,
    &VAR_5, sizeof(VAR_5), VAR_1);
}
