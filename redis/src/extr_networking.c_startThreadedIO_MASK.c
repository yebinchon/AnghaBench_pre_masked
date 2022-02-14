
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io_threads_num; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_4(void) {
    if (VAR_4) { FUNC_1("S"); FUNC_0(VAR_3); }
    if (VAR_4) FUNC_1("--- STARTING THREADED IO ---\n");
    FUNC_3(VAR_0 == 0);
    for (int VAR_5 = 0; VAR_5 < VAR_2.io_threads_num; VAR_5++)
        FUNC_2(&VAR_1[VAR_5]);
    VAR_0 = 1;
}
