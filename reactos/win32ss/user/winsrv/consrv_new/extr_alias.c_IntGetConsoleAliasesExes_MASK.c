
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_3__ {struct TYPE_3__* Next; int lpExeName; } ;
typedef TYPE_1__* PALIAS_HEADER ;
typedef int* LPWSTR ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int ) ;

UINT
FUNC_3(PALIAS_HEADER VAR_0, LPWSTR VAR_1, UINT VAR_2)
{
    UINT VAR_3 = 0;
    UINT VAR_4;

    VAR_2 /= sizeof(WCHAR);
    while (VAR_0)
    {
        VAR_4 = FUNC_2(VAR_0->lpExeName) + 1;
        if (VAR_2 > VAR_3 + VAR_4)
        {
            FUNC_1(&VAR_1[VAR_3], VAR_0->lpExeName);
            VAR_3 += VAR_4;
        }
        else
        {
            break;
        }
        VAR_0 = VAR_0->Next;
    }
    VAR_4 = FUNC_0(VAR_3+1, VAR_2);
    VAR_1[VAR_4] = L'\0';
    return VAR_4 * sizeof(WCHAR);
}
