
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct dsa_port* dsa_ptr; } ;
struct dsa_switch_tree {struct dsa_switch** ds; } ;
struct dsa_switch {int num_ports; struct dsa_port* ports; } ;
struct dsa_port {scalar_t__ type; struct net_device* slave; struct dsa_switch_tree* dst; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline struct net_device *FUNC_1(struct net_device *VAR_2,
             int VAR_3, int VAR_4)
{
 struct dsa_port *VAR_5 = VAR_2->dsa_ptr;
 struct dsa_switch_tree *VAR_6 = VAR_5->dst;
 struct dsa_switch *VAR_7;
 struct dsa_port *VAR_8;

 if (VAR_3 < 0 || VAR_3 >= VAR_0)
  return ((void*)0);

 VAR_7 = VAR_6->ds[VAR_3];
 if (!VAR_7)
  return ((void*)0);

 if (VAR_4 < 0 || VAR_4 >= VAR_7->num_ports)
  return ((void*)0);

 VAR_8 = &VAR_7->ports[VAR_4];

 if (FUNC_0(VAR_8->type != VAR_1))
  return ((void*)0);

 return VAR_8->slave;
}
