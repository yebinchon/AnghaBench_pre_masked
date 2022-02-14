
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int ,int *) ;
 int VAR_3 ;
 char* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(void) {
    int VAR_4;
    VAR_0 = 1;
    if ((VAR_4 = FUNC_1(&VAR_2, ((void*)0),
                              VAR_1, ((void*)0))) != 0) {
        FUNC_0(VAR_3, "Can't start logger thread: %s\n", FUNC_2(VAR_4));
        return -1;
    }
    return 0;
}
