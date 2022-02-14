
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int features; int hw_features; int wanted_features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_14, u32 VAR_15)
{
 netdev_features_t VAR_16 = 0, VAR_17;

 if (VAR_15 & ~VAR_3)
  return -VAR_0;

 if (VAR_15 & VAR_4)
  VAR_16 |= VAR_11;
 if (VAR_15 & VAR_7)
  VAR_16 |= VAR_9;
 if (VAR_15 & VAR_8)
  VAR_16 |= VAR_10;
 if (VAR_15 & VAR_5)
  VAR_16 |= VAR_12;
 if (VAR_15 & VAR_6)
  VAR_16 |= VAR_13;


 VAR_17 = (VAR_16 ^ VAR_14->features) & VAR_2;
 if (VAR_17 & ~VAR_14->hw_features)
  return (VAR_17 & VAR_14->hw_features) ? -VAR_0 : -VAR_1;

 VAR_14->wanted_features =
  (VAR_14->wanted_features & ~VAR_17) | (VAR_16 & VAR_17);

 FUNC_0(VAR_14);

 return 0;
}
