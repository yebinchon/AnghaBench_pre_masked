
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int is_tiny; int zoom; int need_update_dim; int need_set_layout; TYPE_1__* can; int mode; } ;
struct TYPE_4__ {int sy; } ;
typedef TYPE_2__ RAGraph ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(RAGraph *VAR_3, int VAR_4) {
 if (VAR_4 >= -10) {
  VAR_3->is_tiny = 0;
  if (VAR_4 == 0) {
   VAR_3->mode = VAR_0;
  } else if (VAR_4 < 0) {
   VAR_3->mode = VAR_2;
   VAR_3->is_tiny = 1;
  } else {
   VAR_3->mode = VAR_1;
  }
  const int VAR_5 = 920;
  if (VAR_3->zoom < VAR_4) {
   VAR_3->can->sy = (VAR_3->can->sy * VAR_5) / 1000;
  }
  else {
   VAR_3->can->sy = (VAR_3->can->sy * 1000) / VAR_5;
  }
  VAR_3->zoom = VAR_4;
  VAR_3->need_update_dim = 1;
  VAR_3->need_set_layout = 1;
 }
}
