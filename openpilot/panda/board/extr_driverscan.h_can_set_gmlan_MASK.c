
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int (* set_can_mode ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int* VAR_3 ;
 int FUNC_1 (int) ;
 int* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(uint8_t VAR_6) {
  if(FUNC_0()){

    uint8_t VAR_7 = VAR_4[3];
    if (VAR_6 != VAR_7) {
      switch (VAR_7) {
        case 1:
        case 2:
          FUNC_3("Disable GMLAN on CAN");
          FUNC_2(VAR_7 + 1U);
          FUNC_3("\n");
          VAR_5->set_can_mode(VAR_2);
          VAR_3[VAR_7] = VAR_7;
          VAR_4[VAR_7] = VAR_7;
          VAR_4[3] = -1;
          FUNC_1(VAR_7);
          break;
        default:

          break;
      }
    }


    switch (VAR_6) {
      case 1:
      case 2:
        FUNC_3("Enable GMLAN on CAN");
        FUNC_2(VAR_6 + 1U);
        FUNC_3("\n");
        VAR_5->set_can_mode((VAR_6 == 1U) ? VAR_0 : VAR_1);
        VAR_3[VAR_6] = 3;
        VAR_4[VAR_6] = -1;
        VAR_4[3] = VAR_6;
        FUNC_1(VAR_6);
        break;
      case 0xFF:
        break;
      default:
        FUNC_3("GMLAN can only be set on CAN2 or CAN3\n");
        break;
    }
  } else {
    FUNC_3("GMLAN not available on black panda\n");
  }
}
