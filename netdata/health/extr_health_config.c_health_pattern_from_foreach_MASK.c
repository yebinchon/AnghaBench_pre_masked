
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIMPLE_PATTERN ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*,int *,int ) ;
 char* FUNC_3 (char*) ;

SIMPLE_PATTERN *FUNC_4(char *VAR_1) {
    char *VAR_2= FUNC_3(VAR_1);
    SIMPLE_PATTERN *VAR_3 = ((void*)0);
    if(VAR_2) {
        FUNC_0(VAR_2);
        VAR_3 = FUNC_2(VAR_2, ((void*)0), VAR_0);

        FUNC_1(VAR_2);
    }

    return VAR_3;
}
