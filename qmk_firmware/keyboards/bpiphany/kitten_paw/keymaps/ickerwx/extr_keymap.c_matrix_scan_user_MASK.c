
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 () ;
 int VAR_7 ;
 int FUNC_2 (int) ;

void FUNC_3(void) {
    uint8_t VAR_8;
    VAR_8 = FUNC_0(VAR_7);

    if (VAR_6 != VAR_8) {
        VAR_6 = VAR_8;


        FUNC_2(FUNC_1() & ~(1<<VAR_4));
        FUNC_2(FUNC_1() & ~(1<<VAR_5));

        if (VAR_8 == VAR_0 || VAR_8 == VAR_1) {
          FUNC_2(FUNC_1() | (1<<VAR_5));
        } else if (VAR_8 == VAR_2 || VAR_8 == VAR_3) {
          FUNC_2(FUNC_1() | (1<<VAR_4));
        }
    }
}
