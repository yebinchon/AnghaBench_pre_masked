
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (float**) ;
 float** FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (unsigned int) ;
 float*** VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 size_t VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;

bool FUNC_9(uint16_t VAR_8, keyrecord_t *VAR_9) {
  uint32_t VAR_10;
  uint8_t VAR_11;




  if (VAR_8 != VAR_1 || !VAR_9->event.pressed) {
    return 1;
  }

  if (FUNC_6() & (FUNC_0(VAR_2)|FUNC_0(VAR_3))) {

    FUNC_5(VAR_5);



  } else {


    VAR_10 = FUNC_3(VAR_5);

    for (VAR_11 = 1; VAR_11 < VAR_7; VAR_11++) {
      if (VAR_6[(VAR_10 + VAR_11) % VAR_7]) {
        break;
      }
    }
    if (VAR_11 == VAR_7) {


      return 0;
    }
    VAR_10 = (VAR_10 + VAR_11) % VAR_7;
    FUNC_4(1U<<VAR_10);
    FUNC_8(FUNC_7());



  }
  return 0;
}
