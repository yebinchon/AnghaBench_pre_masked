
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch_tree {struct dsa_switch** ds; } ;
struct dsa_switch {int num_ports; struct dsa_port* ports; } ;
struct dsa_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_port*) ;
 int FUNC_1 (struct dsa_port*) ;
 int FUNC_2 (struct dsa_switch*) ;
 int FUNC_3 (struct dsa_switch*) ;

__attribute__((used)) static int FUNC_4(struct dsa_switch_tree *VAR_1)
{
 struct dsa_switch *VAR_2;
 struct dsa_port *VAR_3;
 int VAR_4, VAR_5, VAR_6;
 int VAR_7 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2 = VAR_1->ds[VAR_4];
  if (!VAR_2)
   continue;

  VAR_7 = FUNC_2(VAR_2);
  if (VAR_7)
   goto switch_teardown;

  for (VAR_5 = 0; VAR_5 < VAR_2->num_ports; VAR_5++) {
   VAR_3 = &VAR_2->ports[VAR_5];

   VAR_7 = FUNC_0(VAR_3);
   if (VAR_7)
    goto ports_teardown;
  }
 }

 return 0;

ports_teardown:
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_1(&VAR_2->ports[VAR_6]);

 FUNC_3(VAR_2);

switch_teardown:
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_2 = VAR_1->ds[VAR_6];
  if (!VAR_2)
   continue;

  for (VAR_5 = 0; VAR_5 < VAR_2->num_ports; VAR_5++) {
   VAR_3 = &VAR_2->ports[VAR_5];

   FUNC_1(VAR_3);
  }

  FUNC_3(VAR_2);
 }

 return VAR_7;
}
