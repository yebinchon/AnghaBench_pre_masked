
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_tablet {struct sway_seat_device* seat_device; int link; } ;
struct sway_seat_device {struct sway_tablet* tablet; } ;
struct sway_seat {TYPE_1__* cursor; } ;
struct TYPE_2__ {int tablets; } ;


 struct sway_tablet* FUNC_0 (int,int) ;
 int FUNC_1 (struct sway_tablet*,char*) ;
 int FUNC_2 (int *,int *) ;

struct sway_tablet *FUNC_3(struct sway_seat *VAR_0,
  struct sway_seat_device *VAR_1) {
 struct sway_tablet *VAR_2 =
  FUNC_0(1, sizeof(struct sway_tablet));
 if (!FUNC_1(VAR_2, "could not allocate sway tablet for seat")) {
  return ((void*)0);
 }

 FUNC_2(&VAR_0->cursor->tablets, &VAR_2->link);

 VAR_1->tablet = VAR_2;
 VAR_2->seat_device = VAR_1;

 return VAR_2;
}
