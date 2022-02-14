
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_container {struct sway_container* parent; scalar_t__ fullscreen_mode; } ;



bool FUNC_0(struct sway_container *VAR_0) {
 do {
  if (VAR_0->fullscreen_mode) {
   return 1;
  }
  VAR_0 = VAR_0->parent;
 } while (VAR_0);

 return 0;
}
