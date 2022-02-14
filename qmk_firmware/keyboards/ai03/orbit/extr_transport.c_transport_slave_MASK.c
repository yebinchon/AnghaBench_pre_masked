
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int matrix_row_t ;
struct TYPE_4__ {scalar_t__ current_layer; scalar_t__ nlock_led; scalar_t__ clock_led; scalar_t__ slock_led; int backlight_level; } ;
struct TYPE_3__ {int * smatrix; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

void FUNC_3(matrix_row_t VAR_7[]) {


  for (int VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8)
  {
    VAR_2.smatrix[VAR_8] = VAR_7[VAR_8];
  }







  if (VAR_4 != VAR_1.current_layer) {
 VAR_4 = VAR_1.current_layer;
 FUNC_2(VAR_4);
  }

  if (VAR_5 != VAR_1.nlock_led) {
 VAR_5 = VAR_1.nlock_led;
 FUNC_1(3, VAR_5);
  }
  if (VAR_3 != VAR_1.clock_led) {
 VAR_3 = VAR_1.clock_led;
 FUNC_1(4, VAR_3);
  }
  if (VAR_6 != VAR_1.slock_led) {
 VAR_6 = VAR_1.slock_led;
 FUNC_1(5, VAR_6);
  }

}
