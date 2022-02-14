
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch_tree {struct dsa_switch** ds; } ;
struct dsa_switch {int num_ports; struct dsa_port* ports; } ;
struct dsa_port {struct device_node* dn; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static struct dsa_port *FUNC_0(struct dsa_switch_tree *VAR_1,
         struct device_node *VAR_2)
{
 struct dsa_switch *VAR_3;
 struct dsa_port *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3 = VAR_1->ds[VAR_5];
  if (!VAR_3)
   continue;

  for (VAR_6 = 0; VAR_6 < VAR_3->num_ports; VAR_6++) {
   VAR_4 = &VAR_3->ports[VAR_6];

   if (VAR_4->dn == VAR_2)
    return VAR_4;
  }
 }

 return ((void*)0);
}
