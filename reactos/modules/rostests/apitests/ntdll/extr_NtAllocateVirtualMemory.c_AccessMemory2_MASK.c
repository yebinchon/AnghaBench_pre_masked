
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef size_t SIZE_T ;
typedef scalar_t__* PVOID ;
typedef scalar_t__* PBYTE ;


 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static
VOID
FUNC_1(
    PVOID VAR_1,
    SIZE_T VAR_2)
{
    PBYTE VAR_3 = VAR_1;
    SIZE_T VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
        VAR_3[VAR_4] = VAR_0 - FUNC_0(VAR_4);
}
