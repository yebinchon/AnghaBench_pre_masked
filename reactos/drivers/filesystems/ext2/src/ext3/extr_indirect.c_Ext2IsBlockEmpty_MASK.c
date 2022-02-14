
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef scalar_t__* PULONG ;
typedef int BOOLEAN ;



BOOLEAN
FUNC_0(PULONG VAR_0, ULONG VAR_1)
{
    ULONG VAR_2 = 0;
    for (VAR_2=0; VAR_2 < VAR_1; VAR_2++) {
        if (VAR_0[VAR_2]) {
            break;
        }
    }
    return (VAR_2 == VAR_1);
}
