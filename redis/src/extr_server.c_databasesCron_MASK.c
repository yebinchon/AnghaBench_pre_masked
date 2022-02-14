
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dbnum; scalar_t__ activerehashing; scalar_t__ active_defrag_enabled; int * masterhost; scalar_t__ active_expire_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_5 (unsigned int) ;

void FUNC_6(void) {


    if (VAR_2.active_expire_enabled) {
        if (VAR_2.masterhost == ((void*)0)) {
            FUNC_1(VAR_0);
        } else {
            FUNC_2();
        }
    }


    if (VAR_2.active_defrag_enabled)
        FUNC_0();




    if (!FUNC_3()) {



        static unsigned int VAR_3 = 0;
        static unsigned int VAR_4 = 0;
        int VAR_5 = VAR_1;
        int VAR_6;


        if (VAR_5 > VAR_2.dbnum) VAR_5 = VAR_2.dbnum;


        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
            FUNC_5(VAR_3 % VAR_2.dbnum);
            VAR_3++;
        }


        if (VAR_2.activerehashing) {
            for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
                int VAR_7 = FUNC_4(VAR_4);
                if (VAR_7) {


                    break;
                } else {

                    VAR_4++;
                    VAR_4 %= VAR_2.dbnum;
                }
            }
        }
    }
}
