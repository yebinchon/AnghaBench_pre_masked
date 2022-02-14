
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_seat {TYPE_1__* seatop_impl; } ;
struct sway_output {int dummy; } ;
typedef int pixman_region32_t ;
struct TYPE_2__ {int (* render ) (struct sway_seat*,struct sway_output*,int *) ;} ;


 int FUNC_0 (struct sway_seat*,struct sway_output*,int *) ;

void FUNC_1(struct sway_seat *VAR_0, struct sway_output *VAR_1,
  pixman_region32_t *VAR_2) {
 if (VAR_0->seatop_impl->render) {
  VAR_0->seatop_impl->render(VAR_0, VAR_1, VAR_2);
 }
}
