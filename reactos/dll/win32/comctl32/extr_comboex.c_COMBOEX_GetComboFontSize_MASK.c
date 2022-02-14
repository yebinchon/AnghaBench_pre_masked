
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_7__ {int hwndCombo; } ;
struct TYPE_6__ {int cy; } ;
typedef TYPE_1__ SIZE ;
typedef scalar_t__ HFONT ;
typedef int HDC ;
typedef TYPE_2__ COMBOEX_INFO ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (char*,scalar_t__,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6 (const COMBOEX_INFO *VAR_1, SIZE *VAR_2)
{
    static const WCHAR VAR_3[] = { 'A', 0 };
    HFONT VAR_4, VAR_5;
    HDC VAR_6;

    VAR_6 = FUNC_0 (0);
    VAR_4 = (HFONT)FUNC_4 (VAR_1->hwndCombo, VAR_0, 0, 0);
    VAR_5 = FUNC_3 (VAR_6, VAR_4);
    FUNC_1 (VAR_6, VAR_3, 1, VAR_2);
    FUNC_3 (VAR_6, VAR_5);
    FUNC_2 (0, VAR_6);
    FUNC_5("selected font hwnd=%p, height=%d\n", VAR_4, VAR_2->cy);
}
