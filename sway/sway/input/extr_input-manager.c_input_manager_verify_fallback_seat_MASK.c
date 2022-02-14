
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_seat {TYPE_1__* wlr_seat; } ;
struct seat_config {int fallback; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct seat_config*) ;
 struct sway_seat* FUNC_2 () ;
 struct seat_config* FUNC_3 (int ) ;
 struct seat_config* FUNC_4 (struct seat_config*) ;
 int FUNC_5 (int ,char*) ;

void FUNC_6(void) {
 struct sway_seat *VAR_1 = ((void*)0);
 if (!FUNC_0()) {
  FUNC_5(VAR_0, "no fallback seat config - creating default");
  VAR_1 = FUNC_2();
  struct seat_config *VAR_2 = FUNC_3(VAR_1->wlr_seat->name);
  VAR_2->fallback = 1;
  VAR_2 = FUNC_4(VAR_2);
  FUNC_1(VAR_2);
 }
}
