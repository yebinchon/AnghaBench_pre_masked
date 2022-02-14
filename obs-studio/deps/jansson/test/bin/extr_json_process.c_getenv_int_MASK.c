
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 long FUNC_1 (char*,char**,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0)
{
    char *VAR_1, *VAR_2;
    long VAR_3;

    VAR_1 = FUNC_0(VAR_0);
    if(!VAR_1)
        return 0;

    VAR_3 = FUNC_1(VAR_1, &VAR_2, 10);
    if(*VAR_2 != '\0')
        return 0;

    return (int)VAR_3;
}
