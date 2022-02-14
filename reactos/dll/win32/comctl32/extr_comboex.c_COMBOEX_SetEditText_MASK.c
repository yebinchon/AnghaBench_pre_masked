
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int mask; } ;
struct TYPE_7__ {int hwndEdit; } ;
typedef int LPARAM ;
typedef TYPE_1__ COMBOEX_INFO ;
typedef TYPE_2__ CBE_ITEMDATA ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2 (const COMBOEX_INFO *VAR_3, CBE_ITEMDATA *VAR_4)
{
    if (!VAR_3->hwndEdit) return;

    if (VAR_4->mask & VAR_0) {
 FUNC_1 (VAR_3->hwndEdit, VAR_2, 0, (LPARAM)FUNC_0(VAR_3, VAR_4));
 FUNC_1 (VAR_3->hwndEdit, VAR_1, 0, 0);
 FUNC_1 (VAR_3->hwndEdit, VAR_1, 0, -1);
    }
}
