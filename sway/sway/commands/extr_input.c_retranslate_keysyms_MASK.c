
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_config {scalar_t__ identifier; scalar_t__ xkb_file; scalar_t__ xkb_layout; } ;
struct TYPE_4__ {TYPE_1__* input_configs; } ;
struct TYPE_3__ {int length; struct input_config** items; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct input_config*) ;

__attribute__((used)) static void FUNC_1(struct input_config *VAR_1) {
 for (int VAR_2 = 0; VAR_2 < VAR_0->input_configs->length; ++VAR_2) {
  struct input_config *VAR_3 = VAR_0->input_configs->items[VAR_2];
  if (VAR_3->xkb_layout || VAR_3->xkb_file) {

   if (VAR_3->identifier == VAR_1->identifier) {
    FUNC_0(VAR_3);
   }

   return;
  }
 }
}
