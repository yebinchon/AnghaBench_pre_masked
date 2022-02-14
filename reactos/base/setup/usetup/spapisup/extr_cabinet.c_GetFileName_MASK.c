
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int* PWCHAR ;



__attribute__((used)) static PWCHAR
FUNC_0(PWCHAR VAR_0)
{
    ULONG VAR_1, VAR_2;

    VAR_2 = VAR_1 = 0;

    while (VAR_0[VAR_1++])
    {
        if (VAR_0[VAR_1 - 1] == L'\\')
            VAR_2 = VAR_1;
    }

    return VAR_0 + VAR_2;
}
