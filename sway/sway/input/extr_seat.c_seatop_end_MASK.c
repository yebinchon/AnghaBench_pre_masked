
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_seat {TYPE_1__* seatop_impl; int * seatop_data; } ;
struct TYPE_2__ {int (* end ) (struct sway_seat*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sway_seat*) ;

void FUNC_2(struct sway_seat *VAR_0) {
 if (VAR_0->seatop_impl && VAR_0->seatop_impl->end) {
  VAR_0->seatop_impl->end(VAR_0);
 }
 FUNC_0(VAR_0->seatop_data);
 VAR_0->seatop_data = ((void*)0);
 VAR_0->seatop_impl = ((void*)0);
}
