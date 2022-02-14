
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tests; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,char*) ;

int FUNC_3(char *VAR_1) {
    char VAR_2[256];
    int VAR_3 = FUNC_1(VAR_1);

    if (VAR_0.tests == ((void*)0)) return 1;
    VAR_2[0] = ',';
    FUNC_0(VAR_2+1,VAR_1,VAR_3);
    VAR_2[VAR_3+1] = ',';
    VAR_2[VAR_3+2] = '\0';
    return FUNC_2(VAR_0.tests,VAR_2) != ((void*)0);
}
