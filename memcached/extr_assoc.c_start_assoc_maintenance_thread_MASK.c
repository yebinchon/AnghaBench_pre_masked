
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int VAR_4 ;
 char* FUNC_4 (int) ;

int FUNC_5() {
    int VAR_5;
    char *VAR_6 = FUNC_2("MEMCACHED_HASH_BULK_MOVE");
    if (VAR_6 != ((void*)0)) {
        VAR_2 = FUNC_0(VAR_6);
        if (VAR_2 == 0) {
            VAR_2 = VAR_0;
        }
    }

    if ((VAR_5 = FUNC_3(&VAR_3, ((void*)0),
                              VAR_1, ((void*)0))) != 0) {
        FUNC_1(VAR_4, "Can't create thread: %s\n", FUNC_4(VAR_5));
        return -1;
    }
    return 0;
}
