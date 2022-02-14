
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_2__ {int io_threads_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 scalar_t__* VAR_7 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *,int ,void*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_8 ;
 int FUNC_5 (int ,char*,...) ;

void FUNC_6(void) {
    VAR_4 = 0;



    if (VAR_8.io_threads_num == 1) return;

    if (VAR_8.io_threads_num > VAR_1) {
        FUNC_5(VAR_2,"Fatal: too many I/O threads configured. "
                             "The maximum number is %d.", VAR_1);
        FUNC_0(1);
    }


    for (int VAR_9 = 0; VAR_9 < VAR_8.io_threads_num; VAR_9++) {
        pthread_t VAR_10;
        FUNC_3(&VAR_6[VAR_9],((void*)0));
        VAR_7[VAR_9] = 0;
        VAR_5[VAR_9] = FUNC_1();
        FUNC_4(&VAR_6[VAR_9]);
        if (FUNC_2(&VAR_10,((void*)0),VAR_0,(void*)(long)VAR_9) != 0) {
            FUNC_5(VAR_2,"Fatal: Can't initialize IO thread.");
            FUNC_0(1);
        }
        VAR_3[VAR_9] = VAR_10;
    }
}
