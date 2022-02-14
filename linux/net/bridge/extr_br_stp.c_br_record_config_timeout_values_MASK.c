
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {int forward_delay; int hello_time; int max_age; } ;
struct br_config_bpdu {int topology_change; int forward_delay; int hello_time; int max_age; } ;


 int FUNC_0 (struct net_bridge*,int ) ;

__attribute__((used)) static void FUNC_1(struct net_bridge *VAR_0,
         const struct br_config_bpdu *VAR_1)
{
 VAR_0->max_age = VAR_1->max_age;
 VAR_0->hello_time = VAR_1->hello_time;
 VAR_0->forward_delay = VAR_1->forward_delay;
 FUNC_0(VAR_0, VAR_1->topology_change);
}
