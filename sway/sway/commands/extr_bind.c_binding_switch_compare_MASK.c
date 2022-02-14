
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_switch_binding {scalar_t__ type; scalar_t__ state; int flags; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct sway_switch_binding *VAR_1,
  struct sway_switch_binding *VAR_2) {
 if (VAR_1->type != VAR_2->type) {
  return 0;
 }
 if (VAR_1->state != VAR_2->state) {
  return 0;
 }
 if ((VAR_1->flags & VAR_0) !=
   (VAR_2->flags & VAR_0)) {
  return 0;
 }
 return 1;
}
