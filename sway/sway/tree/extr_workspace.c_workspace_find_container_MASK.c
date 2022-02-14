
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_workspace {TYPE_1__* floating; TYPE_2__* tiling; } ;
struct sway_container {int dummy; } ;
struct TYPE_4__ {int length; struct sway_container** items; } ;
struct TYPE_3__ {int length; struct sway_container** items; } ;


 struct sway_container* FUNC_0 (struct sway_container*,int (*) (struct sway_container*,void*),void*) ;

struct sway_container *FUNC_1(struct sway_workspace *VAR_0,
  bool (*VAR_1)(struct sway_container *VAR_2, void *VAR_3), void *VAR_4) {
 struct sway_container *VAR_5 = ((void*)0);

 for (int VAR_6 = 0; VAR_6 < VAR_0->tiling->length; ++VAR_6) {
  struct sway_container *VAR_7 = VAR_0->tiling->items[VAR_6];
  if (VAR_1(VAR_7, VAR_4)) {
   return VAR_7;
  }
  if ((VAR_5 = FUNC_0(VAR_7, VAR_1, VAR_4))) {
   return VAR_5;
  }
 }

 for (int VAR_8 = 0; VAR_8 < VAR_0->floating->length; ++VAR_8) {
  struct sway_container *VAR_9 = VAR_0->floating->items[VAR_8];
  if (VAR_1(VAR_9, VAR_4)) {
   return VAR_9;
  }
  if ((VAR_5 = FUNC_0(VAR_9, VAR_1, VAR_4))) {
   return VAR_5;
  }
 }
 return ((void*)0);
}
