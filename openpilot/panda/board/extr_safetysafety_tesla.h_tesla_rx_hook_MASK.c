
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ CNT; } ;
typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (float,float,float) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_7(CAN_FIFOMailBox_TypeDef *VAR_10) {
  FUNC_6(0);
  FUNC_5();

  int VAR_11 = FUNC_0(VAR_10);

  if (VAR_11 == 0x45) {

    int VAR_12 = FUNC_1(VAR_10, 0) & 0x3F;
    if (VAR_12 == 2) {

      VAR_4 = 1;
    }
    if (VAR_12 == 1) {

      VAR_4 = 0;
    }
  }



  if (VAR_11 == 0x118) {

    if ((FUNC_1(VAR_10, 1) & 0x80) != 0) {

      VAR_4 = 0;
    }

    VAR_8 = (((((FUNC_1(VAR_10, 3) & 0xF) << 8) + FUNC_1(VAR_10, 2)) * 0.05) - 25) * 1.609 / 3.6;
    if (VAR_8 < 0) {
      VAR_8 = 0;
    }
  }



  if (VAR_11 == 0x370) {

    VAR_5 = (FUNC_1(VAR_10, 6) >> 5) & 0x7;


    if (VAR_4 && (VAR_5 != 0) && (VAR_5 != 1) && (VAR_5 != 2)) {
      VAR_4 = 0;

    }
  }

  if (VAR_11 == 0x00E) {
    float VAR_13 = (int)(((((FUNC_1(VAR_10, 0) & 0x3F) << 8) + FUNC_1(VAR_10, 1)) * 0.1) - 819.2);
    uint32_t VAR_14 = VAR_3->CNT;
    uint32_t VAR_15 = FUNC_3(VAR_14, VAR_9);



    float VAR_16 = (FUNC_4(VAR_1, VAR_8) * 25.) + 1.;
    float VAR_17 = (FUNC_4(VAR_0, VAR_8) * 25.) + 1.;
    float VAR_18 = VAR_7 + ((VAR_7 > 0.) ? VAR_16 : VAR_17);
    float VAR_19 = VAR_7 - ((VAR_7 > 0.) ? VAR_17 : VAR_16);

    if ((VAR_15 > VAR_2) || (VAR_4 && !VAR_6)) {
      VAR_7 = VAR_13;
      VAR_9 = VAR_14;
    }


    if (FUNC_2(VAR_13, VAR_18, VAR_19)) {


      VAR_4 = 0;

    } else {
      VAR_4 = 1;
    }

    VAR_6 = VAR_4;
  }
}
