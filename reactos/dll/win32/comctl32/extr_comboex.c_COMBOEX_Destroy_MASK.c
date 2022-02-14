
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hwndSelf; scalar_t__ defaultFont; int edit; scalar_t__ hwndEdit; scalar_t__ hwndCombo; } ;
typedef int LRESULT ;
typedef TYPE_1__ COMBOEX_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static LRESULT FUNC_6 (COMBOEX_INFO *VAR_4)
{
    if (VAR_4->hwndCombo)
        FUNC_5(VAR_4->hwndCombo, VAR_0, VAR_2, 0);

    if (VAR_4->hwndEdit)
        FUNC_5(VAR_4->hwndEdit, VAR_1, VAR_3, 0);

    FUNC_0 (&VAR_4->edit);
    FUNC_1 (VAR_4);

    if (VAR_4->defaultFont)
 FUNC_2 (VAR_4->defaultFont);

    FUNC_4 (VAR_4->hwndSelf, 0, 0);


    FUNC_3 (VAR_4);

    return 0;
}
