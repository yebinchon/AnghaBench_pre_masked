
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(void) {
    sigset_t VAR_1;
    FUNC_2(&VAR_1);

    if(FUNC_1(VAR_0, &VAR_1, ((void*)0)) == -1)
        FUNC_0("SIGNAL: Could not block signals for threads");
}
