
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_output {int dummy; } ;
struct TYPE_4__ {TYPE_1__* outputs; } ;
struct TYPE_3__ {int length; struct sway_output** items; } ;


 TYPE_2__* VAR_0 ;

struct sway_output *FUNC_0(
  bool (*VAR_1)(struct sway_output *VAR_2, void *VAR_3), void *VAR_4) {
 for (int VAR_5 = 0; VAR_5 < VAR_0->outputs->length; ++VAR_5) {
  struct sway_output *VAR_6 = VAR_0->outputs->items[VAR_5];
  if (VAR_1(VAR_6, VAR_4)) {
   return VAR_6;
  }
 }
 return ((void*)0);
}
