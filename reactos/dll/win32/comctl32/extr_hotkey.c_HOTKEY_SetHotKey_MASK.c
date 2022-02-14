
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_4__ {int hwndSelf; int HotKey; int ScanCode; } ;
typedef TYPE_1__ HOTKEY_INFO ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,TYPE_1__*,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(HOTKEY_INFO *VAR_1, WORD VAR_2)
{
    VAR_1->HotKey = VAR_2;
    VAR_1->ScanCode =
        FUNC_3(0, FUNC_4(FUNC_2(VAR_1->HotKey), 0));
    FUNC_5("(infoPtr=%p hotKey=%x) Modifiers: 0x%x, Virtual Key: %d\n", VAR_1,
          VAR_2, FUNC_0(VAR_1->HotKey), FUNC_2(VAR_1->HotKey));
    FUNC_1(VAR_1->hwndSelf, ((void*)0), VAR_0);
}
