
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sway_seat {TYPE_1__* seatop_impl; } ;
struct TYPE_2__ {int (* rebase ) (struct sway_seat*,int ) ;} ;


 int FUNC_0 (struct sway_seat*,int ) ;

void FUNC_1(struct sway_seat *VAR_0, uint32_t VAR_1) {
 if (VAR_0->seatop_impl->rebase) {
  VAR_0->seatop_impl->rebase(VAR_0, VAR_1);
 }
}
