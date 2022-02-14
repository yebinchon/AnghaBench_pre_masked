
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;
 char* FUNC_2 (void*,char*,int,char const*) ;

__attribute__((used)) static char *FUNC_3(void *VAR_0, const char *VAR_1)
{
    const char *VAR_2 = FUNC_1(VAR_1, '.');
    if (!VAR_2)
        VAR_2 = VAR_1 + FUNC_0(VAR_1);
    return FUNC_2(VAR_0, "%.*s", (int)(VAR_2 - VAR_1), VAR_1);
}
