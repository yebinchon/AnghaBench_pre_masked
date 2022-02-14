
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_workspace {struct sway_container* fullscreen; TYPE_1__* tiling; int layout; } ;
struct sway_container {int layout; } ;
struct TYPE_2__ {struct sway_container** items; scalar_t__ length; } ;


 int FUNC_0 (struct sway_container*,struct sway_container*) ;
 struct sway_container* FUNC_1 (int *) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (struct sway_workspace*,struct sway_container*) ;

struct sway_container *FUNC_4(struct sway_workspace *VAR_0) {
 struct sway_container *VAR_1 = VAR_0->fullscreen;
 struct sway_container *VAR_2 = FUNC_1(((void*)0));
 VAR_2->layout = VAR_0->layout;
 while (VAR_0->tiling->length) {
  struct sway_container *VAR_3 = VAR_0->tiling->items[0];
  FUNC_2(VAR_3);
  FUNC_0(VAR_2, VAR_3);
 }
 FUNC_3(VAR_0, VAR_2);
 VAR_0->fullscreen = VAR_1;
 return VAR_2;
}
