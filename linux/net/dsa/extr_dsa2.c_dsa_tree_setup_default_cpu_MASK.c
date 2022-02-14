
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch_tree {scalar_t__ cpu_dp; struct dsa_switch** ds; } ;
struct dsa_switch {int num_ports; struct dsa_port* ports; } ;
struct dsa_port {scalar_t__ cpu_dp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dsa_port*) ;
 scalar_t__ FUNC_1 (struct dsa_port*) ;
 scalar_t__ FUNC_2 (struct dsa_switch_tree*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct dsa_switch_tree *VAR_2)
{
 struct dsa_switch *VAR_3;
 struct dsa_port *VAR_4;
 int VAR_5, VAR_6;


 VAR_2->cpu_dp = FUNC_2(VAR_2);
 if (!VAR_2->cpu_dp) {
  FUNC_3("Tree has no master device\n");
  return -VAR_1;
 }


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3 = VAR_2->ds[VAR_5];
  if (!VAR_3)
   continue;

  for (VAR_6 = 0; VAR_6 < VAR_3->num_ports; VAR_6++) {
   VAR_4 = &VAR_3->ports[VAR_6];

   if (FUNC_1(VAR_4) || FUNC_0(VAR_4))
    VAR_4->cpu_dp = VAR_2->cpu_dp;
  }
 }

 return 0;
}
