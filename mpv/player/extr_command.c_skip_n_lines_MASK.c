
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, int VAR_1)
{
    while (VAR_0 && VAR_1 > 0) {
        char *VAR_2 = FUNC_0(VAR_0, '\n');
        VAR_0 = VAR_2 ? VAR_2 + 1 : ((void*)0);
        VAR_1--;
    }
    return VAR_0;
}
