
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int InvComb; int CurrMod; } ;
typedef TYPE_1__ HOTKEY_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_12 ;

__attribute__((used)) static BOOL
FUNC_2(const HOTKEY_INFO *VAR_13)
{
    FUNC_1("(infoPtr=%p)\n", VAR_13);
    if((VAR_13->InvComb & VAR_4) && !VAR_13->CurrMod)
 return VAR_12;
    if((VAR_13->InvComb & VAR_5) && FUNC_0(VAR_11))
 return VAR_12;
    if((VAR_13->InvComb & VAR_2) && FUNC_0(VAR_10))
 return VAR_12;
    if((VAR_13->InvComb & VAR_1) && FUNC_0(VAR_9))
 return VAR_12;
    if((VAR_13->InvComb & VAR_7) &&
       FUNC_0(VAR_11 | VAR_10))
 return VAR_12;
    if((VAR_13->InvComb & VAR_6) && FUNC_0(VAR_11 | VAR_9))
 return VAR_12;
    if((VAR_13->InvComb & VAR_3) &&
       FUNC_0(VAR_10 | VAR_9))
 return VAR_12;
    if((VAR_13->InvComb & VAR_8) &&
       FUNC_0(VAR_11 | VAR_10 | VAR_9))
 return VAR_12;

    FUNC_1("() Modifiers are valid\n");
    return VAR_0;
}
