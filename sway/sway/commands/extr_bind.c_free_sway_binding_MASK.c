
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_binding {struct sway_binding* command; struct sway_binding* input; int syms; int keys; } ;


 int FUNC_0 (struct sway_binding*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct sway_binding *VAR_0) {
 if (!VAR_0) {
  return;
 }

 FUNC_1(VAR_0->keys);
 FUNC_1(VAR_0->syms);
 FUNC_0(VAR_0->input);
 FUNC_0(VAR_0->command);
 FUNC_0(VAR_0);
}
