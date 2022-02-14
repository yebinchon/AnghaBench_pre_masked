
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int addr_len; int hw_features; int features; int flags; int type; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_6)
{
 VAR_6->netdev_ops = &VAR_5;

 VAR_6->type = VAR_0;
 VAR_6->flags = VAR_1;
 VAR_6->addr_len = 4;
 VAR_6->features |= VAR_3;
 FUNC_1(VAR_6);

 VAR_6->features |= VAR_2;
 VAR_6->hw_features |= VAR_2;
 FUNC_0(VAR_6, VAR_4);
}
