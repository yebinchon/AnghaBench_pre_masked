
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {scalar_t__ vlan_proto; int* group_addr; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_bridge*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_bridge *VAR_3)
{
 if (FUNC_0(VAR_3, VAR_0))
  return;

 FUNC_2(&VAR_3->lock);
 if (!FUNC_0(VAR_3, VAR_1) ||
     VAR_3->vlan_proto == FUNC_1(VAR_2)) {

  VAR_3->group_addr[5] = 0x00;
 } else {

  VAR_3->group_addr[5] = 0x08;
 }
 FUNC_3(&VAR_3->lock);
}
