
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 int FUNC_1 (char*,int,int) ;
 scalar_t__ VAR_8 ;
 float* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 () ;
 int VAR_12 ;
 int* VAR_13 ;

void FUNC_3(float VAR_14, int VAR_15) {
    FUNC_1("audio play note freq=%d vol=%d", (int)VAR_14, VAR_15);

    if (!VAR_7) {
        FUNC_0();
    }

    if (VAR_6.enable && VAR_12 < 8) {
        if (VAR_11) FUNC_2();

        VAR_10 = 1;

        VAR_8 = 0;

        if (VAR_14 > 0) {
            VAR_9[VAR_12] = VAR_14;
            VAR_13[VAR_12] = VAR_15;
            VAR_12++;
        }
    }
}
