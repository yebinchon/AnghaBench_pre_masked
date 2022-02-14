
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lru_maintainer_thread; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int ,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 char* FUNC_4 (int) ;

int FUNC_5(void *VAR_6) {
    int VAR_7;

    FUNC_2(&VAR_1);
    VAR_0 = 1;
    VAR_4.lru_maintainer_thread = 1;
    if ((VAR_7 = FUNC_1(&VAR_3, ((void*)0),
        VAR_2, VAR_6)) != 0) {
        FUNC_0(VAR_5, "Can't create LRU maintainer thread: %s\n",
            FUNC_4(VAR_7));
        FUNC_3(&VAR_1);
        return -1;
    }
    FUNC_3(&VAR_1);

    return 0;
}
