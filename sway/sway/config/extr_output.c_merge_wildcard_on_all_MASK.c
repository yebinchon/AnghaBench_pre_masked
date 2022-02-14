
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct output_config {int name; } ;
struct TYPE_4__ {TYPE_1__* output_configs; } ;
struct TYPE_3__ {int length; struct output_config** items; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct output_config*,struct output_config*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct output_config *VAR_2) {
 for (int VAR_3 = 0; VAR_3 < VAR_1->output_configs->length; VAR_3++) {
  struct output_config *VAR_4 = VAR_1->output_configs->items[VAR_3];
  if (FUNC_1(VAR_2->name, VAR_4->name) != 0) {
   FUNC_2(VAR_0, "Merging output * config on %s", VAR_4->name);
   FUNC_0(VAR_4, VAR_2);
  }
 }
}
