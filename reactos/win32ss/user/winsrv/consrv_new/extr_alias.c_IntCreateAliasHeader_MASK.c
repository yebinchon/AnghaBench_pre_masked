
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_4__ {int * Next; int * Data; scalar_t__ lpExeName; } ;
typedef int PWCHAR ;
typedef TYPE_1__* PALIAS_HEADER ;
typedef scalar_t__ LPCWSTR ;
typedef int ALIAS_HEADER ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

PALIAS_HEADER
FUNC_3(LPCWSTR VAR_0)
{
    PALIAS_HEADER VAR_1;
    UINT VAR_2 = FUNC_2(VAR_0) + 1;

    VAR_1 = FUNC_0(0, sizeof(ALIAS_HEADER) + sizeof(WCHAR) * VAR_2);
    if (!VAR_1) return VAR_1;

    VAR_1->lpExeName = (LPCWSTR)(VAR_1 + 1);
    FUNC_1((PWCHAR)VAR_1->lpExeName, VAR_0);
    VAR_1->Data = ((void*)0);
    VAR_1->Next = ((void*)0);
    return VAR_1;
}
