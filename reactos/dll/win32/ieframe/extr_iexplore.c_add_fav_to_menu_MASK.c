
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int item ;
typedef int WCHAR ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_3__ {int cbSize; int fMask; int wID; scalar_t__ dwItemData; scalar_t__ dwTypeData; int fType; } ;
typedef TYPE_1__ MENUITEMINFOW ;
typedef scalar_t__ LPWSTR ;
typedef int LPCWSTR ;
typedef int HMENU ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int ,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(HMENU VAR_8, HMENU VAR_9, LPWSTR VAR_10, LPCWSTR VAR_11)
{
    MENUITEMINFOW VAR_12;

    int VAR_13 = FUNC_2(VAR_8) - 2;
    LPWSTR VAR_14;

    if(VAR_13 > (VAR_1 - VAR_0))
    {
        FUNC_0("Add support for more than %d Favorites\n", VAR_13);
        return;
    }

    VAR_14 = FUNC_3((FUNC_5(VAR_11) + 1) * sizeof(WCHAR));

    if(!VAR_14)
        return;

    FUNC_4(VAR_14, VAR_11);

    VAR_12.cbSize = sizeof(VAR_12);
    VAR_12.fMask = VAR_4 | VAR_6 | VAR_3 | VAR_5;
    VAR_12.fType = VAR_2;
    VAR_12.dwTypeData = VAR_10;
    VAR_12.wID = VAR_0 + VAR_13;
    VAR_12.dwItemData = (ULONG_PTR)VAR_14;
    FUNC_1(VAR_9, -1, VAR_7, &VAR_12);
}
