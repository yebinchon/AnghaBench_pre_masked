
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HMODULE ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 char* FUNC_2 (char*) ;

char *
FUNC_3(void) {
    HMODULE VAR_1 = FUNC_1(((void*)0));
    if (!VAR_1) {
        return ((void*)0);
    }
    WCHAR VAR_2[VAR_0 + 1];
    int VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0);
    if (!VAR_3) {
        return ((void*)0);
    }
    VAR_2[VAR_3] = '\0';
    return FUNC_2(VAR_2);
}
