
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_input_device {char const* identifier; } ;
struct input_config {char const* identifier; char const* input_type; } ;
struct TYPE_6__ {TYPE_2__* input_configs; TYPE_1__* input_type_configs; } ;
struct TYPE_5__ {int length; struct input_config** items; } ;
struct TYPE_4__ {int length; struct input_config** items; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (struct input_config*) ;
 char* FUNC_1 (struct sway_input_device*) ;
 int FUNC_2 (struct input_config*,struct input_config*) ;
 struct input_config* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;

__attribute__((used)) static void FUNC_5(struct sway_input_device *VAR_1) {
 const char *VAR_2 = FUNC_1(VAR_1);
 struct input_config *VAR_3 = ((void*)0);
 for (int VAR_4 = 0; VAR_4 < VAR_0->input_type_configs->length; VAR_4++) {
  struct input_config *VAR_5 = VAR_0->input_type_configs->items[VAR_4];
  if (FUNC_4(VAR_5->identifier + 5, VAR_2) == 0) {
   VAR_3 = VAR_5;
   break;
  }
 }
 if (VAR_3 == ((void*)0)) {
  return;
 }

 for (int VAR_6 = 0; VAR_6 < VAR_0->input_configs->length; VAR_6++) {
  struct input_config *VAR_7 = VAR_0->input_configs->items[VAR_6];
  if (FUNC_4(VAR_1->identifier, VAR_7->identifier) == 0) {
   struct input_config *VAR_8 = FUNC_3(VAR_7->identifier);
   FUNC_2(VAR_8, VAR_3);
   FUNC_2(VAR_8, VAR_7);

   VAR_8->input_type = VAR_2;
   VAR_0->input_configs->items[VAR_6] = VAR_8;
   FUNC_0(VAR_7);
   VAR_7 = ((void*)0);

   break;
  }
 }
}
