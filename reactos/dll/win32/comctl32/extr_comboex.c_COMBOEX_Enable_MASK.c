
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hwndSelf; scalar_t__ hwndCombo; scalar_t__ hwndEdit; } ;
typedef int LRESULT ;
typedef TYPE_1__ COMBOEX_INFO ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (char*,int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static LRESULT FUNC_3 (COMBOEX_INFO *VAR_1, BOOL VAR_2)
{
    FUNC_2("hwnd=%p, enable=%s\n", VAR_1->hwndSelf, VAR_2 ? "TRUE":"FALSE");

    if (VAR_1->hwndEdit)
       FUNC_0(VAR_1->hwndEdit, VAR_2);

    FUNC_0(VAR_1->hwndCombo, VAR_2);


    FUNC_1(VAR_1->hwndSelf, ((void*)0), VAR_0);

    return 1;
}
