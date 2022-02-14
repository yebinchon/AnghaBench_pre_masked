
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int * FUNC_3 (char*,char*) ;

int FUNC_4(void) {
    char VAR_0[1024];

    FILE *VAR_1 = FUNC_2("/sys/kernel/mm/transparent_hugepage/enabled","r");
    if (!VAR_1) return 0;
    if (FUNC_1(VAR_0,sizeof(VAR_0),VAR_1) == ((void*)0)) {
        FUNC_0(VAR_1);
        return 0;
    }
    FUNC_0(VAR_1);
    return (FUNC_3(VAR_0,"[never]") == ((void*)0)) ? 1 : 0;
}
