
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int hw_enc_features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline netdev_features_t FUNC_0(struct net_device *VAR_4)
{
 netdev_features_t VAR_5;

 VAR_5 = VAR_4->hw_enc_features &
       (VAR_1 | VAR_0 | VAR_2);

 if ((VAR_5 & VAR_2) && (VAR_5 & VAR_1))
  return (VAR_5 & ~VAR_1) | VAR_3;
 return 0;
}
