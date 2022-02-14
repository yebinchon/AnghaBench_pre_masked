
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sway_seat {TYPE_1__* seatop_impl; } ;
struct TYPE_2__ {int (* motion ) (struct sway_seat*,int ,double,double) ;} ;


 int FUNC_0 (struct sway_seat*,int ,double,double) ;

void FUNC_1(struct sway_seat *VAR_0, uint32_t VAR_1,
  double VAR_2, double VAR_3) {
 if (VAR_0->seatop_impl->motion) {
  VAR_0->seatop_impl->motion(VAR_0, VAR_1, VAR_2, VAR_3);
 }
}
