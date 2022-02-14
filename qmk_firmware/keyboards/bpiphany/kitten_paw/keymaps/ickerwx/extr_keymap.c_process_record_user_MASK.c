
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

bool FUNC_3(uint16_t VAR_9, keyrecord_t *VAR_10) {
    uint8_t VAR_11;
    VAR_11 = FUNC_0(VAR_8);
    if (VAR_11 == VAR_7) {
         if (VAR_9 >= VAR_0 && VAR_9 <= VAR_2 && !(

                 VAR_9 == VAR_4 ||
                 VAR_9 == VAR_5 ||
                 VAR_9 == VAR_1 ||
                 VAR_9 == VAR_3
            )) {

              if (VAR_10->event.pressed) {
                  FUNC_1(VAR_6);
              } else {
                  FUNC_2(VAR_6);
              }
         }
    }
    return 1;
}
