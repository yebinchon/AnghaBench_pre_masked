
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct task_entry {int i_get; int i_put; int qlen; int * queue; int (* task ) (int *) ;} ;


 size_t FUNC_0 (struct task_entry volatile*) ;
 struct task_entry volatile* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

bool FUNC_7(void) {
    if (VAR_2) {
        return 0;
    }


    FUNC_6();




    extern uint32_t VAR_4;
    uint32_t *VAR_5 = &VAR_4 - 6;


    bool VAR_6 = 0;
    for (volatile struct task_entry *VAR_7 = VAR_0; VAR_7 < &VAR_0[FUNC_0(VAR_0)]; VAR_7++) {
        if (!VAR_1) {
            FUNC_5();
        }
        FUNC_1();

        if (VAR_7->i_get != VAR_7->i_put) {
            VAR_6 = 1;


            int VAR_8 = VAR_7->i_get;
            if (VAR_7->i_put == -1) {
                VAR_7->i_put = VAR_7->i_get;
            }
            if (++VAR_7->i_get == VAR_7->qlen) {
                VAR_7->i_get = 0;
            }

            uint32_t VAR_9 = *VAR_5;
            VAR_7->task(&VAR_7->queue[VAR_8]);
            if (VAR_1) {

                *VAR_5 = VAR_9;
            }


        }
        FUNC_2();
    }

    if (!VAR_6 && &FUNC_3) {
        FUNC_3(VAR_3);
    }

    return VAR_6;
}
