
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef int* PULONG ;
typedef scalar_t__* PCWSTR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static
ULONG
FUNC_4(PCWSTR VAR_0, PULONG VAR_1)
{
    ULONG VAR_2 = 0;
    *VAR_1 = 0;
    for (VAR_2 = 0; VAR_0[VAR_2]; ++VAR_2)
    {
        if (FUNC_1(VAR_0[VAR_2]) && FUNC_0(VAR_0[VAR_2]))
            *VAR_1 = FUNC_3(*VAR_1, 10);
        else if (FUNC_1(VAR_0[VAR_2]) && FUNC_2(VAR_0[VAR_2]))
            *VAR_1 = 16;
        else
            break;
    }
    return VAR_2;
}
