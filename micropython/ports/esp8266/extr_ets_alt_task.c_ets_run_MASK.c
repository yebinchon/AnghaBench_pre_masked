
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ,int *) ;
 int FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (char*) ;

bool FUNC_8(void) {







    *(char*)0x3FFFC6FC = 0;
    FUNC_2();
    FUNC_7("ets_alt_task: ets_run\n");



    FUNC_3();
    while (1) {
        if (!FUNC_5()) {

            FUNC_2();
            if (&FUNC_6) {
                FUNC_6(VAR_0);
            }
            asm("waiti 0");
            FUNC_3();
        }
    }

}
