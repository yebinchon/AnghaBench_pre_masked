
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_8__ {int mask; int pszText; } ;
struct TYPE_7__ {int * pszText; } ;
typedef int * LPWSTR ;
typedef int INT ;
typedef int COMBOEX_INFO ;
typedef TYPE_1__ COMBOBOXEXITEMW ;
typedef TYPE_2__ COMBOBOXEXITEMA ;
typedef int BOOL ;


 int * FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int,int *,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__ const*,int) ;

__attribute__((used)) static BOOL FUNC_6 (COMBOEX_INFO *VAR_3, COMBOBOXEXITEMA const *VAR_4)
{
    COMBOBOXEXITEMW VAR_5;
    LPWSTR VAR_6 = ((void*)0);
    BOOL VAR_7;

    FUNC_5(&VAR_5, VAR_4, sizeof(COMBOBOXEXITEMA));
    if ((VAR_4->mask & VAR_0) && FUNC_4(VAR_4->pszText)) {
 INT VAR_8 = FUNC_3 (VAR_1, 0, VAR_4->pszText, -1, ((void*)0), 0);
        VAR_6 = FUNC_0 ((VAR_8 + 1)*sizeof(WCHAR));
 if (!VAR_6) return VAR_2;
 FUNC_3 (VAR_1, 0, VAR_4->pszText, -1, VAR_6, VAR_8);
 VAR_5.pszText = VAR_6;
    }
    VAR_7 = FUNC_1(VAR_3, &VAR_5);

    FUNC_2(VAR_6);

    return VAR_7;
}
