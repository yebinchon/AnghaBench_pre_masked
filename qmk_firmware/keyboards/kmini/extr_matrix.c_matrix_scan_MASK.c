
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;

uint8_t FUNC_4(void)
{

    for (uint8_t VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
        bool VAR_8 = FUNC_1(VAR_6, VAR_7);
        if (VAR_8) {
            VAR_3 = 1;
            VAR_4 = FUNC_3();
        }
    }

    if (VAR_3 && (FUNC_2(VAR_4) > VAR_0)) {
        for (uint8_t VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
            VAR_5[VAR_9] = VAR_6[VAR_9];
        }
        VAR_3 = 0;
    }

    FUNC_0();
    return 1;
}
