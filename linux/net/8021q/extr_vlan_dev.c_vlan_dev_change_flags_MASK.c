
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vlan_dev_priv {int flags; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct net_device const*) ;
 struct vlan_dev_priv* FUNC_1 (struct net_device const*) ;
 int FUNC_2 (struct net_device const*) ;
 int FUNC_3 (struct net_device const*) ;
 int FUNC_4 (struct net_device const*) ;
 int FUNC_5 (struct net_device const*) ;

int FUNC_6(const struct net_device *VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct vlan_dev_priv *VAR_9 = FUNC_1(VAR_6);
 u32 VAR_10 = VAR_9->flags;

 if (VAR_8 & ~(VAR_5 | VAR_2 |
       VAR_3 | VAR_4 |
       VAR_1))
  return -VAR_0;

 VAR_9->flags = (VAR_10 & ~VAR_8) | (VAR_7 & VAR_8);

 if (FUNC_0(VAR_6) && (VAR_9->flags ^ VAR_10) & VAR_2) {
  if (VAR_9->flags & VAR_2)
   FUNC_2(VAR_6);
  else
   FUNC_3(VAR_6);
 }

 if (FUNC_0(VAR_6) && (VAR_9->flags ^ VAR_10) & VAR_4) {
  if (VAR_9->flags & VAR_4)
   FUNC_4(VAR_6);
  else
   FUNC_5(VAR_6);
 }
 return 0;
}
