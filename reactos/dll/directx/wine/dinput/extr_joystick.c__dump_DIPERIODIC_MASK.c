
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwPeriod; int dwPhase; int lOffset; int dwMagnitude; } ;
typedef TYPE_1__* LPCDIPERIODIC ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(LPCDIPERIODIC VAR_0)
{
    FUNC_0("Periodic force has magnitude %d, offset %d, phase %d, period %d\n",
          VAR_0->dwMagnitude, VAR_0->lOffset, VAR_0->dwPhase, VAR_0->dwPeriod);
}
