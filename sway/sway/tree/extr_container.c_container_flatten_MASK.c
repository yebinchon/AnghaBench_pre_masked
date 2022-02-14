
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {struct sway_container* parent; TYPE_1__* children; scalar_t__ view; } ;
struct TYPE_2__ {int length; struct sway_container** items; } ;


 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*,struct sway_container*) ;

struct sway_container *FUNC_2(struct sway_container *VAR_0) {
 if (VAR_0->view) {
  return ((void*)0);
 }
 while (VAR_0 && VAR_0->children->length == 1) {
  struct sway_container *VAR_1 = VAR_0->children->items[0];
  struct sway_container *VAR_2 = VAR_0->parent;
  FUNC_1(VAR_0, VAR_1);
  FUNC_0(VAR_0);
  VAR_0 = VAR_2;
 }
 return VAR_0;
}
