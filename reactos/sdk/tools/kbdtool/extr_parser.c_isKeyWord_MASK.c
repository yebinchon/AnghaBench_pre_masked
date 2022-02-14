
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef int PCHAR ;


 size_t VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

ULONG
FUNC_1(PCHAR VAR_2)
{
    ULONG VAR_3;


    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) if (FUNC_0(VAR_1[VAR_3], VAR_2) == 0) break;


    return VAR_3;
}
