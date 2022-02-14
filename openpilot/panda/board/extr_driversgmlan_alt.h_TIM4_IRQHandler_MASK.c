
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int SR; scalar_t__ CR1; scalar_t__ DIER; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int* VAR_22 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ,int,int ) ;

void FUNC_6(void) {
  if (VAR_12 == VAR_0) {
    if ((VAR_9->SR & VAR_10) && (VAR_16 != -1)) {
      int VAR_23 = FUNC_0(VAR_4, 12);
      if (VAR_17 < VAR_8) {
        if (VAR_23 == 0) {
          VAR_17 = 0;
        } else {
          VAR_17++;
        }
      } else {
        bool VAR_24 = 0;

        if ((VAR_15 > 0) &&
           ((VAR_23 == 0) && (VAR_22[VAR_15-1] == 1)) &&
           (VAR_15 != (VAR_16 - 11))) {
          FUNC_2("GMLAN ERR: bus driven at ");
          FUNC_1(VAR_15);
          FUNC_2("\n");
          VAR_24 = 1;
        } else if ((VAR_23 == 1) && (VAR_15 == (VAR_16 - 11))) {
          FUNC_2("GMLAN ERR: didn't recv ACK\n");
          VAR_24 = 1;
        } else {

        }
        if (VAR_24) {

          FUNC_3(1);
          VAR_17 = 0;
          VAR_15 = 0;
          VAR_13++;
          if (VAR_13 == VAR_6) {
            FUNC_2("GMLAN ERR: giving up send\n");
            VAR_14 = 0;
          }
        } else {
          FUNC_3(VAR_22[VAR_15]);
          VAR_15++;
        }
      }
      if ((VAR_15 == VAR_16) || (VAR_13 == VAR_6)) {
        FUNC_3(1);
        FUNC_4(VAR_4, 13, VAR_7);
        VAR_9->DIER = 0;
        VAR_9->CR1 = 0;
        VAR_16 = -1;
      }
    }
    VAR_9->SR = 0;
  } else if (VAR_12 == VAR_5) {
    if ((VAR_9->SR & VAR_10) && (VAR_18 != -1)) {
      if ((VAR_11 == 0) && VAR_19) {

        FUNC_5(VAR_4, 13, VAR_2);
        VAR_18 = -1;
        VAR_20 = VAR_3;
        VAR_12 = VAR_1;
      }
      else {
        VAR_11--;
        if (VAR_20 == 0) {

          VAR_20 = VAR_3;
          FUNC_5(VAR_4, 13, VAR_2);
        }
        else {
          FUNC_5(VAR_4, 13, VAR_21);
          VAR_20--;
        }
      }
    }
    VAR_9->SR = 0;
  } else {
    FUNC_2("invalid gmlan_alt_mode\n");
  }
}
