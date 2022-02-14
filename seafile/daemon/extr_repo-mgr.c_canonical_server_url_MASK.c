
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2 (const char *VAR_0)
{
    char *VAR_1 = FUNC_0(VAR_0);
    int VAR_2 = FUNC_1(VAR_1);

    if (VAR_1[VAR_2 - 1] == '/')
        VAR_1[VAR_2 - 1] = 0;

    return VAR_1;
}
