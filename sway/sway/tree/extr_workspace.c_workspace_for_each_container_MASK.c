
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_workspace {TYPE_1__* floating; TYPE_2__* tiling; } ;
typedef struct sway_container sway_container ;
struct TYPE_4__ {int length; struct sway_container** items; } ;
struct TYPE_3__ {int length; struct sway_container** items; } ;


 int FUNC_0 (struct sway_container*,void (*) (struct sway_container*,void*),void*) ;

void FUNC_1(struct sway_workspace *VAR_0,
  void (*VAR_1)(struct sway_container *VAR_2, void *VAR_3), void *VAR_4) {

 for (int VAR_5 = 0; VAR_5 < VAR_0->tiling->length; ++VAR_5) {
  struct sway_container *VAR_6 = VAR_0->tiling->items[VAR_5];
  VAR_1(VAR_6, VAR_4);
  FUNC_0(VAR_6, VAR_1, VAR_4);
 }

 for (int VAR_7 = 0; VAR_7 < VAR_0->floating->length; ++VAR_7) {
  struct sway_container *VAR_8 = VAR_0->floating->items[VAR_7];
  VAR_1(VAR_8, VAR_4);
  FUNC_0(VAR_8, VAR_1, VAR_4);
 }
}
