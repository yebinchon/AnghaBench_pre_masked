
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

char *
FUNC_3(const char *VAR_0) {
    size_t VAR_1 = FUNC_2(VAR_0);
    char *VAR_2 = FUNC_0(VAR_1 + 3);
    if (!VAR_2) {
        return ((void*)0);
    }
    FUNC_1(&VAR_2[1], VAR_0, VAR_1);
    VAR_2[0] = '"';
    VAR_2[VAR_1 + 1] = '"';
    VAR_2[VAR_1 + 2] = '\0';
    return VAR_2;
}
