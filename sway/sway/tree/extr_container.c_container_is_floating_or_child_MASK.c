
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_container {struct sway_container* parent; } ;


 int FUNC_0 (struct sway_container*) ;

bool FUNC_1(struct sway_container *VAR_0) {
 while (VAR_0->parent) {
  VAR_0 = VAR_0->parent;
 }
 return FUNC_0(VAR_0);
}
