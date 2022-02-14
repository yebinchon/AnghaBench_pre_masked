
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
BOOL FUNC_0(PCHAR VAR_2)
{
    PCHAR VAR_3 = VAR_2;
    if (!VAR_3)
    {
        return VAR_0;
    }
    while (*VAR_3)
    {
        if (*VAR_3 >= 0x20 && *VAR_3 <= 0x7e)
        {
            VAR_3++;
        }
        else
        {
            *VAR_3 = 0;
            return VAR_1;
        }
    }
    return VAR_0;
}
