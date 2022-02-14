
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seat_config {int name; } ;
struct TYPE_4__ {TYPE_1__* seat_configs; } ;
struct TYPE_3__ {int length; struct seat_config** items; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct seat_config*,struct seat_config*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct seat_config *VAR_2) {
 for (int VAR_3 = 0; VAR_3 < VAR_1->seat_configs->length; VAR_3++) {
  struct seat_config *VAR_4 = VAR_1->seat_configs->items[VAR_3];
  if (FUNC_1(VAR_2->name, VAR_4->name) != 0) {
   FUNC_2(VAR_0, "Merging seat * config on %s", VAR_4->name);
   FUNC_0(VAR_4, VAR_2);
  }
 }
}
