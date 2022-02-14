
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_workspace {int dummy; } ;
struct sway_output {TYPE_1__* workspaces; } ;
struct sway_container {int dummy; } ;
struct TYPE_2__ {int length; struct sway_workspace** items; } ;


 struct sway_container* FUNC_0 (struct sway_workspace*,int (*) (struct sway_container*,void*),void*) ;

struct sway_container *FUNC_1(struct sway_output *VAR_0,
  bool (*VAR_1)(struct sway_container *VAR_2, void *VAR_3), void *VAR_4) {
 struct sway_container *VAR_5 = ((void*)0);
 for (int VAR_6 = 0; VAR_6 < VAR_0->workspaces->length; ++VAR_6) {
  struct sway_workspace *VAR_7 = VAR_0->workspaces->items[VAR_6];
  if ((VAR_5 = FUNC_0(VAR_7, VAR_1, VAR_4))) {
   return VAR_5;
  }
 }
 return ((void*)0);
}
