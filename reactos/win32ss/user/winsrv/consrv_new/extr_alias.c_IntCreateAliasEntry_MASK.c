
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_4__ {int * Next; scalar_t__ lpTarget; scalar_t__ lpSource; } ;
typedef TYPE_1__* PALIAS_ENTRY ;
typedef int LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef int ALIAS_ENTRY ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

PALIAS_ENTRY
FUNC_3(LPCWSTR VAR_0, LPCWSTR VAR_1)
{
    UINT VAR_2;
    UINT VAR_3;
    PALIAS_ENTRY VAR_4;

    VAR_2 = FUNC_2(VAR_0) + 1;
    VAR_3 = FUNC_2(VAR_1) + 1;

    VAR_4 = FUNC_0(0, sizeof(ALIAS_ENTRY) + sizeof(WCHAR) * (VAR_2 + VAR_3));
    if (!VAR_4) return VAR_4;

    VAR_4->lpSource = (LPCWSTR)(VAR_4 + 1);
    FUNC_1((LPWSTR)VAR_4->lpSource, VAR_0);
    VAR_4->lpTarget = VAR_4->lpSource + VAR_2;
    FUNC_1((LPWSTR)VAR_4->lpTarget, VAR_1);
    VAR_4->Next = ((void*)0);

    return VAR_4;
}
