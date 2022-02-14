
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct sway_workspace sway_workspace ;
struct sway_output {TYPE_1__* workspaces; } ;
struct TYPE_2__ {int length; struct sway_workspace** items; } ;



void FUNC_0(struct sway_output *VAR_0,
  void (*VAR_1)(struct sway_workspace *VAR_2, void *VAR_3), void *VAR_4) {
 for (int VAR_5 = 0; VAR_5 < VAR_0->workspaces->length; ++VAR_5) {
  struct sway_workspace *VAR_6 = VAR_0->workspaces->items[VAR_5];
  VAR_1(VAR_6, VAR_4);
 }
}
