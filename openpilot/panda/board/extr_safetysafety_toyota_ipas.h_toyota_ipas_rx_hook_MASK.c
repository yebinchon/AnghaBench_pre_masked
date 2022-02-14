
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int16_t ;
struct TYPE_6__ {scalar_t__ CNT; } ;
struct TYPE_5__ {int max; int min; } ;
typedef int CAN_FIFOMailBox_TypeDef ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,float) ;
 int VAR_11 ;
 int VAR_12 ;
 float VAR_13 ;
 int FUNC_4 (int,int) ;
 TYPE_1__ VAR_14 ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_15 ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_7(CAN_FIFOMailBox_TypeDef *VAR_16) {

  FUNC_5(VAR_16);

  int VAR_17 = FUNC_0(VAR_16);

  if (VAR_17 == 0x260) {

    int16_t VAR_18 = (FUNC_1(VAR_16, 1) << 8) | FUNC_1(VAR_16, 2);


    FUNC_6(&VAR_14, VAR_18);
  }


  if (VAR_17 == 0x25) {
    int VAR_19 = ((FUNC_1(VAR_16, 0) & 0xF) << 8) | FUNC_1(VAR_16, 1);
    uint32_t VAR_20 = VAR_4->CNT;

    VAR_19 = FUNC_4(VAR_19, 12);


    FUNC_6(&VAR_8, VAR_19);



    int VAR_21 = ((int)(VAR_3 * ((FUNC_3(VAR_2, VAR_13) * 20. * VAR_0) + 1.)));
    int VAR_22 = ((int)(VAR_3 * ((FUNC_3(VAR_1, VAR_13) * 20. * VAR_0) + 1.)));
    int VAR_23 = VAR_12 + ((VAR_12 > 0) ? VAR_21 : VAR_22);
    int VAR_24 = VAR_12 - ((VAR_12 > 0) ? VAR_22 : VAR_21);


    uint32_t VAR_25 = FUNC_2(VAR_20, VAR_15);
    if ((VAR_25 > VAR_6) || (VAR_9 && !VAR_10)) {
      VAR_12 = VAR_19;
      VAR_15 = VAR_20;
    }


    if (VAR_7 &&
        ((VAR_19 < VAR_24) ||
         (VAR_19 > VAR_23))) {
      VAR_9 = 0;
    }

    VAR_10 = VAR_9;
  }


  if (VAR_17 == 0xb4) {
    VAR_13 = ((float)((FUNC_1(VAR_16, 5) << 8) | FUNC_1(VAR_16, 6))) * 0.01 / 3.6;
  }


  if (VAR_17 == 0x262) {
    VAR_11 = FUNC_1(VAR_16, 0) & 0xf;
  }


  if (VAR_7 && ((VAR_14.min > VAR_5) ||
                        (VAR_14.max < -VAR_5) ||
                        (VAR_11==5))) {
    VAR_9 = 0;
  }
}
