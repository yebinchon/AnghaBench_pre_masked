
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int cbSize; scalar_t__ dwItemData; int fMask; } ;
typedef TYPE_1__ MENUITEMINFOW ;
typedef int HWND ;
typedef int HMENU ;
typedef int CPlItem ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static CPlItem* FUNC_3(HWND VAR_2, UINT VAR_3)
{
    HMENU VAR_4, VAR_5;
    MENUITEMINFOW VAR_6;


    VAR_4 = FUNC_0(VAR_2);

    if (!VAR_4)
        return ((void*)0);

    VAR_5 = FUNC_2(VAR_4, 0);

    if (!VAR_5)
        return ((void*)0);

    VAR_6.cbSize = sizeof(MENUITEMINFOW);
    VAR_6.fMask = VAR_1;

    if (!FUNC_1(VAR_5, VAR_3, VAR_0, &VAR_6))
        return ((void*)0);

    return (CPlItem *) VAR_6.dwItemData;
}
