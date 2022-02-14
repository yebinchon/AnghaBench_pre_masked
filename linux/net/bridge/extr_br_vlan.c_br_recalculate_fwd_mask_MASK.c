
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {scalar_t__ vlan_proto; unsigned int group_fwd_mask_required; unsigned int* group_addr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_bridge*,int ) ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(struct net_bridge *VAR_4)
{
 if (!FUNC_0(VAR_4, VAR_0) ||
     VAR_4->vlan_proto == FUNC_1(VAR_3))
  VAR_4->group_fwd_mask_required = VAR_2;
 else
  VAR_4->group_fwd_mask_required = VAR_1 &
           ~(1u << VAR_4->group_addr[5]);
}
