
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enable; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (char*,int,int) ;
 scalar_t__ VAR_3 ;
 float* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,unsigned int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 () ;
 int VAR_8 ;
 int* VAR_9 ;

void FUNC_7(float VAR_10, int VAR_11) {
    FUNC_3("audio play note freq=%d vol=%d", (int)VAR_10, VAR_11);

    if (!VAR_2) {
        FUNC_2();
    }

    if (VAR_1.enable && VAR_8 < 8) {

        if (VAR_7) {
            FUNC_6();
        }

        VAR_6 = 1;

        VAR_3 = 0;

        if (VAR_10 > 0) {
            VAR_4[VAR_8] = VAR_10;
            VAR_9[VAR_8] = VAR_11;
            VAR_8++;
        }

        FUNC_4(&VAR_0, &VAR_5);
        FUNC_5(&VAR_0, 2U);
        FUNC_0();
        FUNC_1();
    }
}
