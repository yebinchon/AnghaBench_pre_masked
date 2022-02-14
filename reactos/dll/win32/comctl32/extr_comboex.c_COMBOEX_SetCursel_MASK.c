
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int pszText; } ;
struct TYPE_8__ {int hwndCombo; int selected; } ;
typedef int INT_PTR ;
typedef scalar_t__ INT ;
typedef TYPE_1__ COMBOEX_INFO ;
typedef TYPE_2__ CBE_ITEMDATA ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static INT FUNC_5 (COMBOEX_INFO *VAR_1, INT_PTR VAR_2)
{
    CBE_ITEMDATA *VAR_3;
    INT VAR_4;

    if (!(VAR_3 = FUNC_0(VAR_1, VAR_2)))
 return FUNC_2 (VAR_1->hwndCombo, VAR_0, VAR_2, 0);

    FUNC_3("selecting item %ld text=%s\n", VAR_2, FUNC_4(VAR_3->pszText));
    VAR_1->selected = VAR_2;

    VAR_4 = (INT)FUNC_2 (VAR_1->hwndCombo, VAR_0, VAR_2, 0);
    FUNC_1 (VAR_1, VAR_3);
    return VAR_4;
}
