
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nTool; int nReshowTime; int hwndSelf; int bActive; int nCurrentTool; } ;
typedef TYPE_1__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef int INT ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;



 int FUNC_1 (int ,int const) ;
 int FUNC_2 (int ,int const,int ,int ) ;
 void* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_7 (TOOLTIPS_INFO *VAR_2, INT VAR_3)
{
    INT VAR_4;

    FUNC_6("timer %d (%p) expired\n", VAR_3, VAR_2->hwndSelf);

    switch (VAR_3) {
    case 128:
        FUNC_1 (VAR_2->hwndSelf, 128);
 VAR_4 = VAR_2->nTool;
 if ((VAR_2->nTool = FUNC_3 (VAR_2, VAR_1)) == VAR_4)
     FUNC_5 (VAR_2, VAR_0);
 break;

    case 129:
        FUNC_4 (VAR_2);
 break;

    case 130:
        VAR_4 = VAR_2->nTool;
 VAR_2->nTool = FUNC_3 (VAR_2, VAR_0);
 FUNC_6("tool (%p) %d %d %d\n", VAR_2->hwndSelf, VAR_4,
       VAR_2->nTool, VAR_2->nCurrentTool);
 if (VAR_2->nTool != VAR_4) {
     if(VAR_2->nTool == -1) {
         FUNC_4(VAR_2);
  FUNC_1(VAR_2->hwndSelf, 130);
     } else if (VAR_4 == -1) {
         FUNC_0("How did this happen?\n");
     } else {
         FUNC_4 (VAR_2);
  FUNC_1(VAR_2->hwndSelf, 130);
  if(VAR_2->bActive) {
      FUNC_2 (VAR_2->hwndSelf, 128, VAR_2->nReshowTime, 0);
      FUNC_6("timer 1 started!\n");
  }
     }
 }
 break;

    default:
        FUNC_0("Unknown timer id %d\n", VAR_3);
 break;
    }
    return 0;
}
