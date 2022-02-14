
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int nmce ;
typedef int WCHAR ;
struct TYPE_11__ {int * pszText; int * pszTemp; int lParam; } ;
struct TYPE_9__ {int mask; int * pszText; int iItem; int lParam; } ;
struct TYPE_10__ {TYPE_1__ ceItem; } ;
typedef TYPE_2__ NMCOMBOBOXEXW ;
typedef int * LPWSTR ;
typedef int LPSTR ;
typedef int * LPCWSTR ;
typedef int INT ;
typedef int COMBOEX_INFO ;
typedef TYPE_3__ CBE_ITEMDATA ;


 int * FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int const*,TYPE_3__*) ;
 int FUNC_3 (int const*,int ,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int * VAR_4 ;
 int FUNC_5 (int ,int ,int ,int,int *,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static LPCWSTR FUNC_8(const COMBOEX_INFO *VAR_5, CBE_ITEMDATA *VAR_6)
{
    NMCOMBOBOXEXW VAR_7;
    LPWSTR VAR_8, VAR_9;
    INT VAR_10;

    if (VAR_6->pszText != VAR_4)
 return VAR_6->pszText;

    FUNC_6(&VAR_7, sizeof(VAR_7));
    VAR_7.ceItem.mask = VAR_1;
    VAR_7.ceItem.lParam = VAR_6->lParam;
    VAR_7.ceItem.iItem = FUNC_2(VAR_5, VAR_6);
    FUNC_3(VAR_5, VAR_2, &VAR_7);

    if (FUNC_7(VAR_7.ceItem.pszText)) {
 VAR_10 = FUNC_5 (VAR_3, 0, (LPSTR)VAR_7.ceItem.pszText, -1, ((void*)0), 0);
        VAR_9 = FUNC_0 ((VAR_10 + 1)*sizeof(WCHAR));
 if (VAR_9)
     FUNC_5 (VAR_3, 0, (LPSTR)VAR_7.ceItem.pszText, -1, VAR_9, VAR_10);
 if (VAR_7.ceItem.mask & VAR_0) {
     FUNC_1(VAR_6);
     VAR_6->pszText = VAR_9;
 } else {
     FUNC_4(VAR_6->pszTemp);
     VAR_6->pszTemp = VAR_9;
 }
 VAR_8 = VAR_9;
    } else
 VAR_8 = VAR_7.ceItem.pszText;

    if (VAR_7.ceItem.mask & VAR_0)
 VAR_6->pszText = VAR_8;
    return VAR_8;
}
