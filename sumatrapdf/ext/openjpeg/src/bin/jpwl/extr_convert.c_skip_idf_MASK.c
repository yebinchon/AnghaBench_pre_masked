
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static char *FUNC_3(char *VAR_0, char VAR_1[256])
{
    char *VAR_2;
    char VAR_3;

    VAR_2 = FUNC_1(VAR_0);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_0 = VAR_2;

    while (*VAR_2) {
        if (FUNC_0(*VAR_2) || *VAR_2 == '_') {
            ++VAR_2;
            continue;
        }
        break;
    }
    VAR_3 = *VAR_2;
    *VAR_2 = 0;
    FUNC_2(VAR_1, VAR_0, 255);
    *VAR_2 = VAR_3;
    return VAR_2;
}
