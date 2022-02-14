
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct input_config {int identifier; } ;
struct TYPE_6__ {TYPE_2__* input_type_configs; TYPE_1__* input_configs; } ;
struct TYPE_5__ {int length; struct input_config** items; } ;
struct TYPE_4__ {int length; struct input_config** items; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct input_config*,struct input_config*,char**) ;

__attribute__((used)) static bool FUNC_3(struct input_config *VAR_2,
  char **VAR_3) {
 for (int VAR_4 = 0; VAR_4 < VAR_1->input_configs->length; VAR_4++) {
  struct input_config *VAR_5 = VAR_1->input_configs->items[VAR_4];
  if (FUNC_0(VAR_2->identifier, VAR_5->identifier) != 0) {
   FUNC_1(VAR_0, "Validating xkb merge of * on %s",
     VAR_5->identifier);
   if (!FUNC_2(VAR_5, VAR_2, VAR_3)) {
    return 0;
   }
  }
 }

 for (int VAR_6 = 0; VAR_6 < VAR_1->input_type_configs->length; VAR_6++) {
  struct input_config *VAR_7 = VAR_1->input_type_configs->items[VAR_6];
  FUNC_1(VAR_0, "Validating xkb merge of * config on %s",
    VAR_7->identifier);
  if (!FUNC_2(VAR_7, VAR_2, VAR_3)) {
   return 0;
  }
 }

 return 1;
}
