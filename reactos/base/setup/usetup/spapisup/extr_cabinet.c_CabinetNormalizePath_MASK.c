
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int* PWCHAR ;
typedef int BOOL ;


 int FUNC_0 (int*) ;

__attribute__((used)) static BOOL
FUNC_1(PWCHAR VAR_0,
                     ULONG VAR_1)
{
    ULONG VAR_2;
    BOOL VAR_3;

    VAR_2 = FUNC_0(VAR_0);
    VAR_3 = (VAR_2 + 1) < VAR_1;

    if (VAR_2 != 0 && VAR_0[VAR_2 - 1] != L'\\' && VAR_3)
    {
        VAR_0[VAR_2] = L'\\';
        VAR_0[VAR_2 + 1] = 0;
    }

    return VAR_3;
}
