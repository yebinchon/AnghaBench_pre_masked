
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int HotKey; } ;
typedef int LRESULT ;
typedef TYPE_1__ HOTKEY_INFO ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,TYPE_1__ const*,int ,int ) ;

__attribute__((used)) static LRESULT
FUNC_3(const HOTKEY_INFO *VAR_0)
{
    FUNC_2("(infoPtr=%p) Modifiers: 0x%x, Virtual Key: %d\n", VAR_0,
          FUNC_0(VAR_0->HotKey), FUNC_1(VAR_0->HotKey));
    return (LRESULT)VAR_0->HotKey;
}
