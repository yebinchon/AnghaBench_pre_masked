
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int addr_len; int perm_addr; int addr_assign_type; int hw_features; int features; int flags; int type; int priv_destructor; int * netdev_ops; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_7)
{
 VAR_7->netdev_ops = &VAR_6;
 VAR_7->needs_free_netdev = 1;
 VAR_7->priv_destructor = VAR_5;

 VAR_7->type = VAR_0;
 VAR_7->flags |= VAR_1;
 VAR_7->addr_len = sizeof(struct in6_addr);
 VAR_7->features |= VAR_3;
 FUNC_1(VAR_7);

 VAR_7->features |= VAR_2;
 VAR_7->hw_features |= VAR_2;


 VAR_7->addr_assign_type = VAR_4;
 FUNC_0(VAR_7->perm_addr);
}
