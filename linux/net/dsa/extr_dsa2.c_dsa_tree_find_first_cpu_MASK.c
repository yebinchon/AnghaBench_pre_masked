
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch_tree {struct dsa_switch** ds; } ;
struct dsa_switch {int num_ports; struct dsa_port* ports; } ;
struct dsa_port {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dsa_port*) ;

__attribute__((used)) static struct dsa_port *FUNC_1(struct dsa_switch_tree *VAR_1)
{
 struct dsa_switch *VAR_2;
 struct dsa_port *VAR_3;
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2 = VAR_1->ds[VAR_4];
  if (!VAR_2)
   continue;

  for (VAR_5 = 0; VAR_5 < VAR_2->num_ports; VAR_5++) {
   VAR_3 = &VAR_2->ports[VAR_5];

   if (FUNC_0(VAR_3))
    return VAR_3;
  }
 }

 return ((void*)0);
}
