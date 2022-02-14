
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ lru_crawler; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 char* FUNC_5 (int) ;

int FUNC_6(void) {
    int VAR_7;

    if (VAR_5.lru_crawler)
        return -1;
    FUNC_3(&VAR_4);
    VAR_0 = 1;
    if ((VAR_7 = FUNC_2(&VAR_2, ((void*)0),
        VAR_1, ((void*)0))) != 0) {
        FUNC_0(VAR_6, "Can't create LRU crawler thread: %s\n",
            FUNC_5(VAR_7));
        FUNC_4(&VAR_4);
        return -1;
    }

    FUNC_1(&VAR_3, &VAR_4);
    FUNC_4(&VAR_4);

    return 0;
}
