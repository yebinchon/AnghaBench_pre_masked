
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct input_config {int identifier; } ;
struct TYPE_6__ {TYPE_1__* input_type_configs; TYPE_2__* input_configs; } ;
struct TYPE_5__ {int length; struct input_config** items; } ;
struct TYPE_4__ {int length; struct input_config** items; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (struct input_config*,struct input_config*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct input_config *VAR_2) {
 for (int VAR_3 = 0; VAR_3 < VAR_1->input_configs->length; VAR_3++) {
  struct input_config *VAR_4 = VAR_1->input_configs->items[VAR_3];
  if (FUNC_1(VAR_2->identifier, VAR_4->identifier) != 0) {
   FUNC_2(VAR_0, "Merging input * config on %s", VAR_4->identifier);
   FUNC_0(VAR_4, VAR_2);
  }
 }

 for (int VAR_5 = 0; VAR_5 < VAR_1->input_type_configs->length; VAR_5++) {
  struct input_config *VAR_6 = VAR_1->input_type_configs->items[VAR_5];
  FUNC_2(VAR_0, "Merging input * config on %s", VAR_6->identifier);
  FUNC_0(VAR_6, VAR_2);
 }
}
