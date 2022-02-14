
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_6__ {scalar_t__ b; scalar_t__ g; scalar_t__ r; } ;
struct TYPE_5__ {scalar_t__ scan; } ;
struct TYPE_4__ {scalar_t__ enable; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t FUNC_0 () ;
 TYPE_3__* VAR_11 ;
 TYPE_2__* VAR_12 ;
 TYPE_1__ VAR_13 ;

void FUNC_1(void) {
    uint8_t VAR_14 = FUNC_0();
    if (VAR_14 && VAR_13.enable) {
        for (uint8_t VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
            if (

                (VAR_12[VAR_15].scan == VAR_8 && (VAR_14 & (1 << VAR_7))) ||


                (VAR_12[VAR_15].scan == VAR_2 && (VAR_14 & (1 << VAR_1))) ||


                (VAR_12[VAR_15].scan == VAR_10 && (VAR_14 & (1 << VAR_9))) ||


                (VAR_12[VAR_15].scan == VAR_4 && (VAR_14 & (1 << VAR_3))) ||


                (VAR_12[VAR_15].scan == VAR_6 && (VAR_14 & (1 << VAR_5))) ||

                (0)) {
                VAR_11[VAR_15].r = 255 - VAR_11[VAR_15].r;
                VAR_11[VAR_15].g = 255 - VAR_11[VAR_15].g;
                VAR_11[VAR_15].b = 255 - VAR_11[VAR_15].b;
            }
        }
    }
}
