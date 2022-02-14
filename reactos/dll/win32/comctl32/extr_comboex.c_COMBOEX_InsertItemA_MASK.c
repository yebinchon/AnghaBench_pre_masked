
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


 int * FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int,int *,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__ const*,int) ;

__attribute__((used)) static INT FUNC_6 (COMBOEX_INFO *VAR_2, COMBOBOXEXITEMA const *VAR_3)
{
    COMBOBOXEXITEMW VAR_4;
    LPWSTR VAR_5 = ((void*)0);
    INT VAR_6;

    FUNC_5(&VAR_4,VAR_3,sizeof(COMBOBOXEXITEMA));
    if (VAR_3->mask & VAR_0 && FUNC_4(VAR_3->pszText)) {
 INT VAR_7 = FUNC_3 (VAR_1, 0, VAR_3->pszText, -1, ((void*)0), 0);
        VAR_5 = FUNC_0 ((VAR_7 + 1)*sizeof(WCHAR));
 if (!VAR_5) return -1;
 FUNC_3 (VAR_1, 0, VAR_3->pszText, -1, VAR_5, VAR_7);
 VAR_4.pszText = VAR_5;
    }
    VAR_6 = FUNC_1(VAR_2, &VAR_4);

    FUNC_2(VAR_5);

    return VAR_6;
}
