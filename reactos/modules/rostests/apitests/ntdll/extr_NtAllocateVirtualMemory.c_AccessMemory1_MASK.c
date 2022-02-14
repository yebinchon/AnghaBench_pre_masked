
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef size_t SIZE_T ;
typedef int * PVOID ;
typedef int * PBYTE ;


 int FUNC_0 (size_t) ;

__attribute__((used)) static
VOID
FUNC_1(
    PVOID VAR_0,
    SIZE_T VAR_1)
{
    PBYTE VAR_2 = VAR_0;
    SIZE_T VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
        VAR_2[VAR_3] = FUNC_0(VAR_3);
}
