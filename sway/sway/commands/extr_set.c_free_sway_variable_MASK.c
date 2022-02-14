
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_variable {struct sway_variable* value; struct sway_variable* name; } ;


 int FUNC_0 (struct sway_variable*) ;

void FUNC_1(struct sway_variable *VAR_0) {
 if (!VAR_0) {
  return;
 }
 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0->value);
 FUNC_0(VAR_0);
}
