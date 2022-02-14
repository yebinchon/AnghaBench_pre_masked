
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int vlan_features; int features; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {struct net_device* real_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_2(struct net_device *VAR_7,
 netdev_features_t VAR_8)
{
 struct net_device *VAR_9 = FUNC_1(VAR_7)->real_dev;
 netdev_features_t VAR_10 = VAR_8;
 netdev_features_t VAR_11;

 VAR_11 = FUNC_0((VAR_9->vlan_features |
          VAR_5),
         VAR_9->features);




 if (VAR_11 & (VAR_3|VAR_2))
  VAR_11 |= VAR_1;
 VAR_8 = FUNC_0(VAR_8, VAR_11);
 VAR_8 |= VAR_10 & (VAR_6 | VAR_0);
 VAR_8 |= VAR_4;

 return VAR_8;
}
