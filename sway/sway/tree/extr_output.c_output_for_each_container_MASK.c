
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_workspace {int dummy; } ;
struct sway_output {TYPE_1__* workspaces; } ;
struct TYPE_2__ {int length; struct sway_workspace** items; } ;


 int FUNC_0 (struct sway_workspace*,void (*) (struct sway_container*,void*),void*) ;

void FUNC_1(struct sway_output *VAR_0,
  void (*VAR_1)(struct sway_container *VAR_2, void *VAR_3), void *VAR_4) {
 for (int VAR_5 = 0; VAR_5 < VAR_0->workspaces->length; ++VAR_5) {
  struct sway_workspace *VAR_6 = VAR_0->workspaces->items[VAR_5];
  FUNC_0(VAR_6, VAR_1, VAR_4);
 }
}
