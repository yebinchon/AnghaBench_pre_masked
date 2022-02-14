
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

BOOL FUNC_0(const void *VAR_2, DWORD VAR_3)
{
    const signed char *VAR_4 = VAR_2;
    while (VAR_3-- > 0)
    {
        if (*VAR_4 <= 0)
            return VAR_0;

        ++VAR_4;
    }
    return VAR_1;
}
