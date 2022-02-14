
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwSize; int dwFadeTime; int dwFadeLevel; int dwAttackTime; int dwAttackLevel; } ;
typedef TYPE_1__* LPCDIENVELOPE ;
typedef int DIENVELOPE ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(LPCDIENVELOPE VAR_0)
{
    if (VAR_0->dwSize != sizeof(DIENVELOPE)) {
        FUNC_1("Non-standard DIENVELOPE structure size %d.\n", VAR_0->dwSize);
    }
    FUNC_0("Envelope has attack (level: %d time: %d), fade (level: %d time: %d)\n",
          VAR_0->dwAttackLevel, VAR_0->dwAttackTime, VAR_0->dwFadeLevel, VAR_0->dwFadeTime);
}
