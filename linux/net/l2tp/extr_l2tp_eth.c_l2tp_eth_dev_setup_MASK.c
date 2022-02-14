
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int * netdev_ops; int features; int priv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_4)
{
 FUNC_0(VAR_4, &VAR_3);
 FUNC_1(VAR_4);
 VAR_4->priv_flags &= ~VAR_0;
 VAR_4->features |= VAR_1;
 VAR_4->netdev_ops = &VAR_2;
 VAR_4->needs_free_netdev = 1;
}
