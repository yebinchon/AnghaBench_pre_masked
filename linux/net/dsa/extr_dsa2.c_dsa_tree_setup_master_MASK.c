
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dsa_switch_tree {struct dsa_port* cpu_dp; } ;
struct dsa_port {struct net_device* master; } ;


 int FUNC_0 (struct net_device*,struct dsa_port*) ;

__attribute__((used)) static int FUNC_1(struct dsa_switch_tree *VAR_0)
{
 struct dsa_port *VAR_1 = VAR_0->cpu_dp;
 struct net_device *VAR_2 = VAR_1->master;


 return FUNC_0(VAR_2, VAR_1);
}
