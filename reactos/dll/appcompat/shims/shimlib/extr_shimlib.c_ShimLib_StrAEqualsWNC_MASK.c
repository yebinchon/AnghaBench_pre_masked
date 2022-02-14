
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PCWSTR ;
typedef int * PCSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

BOOL FUNC_2(PCSTR VAR_2, PCWSTR VAR_3)
{
    while (FUNC_0(*VAR_2) == FUNC_1(*VAR_3))
    {
        if (!*VAR_2)
            return VAR_1;

        VAR_2++; VAR_3++;
    }
    return VAR_0;
}
