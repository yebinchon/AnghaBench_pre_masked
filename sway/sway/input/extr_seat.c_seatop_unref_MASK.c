
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_seat {TYPE_1__* seatop_impl; } ;
struct sway_container {int dummy; } ;
struct TYPE_2__ {int (* unref ) (struct sway_seat*,struct sway_container*) ;} ;


 int FUNC_0 (struct sway_seat*,struct sway_container*) ;

void FUNC_1(struct sway_seat *VAR_0, struct sway_container *VAR_1) {
 if (VAR_0->seatop_impl->unref) {
  VAR_0->seatop_impl->unref(VAR_0, VAR_1);
 }
}
