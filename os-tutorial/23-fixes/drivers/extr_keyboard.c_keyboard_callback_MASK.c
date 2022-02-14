
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int registers_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;
 char* VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 char* VAR_4 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(registers_t *VAR_5) {

    uint8_t VAR_6 = FUNC_5(0x60);

    if (VAR_6 > VAR_2) return;
    if (VAR_6 == VAR_0) {
        FUNC_2(VAR_3);
        FUNC_4();
    } else if (VAR_6 == VAR_1) {
        FUNC_3("\n");
        FUNC_6(VAR_3);
        VAR_3[0] = '\0';
    } else {
        char VAR_7 = VAR_4[(int)VAR_6];

        char VAR_8[2] = {VAR_7, '\0'};
        FUNC_1(VAR_3, VAR_7);
        FUNC_3(VAR_8);
    }
    FUNC_0(VAR_5);
}
