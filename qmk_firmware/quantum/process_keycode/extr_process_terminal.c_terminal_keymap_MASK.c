
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * VAR_2 ;
 int *** VAR_3 ;
 char* VAR_4 ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,size_t) ;
 scalar_t__ FUNC_4 (int ) ;
 size_t FUNC_5 (int ,char**,int) ;

void FUNC_6(void) {
    if (FUNC_4(VAR_2[1]) != 0) {
        uint16_t VAR_5 = FUNC_5(VAR_2[1], (char **)((void*)0), 10);
        for (int VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
            for (int VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
                uint16_t VAR_8 = FUNC_1(&VAR_3[VAR_5][VAR_6][VAR_7]);
                char VAR_9[8];
                FUNC_3(VAR_9, "0x%04x,", VAR_8);
                FUNC_2(VAR_9);
            }
            FUNC_2(VAR_4);
        }
    } else {



    }
}
