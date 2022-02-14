
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {unsigned long group_fwd_mask; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct net_bridge *VAR_2, unsigned long VAR_3)
{
 if (VAR_3 & VAR_0)
  return -VAR_1;

 VAR_2->group_fwd_mask = VAR_3;

 return 0;
}
