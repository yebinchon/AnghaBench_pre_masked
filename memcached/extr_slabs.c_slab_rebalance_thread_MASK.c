
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ done; int * slab_start; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_3 ;
 scalar_t__ FUNC_5 () ;
 int VAR_4 ;
 int FUNC_6 (int) ;

__attribute__((used)) static void *FUNC_7(void *VAR_5) {
    int VAR_6 = 0;
    int VAR_7 = 1;
    int VAR_8 = 1000;

    FUNC_0(&VAR_4);


    while (VAR_3 || VAR_0) {
        if (VAR_3 == 1) {
            if (FUNC_5() < 0) {

                VAR_3 = 0;
            }

            VAR_6 = 0;
        } else if (VAR_3 && VAR_1.slab_start != ((void*)0)) {
            VAR_6 = FUNC_4();
        }

        if (VAR_1.done) {
            FUNC_3();
        } else if (VAR_6) {


            FUNC_6(VAR_7);
            VAR_7 = VAR_7 * 2;
            if (VAR_7 > VAR_8)
                VAR_7 = VAR_8;
        }

        if (VAR_3 == 0) {

            FUNC_2(&VAR_2, &VAR_4);
        }
    }


    FUNC_1(&VAR_4);
    return ((void*)0);
}
