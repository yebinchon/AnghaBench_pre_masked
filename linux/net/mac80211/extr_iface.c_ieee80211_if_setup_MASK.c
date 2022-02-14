
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int priv_destructor; int * netdev_ops; int priv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3)
{
 FUNC_0(VAR_3);
 VAR_3->priv_flags &= ~VAR_0;
 VAR_3->netdev_ops = &VAR_1;
 VAR_3->needs_free_netdev = 1;
 VAR_3->priv_destructor = VAR_2;
}
