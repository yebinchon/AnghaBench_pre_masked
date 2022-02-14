
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 char* FUNC_5 (int) ;

int FUNC_6(bool VAR_5) {
    int VAR_6;
    FUNC_3(&VAR_3);
    if (VAR_0 == 0) {
        FUNC_4(&VAR_3);
        return 0;
    }
    VAR_0 = 0;
    FUNC_1(&VAR_2);
    FUNC_4(&VAR_3);
    if (VAR_5 && (VAR_6 = FUNC_2(VAR_1, ((void*)0))) != 0) {
        FUNC_0(VAR_4, "Failed to stop LRU crawler thread: %s\n", FUNC_5(VAR_6));
        return -1;
    }
    return 0;
}
