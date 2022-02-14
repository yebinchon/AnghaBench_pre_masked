
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {int num_ports; struct dsa_port* ports; int * rtable; } ;
struct dsa_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dsa_port*) ;
 int FUNC_1 (struct dsa_port*) ;

__attribute__((used)) static bool FUNC_2(struct dsa_switch *VAR_2)
{
 bool VAR_3 = 1;
 struct dsa_port *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_2->rtable[VAR_5] = VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_ports; VAR_5++) {
  VAR_4 = &VAR_2->ports[VAR_5];

  if (FUNC_0(VAR_4)) {
   VAR_3 = FUNC_1(VAR_4);
   if (!VAR_3)
    break;
  }
 }

 return VAR_3;
}
