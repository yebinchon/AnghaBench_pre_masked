
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* pszText; int cchTextMax; void* hItem; int mask; scalar_t__ lParam; } ;
typedef TYPE_1__ TVITEMW ;
typedef int* LPWSTR ;
typedef int HWND ;
typedef void* HTREEITEM ;
typedef scalar_t__ HKEY ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int* FUNC_1 (int ,int ,int*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 void* FUNC_3 (int ,void*) ;
 size_t FUNC_4 (int*) ;

__attribute__((used)) static BOOL FUNC_5(HWND VAR_4, HTREEITEM VAR_5, HKEY* VAR_6, LPWSTR* VAR_7, int* VAR_8, int* VAR_9)
{
    TVITEMW VAR_10;
    size_t VAR_11, VAR_12;
    LPWSTR VAR_13;

    VAR_10.mask = VAR_2;
    VAR_10.hItem = VAR_5;
    if (!FUNC_2(VAR_4, &VAR_10)) return VAR_0;

    if (VAR_10.lParam)
    {

        *VAR_6 = (HKEY)VAR_10.lParam;
        return VAR_1;
    }

    if(!FUNC_5(VAR_4, FUNC_3(VAR_4, VAR_5), VAR_6, VAR_7, VAR_8, VAR_9)) return VAR_0;
    if (*VAR_8)
    {
        (*VAR_7)[*VAR_8] = L'\\';
        ++(*VAR_8);
    }

    do
    {
        VAR_10.mask = VAR_3;
        VAR_10.hItem = VAR_5;
        VAR_10.pszText = *VAR_7 + *VAR_8;
        VAR_11 = *VAR_9 - *VAR_8;
        VAR_10.cchTextMax = (int) VAR_11;
        if (!FUNC_2(VAR_4, &VAR_10)) return VAR_0;
        VAR_12 = FUNC_4(VAR_10.pszText);
        if (VAR_12 < VAR_11 - 1)
        {
            *VAR_8 += (int) VAR_12;
            break;
        }
        VAR_13 = FUNC_1(FUNC_0(), 0, *VAR_7, *VAR_9 * 2);
        if (!VAR_13) return VAR_0;
        *VAR_7 = VAR_13;
        *VAR_9 *= 2;
    }
    while(VAR_1);

    return VAR_1;
}
