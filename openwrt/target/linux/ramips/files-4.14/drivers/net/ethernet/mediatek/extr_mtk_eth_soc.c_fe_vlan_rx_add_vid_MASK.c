
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int features; int wanted_features; } ;
struct fe_priv {int vlan_map; } ;
typedef int __be16 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (int,scalar_t__) ;
 struct fe_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (int,int *) ;
 scalar_t__ FUNC_6 (int,int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3,
         __be16 VAR_4, u16 VAR_5)
{
 struct fe_priv *VAR_6 = FUNC_2(VAR_3);
 u32 VAR_7 = (VAR_5 & 0xf);
 u32 VAR_8;

 if (!((VAR_2[VAR_0]) &&
       (VAR_3->features & VAR_1)))
  return 0;

 if (FUNC_6(VAR_7, &VAR_6->vlan_map)) {
  FUNC_4(VAR_3, "disable tx vlan offload\n");
  VAR_3->wanted_features &= ~VAR_1;
  FUNC_3(VAR_3);
 } else {
  VAR_8 = FUNC_0(VAR_2[VAR_0] +
    ((VAR_7 >> 1) << 2));
  if (VAR_7 & 0x1) {
   VAR_8 &= 0xffff;
   VAR_8 |= (VAR_5 << 16);
  } else {
   VAR_8 &= 0xffff0000;
   VAR_8 |= VAR_5;
  }
  FUNC_1(VAR_8, VAR_2[VAR_0] +
    ((VAR_7 >> 1) << 2));
  FUNC_5(VAR_7, &VAR_6->vlan_map);
 }

 return 0;
}
