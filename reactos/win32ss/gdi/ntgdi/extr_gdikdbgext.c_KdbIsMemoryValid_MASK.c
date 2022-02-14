
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef scalar_t__ PVOID ;
typedef scalar_t__ PUCHAR ;
typedef int BOOLEAN ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

BOOLEAN
FUNC_2(PVOID VAR_3, ULONG VAR_4)
{
    PUCHAR VAR_5;

    VAR_5 = FUNC_0(VAR_3, VAR_1);

    while (VAR_5 < (PUCHAR)VAR_3 + VAR_4)
    {
        if (!FUNC_1(VAR_5)) return VAR_0;
        VAR_5 += VAR_1;
    }

    return VAR_2;
}
