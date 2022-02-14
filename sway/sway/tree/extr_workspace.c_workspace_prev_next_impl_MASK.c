
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_workspace {TYPE_2__* workspaces; struct sway_workspace* output; } ;
struct sway_output {TYPE_2__* workspaces; struct sway_output* output; } ;
struct TYPE_4__ {int length; struct sway_workspace** items; } ;
struct TYPE_3__ {TYPE_2__* outputs; } ;


 int FUNC_0 (TYPE_2__*,struct sway_workspace*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static struct sway_workspace *FUNC_2(
  struct sway_workspace *VAR_1, int VAR_2) {
 struct sway_output *VAR_3 = VAR_1->output;
 int VAR_4 = FUNC_0(VAR_3->workspaces, VAR_1);
 int VAR_5 = VAR_4 + VAR_2;

 if (VAR_5 >= 0 && VAR_5 < VAR_3->workspaces->length) {
  return VAR_3->workspaces->items[VAR_5];
 }


 int VAR_6 = FUNC_0(VAR_0->outputs, VAR_3);
 VAR_5 = FUNC_1(VAR_6 + VAR_2, VAR_0->outputs->length);
 VAR_3 = VAR_0->outputs->items[VAR_5];

 if (VAR_2 == 1) {
  return VAR_3->workspaces->items[0];
 } else {
  return VAR_3->workspaces->items[VAR_3->workspaces->length - 1];
 }
}
