
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int addr_len; int perm_addr; int addr_assign_type; int flags; int type; int priv_destructor; int * netdev_ops; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_5)
{
 VAR_5->netdev_ops = &VAR_4;
 VAR_5->needs_free_netdev = 1;
 VAR_5->priv_destructor = VAR_3;

 VAR_5->type = VAR_0;

 VAR_5->flags |= VAR_1;
 VAR_5->addr_len = sizeof(struct in6_addr);
 FUNC_1(VAR_5);

 VAR_5->addr_assign_type = VAR_2;
 FUNC_0(VAR_5->perm_addr);
}
