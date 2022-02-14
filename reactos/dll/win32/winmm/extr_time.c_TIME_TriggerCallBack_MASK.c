
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wFlags; int (* lpFunc ) (int ,int ,int ,int ,int ) ;int dwUser; int wTimerID; scalar_t__ dwTriggerTime; } ;
typedef TYPE_1__* LPWINE_TIMERENTRY ;
typedef int HANDLE ;


 int FUNC_0 (char*,int,int (*) (int ,int ,int ,int ,int )) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;



 int FUNC_5 (char*,int ,int (*) (int ,int ,int ,int ,int ),int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(LPWINE_TIMERENTRY VAR_0)
{
    FUNC_5("%04lx:CallBack => lpFunc=%p wTimerID=%04X dwUser=%08lX dwTriggerTime %ld(delta %ld)\n",
   FUNC_1(), VAR_0->lpFunc, VAR_0->wTimerID, VAR_0->dwUser,
          VAR_0->dwTriggerTime, FUNC_2() - VAR_0->dwTriggerTime);






    switch (VAR_0->wFlags & 0x30) {
    case 128:
     (VAR_0->lpFunc)(VAR_0->wTimerID, 0, VAR_0->dwUser, 0, 0);
 break;
    case 129:
 FUNC_4((HANDLE)VAR_0->lpFunc);
 break;
    case 130:
 FUNC_3((HANDLE)VAR_0->lpFunc);
 break;
    default:
 FUNC_0("Unknown callback type 0x%04x for mmtime callback (%p), ignored.\n",
       VAR_0->wFlags, VAR_0->lpFunc);
 break;
    }
}
