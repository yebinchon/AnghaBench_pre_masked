
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_workspace {int dummy; } ;
struct sway_output {int dummy; } ;
struct TYPE_4__ {TYPE_1__* outputs; } ;
struct TYPE_3__ {int length; struct sway_output** items; } ;


 struct sway_workspace* FUNC_0 (struct sway_output*,int (*) (struct sway_workspace*,void*),void*) ;
 TYPE_2__* VAR_0 ;

struct sway_workspace *FUNC_1(
  bool (*VAR_1)(struct sway_workspace *VAR_2, void *VAR_3), void *VAR_4) {
 struct sway_workspace *VAR_5 = ((void*)0);
 for (int VAR_6 = 0; VAR_6 < VAR_0->outputs->length; ++VAR_6) {
  struct sway_output *VAR_7 = VAR_0->outputs->items[VAR_6];
  if ((VAR_5 = FUNC_0(VAR_7, VAR_1, VAR_4))) {
   return VAR_5;
  }
 }
 return ((void*)0);
}
