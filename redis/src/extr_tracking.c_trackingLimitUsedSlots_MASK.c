
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tracking_table_max_fill; } ;


 int VAR_0 ;
 int ** VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (unsigned int) ;

void FUNC_2(void) {
    static unsigned int VAR_4 = 0;

    if (VAR_3.tracking_table_max_fill == 0) return;
    unsigned int VAR_5 =
        (VAR_0/100) * VAR_3.tracking_table_max_fill;
    if (VAR_2 <= VAR_5) {
        VAR_4 = 0;
        return;
    }




    int VAR_6 = 100 * (VAR_4+1);





    while(VAR_6 > 0) {
        unsigned int VAR_7 = FUNC_0() % VAR_0;
        do {
            VAR_6--;
            VAR_7 = (VAR_7+1) % VAR_0;
            if (VAR_1[VAR_7] != ((void*)0)) {
                FUNC_1(VAR_7);
                if (VAR_2 <= VAR_5) {
                    VAR_4 = 0;
                    return;
                } else {
                    break;
                }
            }
        } while(VAR_6 > 0);
    }
    VAR_4++;
}
