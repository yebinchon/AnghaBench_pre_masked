
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int ) ;

char *
FUNC_3(void) {


    char VAR_1[VAR_0 + 1];
    ssize_t VAR_2 = FUNC_2("/proc/self/exe", VAR_1, VAR_0);
    if (VAR_2 == -1) {
        FUNC_1("readlink");
        return ((void*)0);
    }
    VAR_1[VAR_2] = '\0';
    return FUNC_0(VAR_1);






}
