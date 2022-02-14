
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_output {int dummy; } ;
struct sway_container {scalar_t__ view; } ;
struct parent_data {int layout; TYPE_1__* children; } ;
typedef int pixman_region32_t ;
struct TYPE_4__ {scalar_t__ hide_lone_tab; } ;
struct TYPE_3__ {int length; struct sway_container** items; } ;







 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct sway_output*,int *,struct parent_data*) ;
 int FUNC_1 (struct sway_output*,int *,struct parent_data*) ;
 int FUNC_2 (struct sway_output*,int *,struct parent_data*) ;

__attribute__((used)) static void FUNC_3(struct sway_output *VAR_1,
  pixman_region32_t *VAR_2, struct parent_data *VAR_3) {
 if (VAR_0->hide_lone_tab && VAR_3->children->length == 1) {
  struct sway_container *VAR_4 = VAR_3->children->items[0];
  if (VAR_4->view) {
   FUNC_0(VAR_1,VAR_2, VAR_3);
   return;
  }
 }

 switch (VAR_3->layout) {
 case 131:
 case 132:
 case 128:
  FUNC_0(VAR_1, VAR_2, VAR_3);
  break;
 case 130:
  FUNC_1(VAR_1, VAR_2, VAR_3);
  break;
 case 129:
  FUNC_2(VAR_1, VAR_2, VAR_3);
  break;
 }
}
