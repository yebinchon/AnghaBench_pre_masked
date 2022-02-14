
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min; int max; } ;
typedef int CAN_FIFOMailBox_TypeDef ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int VAR_7 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(CAN_FIFOMailBox_TypeDef *VAR_8) {

  int VAR_9 = 1;
  int VAR_10 = 0;
  int VAR_11 = FUNC_1(VAR_8);
  int VAR_12 = FUNC_0(VAR_8);


  if (VAR_11 == 0) {


    if ((VAR_12 == 0x266) || (VAR_12 == 0x167)) {

      VAR_3 = 1;
      int VAR_13 = ((FUNC_2(VAR_8, 0) & 0xF) << 8) | FUNC_2(VAR_8, 1);
      int VAR_14 = FUNC_2(VAR_8, 0) >> 4;
      bool VAR_15 = 0;

      VAR_13 = FUNC_4(VAR_13, 12);

      if (VAR_5) {

        float VAR_16;
        VAR_16 = (FUNC_3(VAR_2, VAR_7) * VAR_0) + 1.;
        int VAR_17 = (int) (VAR_16);
        VAR_16 = (FUNC_3(VAR_1, VAR_7) * VAR_0) + 1.;
        int VAR_18 = (int) (VAR_16);

        int VAR_19 = VAR_6 + ((VAR_6 > 0) ? VAR_17 : VAR_18);
        int VAR_20 = VAR_6 - ((VAR_6 > 0) ? VAR_18 : VAR_17);
        if ((VAR_13 > VAR_19) ||
            (VAR_13 < VAR_20)){
          VAR_15 = 1;
          VAR_5 = 0;
        }
      }


      if ((!VAR_5) &&
           ((VAR_13 < (VAR_4.min - 1)) ||
            (VAR_13 > (VAR_4.max + 1)) ||
            (VAR_14 != 1))) {
        VAR_15 = 1;
      }

      VAR_6 = VAR_13;

      if (VAR_15) {
        VAR_9 = 0;
      }
      VAR_10 = 1;
    }
  }


  if (!VAR_10) {
    VAR_9 &= FUNC_5(VAR_8);
  }

  return VAR_9;
}
