
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint16_t ;
struct TYPE_6__ {int RF0R; TYPE_1__* sFIFOMailBox; } ;
struct TYPE_5__ {int RIR; } ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_3 () ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_4 (int*,scalar_t__) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (char*) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;

void FUNC_7(void) {
  while ((VAR_0->RF0R & VAR_3) != 0) {



    int VAR_17 = VAR_0->sFIFOMailBox[0].RIR >> 21;
    if (VAR_17 == VAR_1) {

      if (FUNC_1(&VAR_0->sFIFOMailBox[0]) == 0xdeadface) {
        if (FUNC_2(&VAR_0->sFIFOMailBox[0]) == 0x0ab00b1e) {
          VAR_12 = VAR_7;
          FUNC_3();
        } else if (FUNC_2(&VAR_0->sFIFOMailBox[0]) == 0x02b00b1e) {
          VAR_12 = VAR_6;
          FUNC_3();
        } else {
          FUNC_6("Failed entering Softloader or Bootloader\n");
        }
      }


      uint8_t VAR_18[8];
      for (int VAR_19=0; VAR_19<8; VAR_19++) {
        VAR_18[VAR_19] = FUNC_0(&VAR_0->sFIFOMailBox[0], VAR_19);
      }
      uint16_t VAR_20 = (VAR_18[0] << 8) | VAR_18[1];
      uint16_t VAR_21 = (VAR_18[2] << 8) | VAR_18[3];
      bool VAR_22 = ((VAR_18[4] >> 7) & 1U) != 0U;
      uint8_t VAR_23 = VAR_18[4] & VAR_5;
      if (FUNC_4(VAR_18, VAR_2 - 1) == VAR_18[5]) {
        if (((VAR_11 + 1U) & VAR_5) == VAR_23) {





          if (VAR_22) {
            VAR_13 = VAR_20;
            VAR_14 = VAR_21;
          } else {

            if ((VAR_20 == 0U) && (VAR_21 == 0U)) {
              VAR_15 = VAR_10;
            } else {
              VAR_15 = VAR_9;
            }
            VAR_13 = 0;
            VAR_14 = 0;
          }

          VAR_16 = 0;
        }
        VAR_11 = VAR_23;
      } else {

        VAR_15 = VAR_8;
      }
    }

    VAR_0->RF0R |= VAR_4;
  }
}
