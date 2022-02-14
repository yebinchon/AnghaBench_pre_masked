
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_output {int dummy; } ;
struct sway_container {TYPE_1__* outputs; } ;
struct TYPE_2__ {int length; struct sway_output** items; } ;



struct sway_output *FUNC_0(struct sway_container *VAR_0) {
 if (VAR_0->outputs->length == 0) {
  return ((void*)0);
 }
 return VAR_0->outputs->items[VAR_0->outputs->length - 1];
}
