
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* WORD ;
struct TYPE_4__ {void* InvMod; void* InvComb; } ;
typedef TYPE_1__ HOTKEY_INFO ;


 int FUNC_0 (char*,TYPE_1__*,void*,void*) ;

__attribute__((used)) static void
FUNC_1(HOTKEY_INFO *VAR_0, WORD VAR_1, WORD VAR_2)
{
    VAR_0->InvComb = VAR_1;
    VAR_0->InvMod = VAR_2;
    FUNC_0("(infoPtr=%p) Invalid Modifers: 0x%x, If Invalid: 0x%x\n", VAR_0,
          VAR_0->InvComb, VAR_0->InvMod);
}
