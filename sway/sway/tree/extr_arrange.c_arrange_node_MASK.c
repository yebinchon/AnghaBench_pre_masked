
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_node {int type; int sway_container; int sway_workspace; int sway_output; } ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

void FUNC_4(struct sway_node *VAR_0) {
 switch (VAR_0->type) {
 case 129:
  FUNC_2();
  break;
 case 130:
  FUNC_1(VAR_0->sway_output);
  break;
 case 128:
  FUNC_3(VAR_0->sway_workspace);
  break;
 case 131:
  FUNC_0(VAR_0->sway_container);
  break;
 }
}
