
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;


 int FUNC_0 (char*) ;
 int * VAR_0 ;
 int FUNC_1 (size_t,char*,int) ;
 int *** VAR_1 ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 size_t FUNC_5 (int ,char**,int) ;

void FUNC_6(void) {
    if (FUNC_4(VAR_0[1]) != 0 && FUNC_4(VAR_0[2]) != 0 && FUNC_4(VAR_0[3]) != 0) {
        char VAR_2[5];
        char VAR_3[5];
        uint16_t VAR_4 = FUNC_5(VAR_0[1], (char **)((void*)0), 10);
        uint16_t VAR_5 = FUNC_5(VAR_0[2], (char **)((void*)0), 10);
        uint16_t VAR_6 = FUNC_5(VAR_0[3], (char **)((void*)0), 10);
        uint16_t VAR_7 = FUNC_2(&VAR_1[VAR_4][VAR_5][VAR_6]);
        FUNC_1(VAR_7, VAR_2, 10);
        FUNC_1(VAR_7, VAR_3, 16);
        FUNC_0("0x");
        FUNC_3(VAR_3);
        FUNC_0(" (");
        FUNC_3(VAR_2);
        FUNC_0(")\n");
    } else {



    }
}
