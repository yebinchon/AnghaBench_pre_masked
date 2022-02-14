
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;
typedef int BOOL ;


 int FUNC_0 (char*,char**,int) ;

__attribute__((used)) static
BOOL
FUNC_1(char *VAR_0, ULONG_PTR *VAR_1)
{
    char *VAR_2;


    if ((VAR_0[0] == '0') && ((VAR_0[1] == 'x') || (VAR_0[1] == 'X')))
        VAR_0 += 2;


    *VAR_1 = FUNC_0(VAR_0, &VAR_2, 16);

    return (*VAR_2 == '\0');
}
