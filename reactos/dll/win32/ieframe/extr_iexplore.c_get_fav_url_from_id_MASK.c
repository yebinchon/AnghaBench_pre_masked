
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int item ;
typedef int UINT ;
struct TYPE_3__ {int cbSize; int dwItemData; int fMask; } ;
typedef TYPE_1__ MENUITEMINFOW ;
typedef int * LPWSTR ;
typedef int HMENU ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static LPWSTR FUNC_1(HMENU VAR_2, UINT VAR_3)
{
    MENUITEMINFOW VAR_4;

    VAR_4.cbSize = sizeof(VAR_4);
    VAR_4.fMask = VAR_1;

    if(!FUNC_0(VAR_2, VAR_3, VAR_0, &VAR_4))
        return ((void*)0);

    return (LPWSTR)VAR_4.dwItemData;
}
