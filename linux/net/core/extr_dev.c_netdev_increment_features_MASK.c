
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

netdev_features_t FUNC_0(netdev_features_t VAR_5,
 netdev_features_t VAR_6, netdev_features_t VAR_7)
{
 if (VAR_7 & VAR_2)
  VAR_7 |= VAR_1;
 VAR_7 |= VAR_4;

 VAR_5 |= VAR_6 & (VAR_3 | VAR_1) & VAR_7;
 VAR_5 &= VAR_6 | ~VAR_0;


 if (VAR_5 & VAR_2)
  VAR_5 &= ~(VAR_1 & ~VAR_2);

 return VAR_5;
}
