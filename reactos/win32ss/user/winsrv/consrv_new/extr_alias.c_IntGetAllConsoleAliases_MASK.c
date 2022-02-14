
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_5__ {struct TYPE_5__* Next; int lpTarget; int lpSource; } ;
struct TYPE_4__ {TYPE_2__* Data; } ;
typedef TYPE_1__* PALIAS_HEADER ;
typedef TYPE_2__* PALIAS_ENTRY ;
typedef int* LPWSTR ;


 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int ) ;

UINT
FUNC_2(PALIAS_HEADER VAR_0, LPWSTR VAR_1, UINT VAR_2)
{
    PALIAS_ENTRY VAR_3 = VAR_0->Data;
    UINT VAR_4 = 0;
    UINT VAR_5, VAR_6;

    VAR_2 /= sizeof(WCHAR);
    while (VAR_3)
    {
        VAR_5 = FUNC_1(VAR_3->lpSource) + 1;
        VAR_6 = FUNC_1(VAR_3->lpTarget) + 1;
        if (VAR_4 + VAR_6 + VAR_5 >= VAR_2)
            break;

        FUNC_0(&VAR_1[VAR_4], VAR_3->lpSource);
        VAR_4 += VAR_5;
        VAR_1[VAR_4] = L'=';
        FUNC_0(&VAR_1[VAR_4], VAR_3->lpTarget);
        VAR_4 += VAR_6;

        VAR_3 = VAR_3->Next;
    }
    VAR_1[VAR_4] = L'\0';
    return VAR_4 * sizeof(WCHAR);
}
