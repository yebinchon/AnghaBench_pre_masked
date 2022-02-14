
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;
typedef int* PULONG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

VOID
FUNC_0(ULONG VAR_3,
                          PULONG VAR_4)
{
    *VAR_4 = VAR_3;
    if ((VAR_3 & VAR_2) == VAR_2)
    {
        *VAR_4 = VAR_3 & ~VAR_2;
        *VAR_4 |= VAR_0;
    }

    if (VAR_3 == 0)
        *VAR_4 = VAR_1;
}
