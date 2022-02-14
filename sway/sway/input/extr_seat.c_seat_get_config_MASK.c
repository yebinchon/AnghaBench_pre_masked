
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_seat {TYPE_2__* wlr_seat; } ;
struct seat_config {int name; } ;
struct TYPE_6__ {TYPE_1__* seat_configs; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int length; struct seat_config** items; } ;


 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

struct seat_config *FUNC_1(struct sway_seat *VAR_1) {
 struct seat_config *VAR_2 = ((void*)0);
 for (int VAR_3 = 0; VAR_3 < VAR_0->seat_configs->length; ++VAR_3 ) {
  VAR_2 = VAR_0->seat_configs->items[VAR_3];
  if (FUNC_0(VAR_1->wlr_seat->name, VAR_2->name) == 0) {
   return VAR_2;
  }
 }

 return ((void*)0);
}
