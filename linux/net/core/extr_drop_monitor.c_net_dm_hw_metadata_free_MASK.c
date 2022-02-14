
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_dm_hw_metadata {struct net_dm_hw_metadata const* trap_group_name; struct net_dm_hw_metadata const* trap_name; scalar_t__ input_dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_dm_hw_metadata const*) ;

__attribute__((used)) static void
FUNC_2(const struct net_dm_hw_metadata *VAR_0)
{
 if (VAR_0->input_dev)
  FUNC_0(VAR_0->input_dev);
 FUNC_1(VAR_0->trap_name);
 FUNC_1(VAR_0->trap_group_name);
 FUNC_1(VAR_0);
}
