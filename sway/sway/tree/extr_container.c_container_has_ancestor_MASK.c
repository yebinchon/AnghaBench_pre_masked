
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_container {struct sway_container* parent; } ;



bool FUNC_0(struct sway_container *VAR_0,
  struct sway_container *VAR_1) {
 while (VAR_0) {
  VAR_0 = VAR_0->parent;
  if (VAR_0 == VAR_1) {
   return 1;
  }
 }
 return 0;
}
