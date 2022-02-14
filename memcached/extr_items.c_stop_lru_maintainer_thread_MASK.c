
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lru_maintainer_thread; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_4 (int) ;

int FUNC_5(void) {
    int VAR_5;
    FUNC_2(&VAR_1);

    VAR_0 = 0;
    FUNC_3(&VAR_1);
    if ((VAR_5 = FUNC_1(VAR_2, ((void*)0))) != 0) {
        FUNC_0(VAR_4, "Failed to stop LRU maintainer thread: %s\n", FUNC_4(VAR_5));
        return -1;
    }
    VAR_3.lru_maintainer_thread = 0;
    return 0;
}
