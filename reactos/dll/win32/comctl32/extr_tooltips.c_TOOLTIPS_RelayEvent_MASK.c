
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int message; int hwnd; int lParam; } ;
struct TYPE_11__ {short x; short y; } ;
struct TYPE_10__ {int nTool; int nCurrentTool; int nInitialTime; int hwndSelf; int bActive; int nAutoPopTime; int nReshowTime; } ;
typedef TYPE_1__ TOOLTIPS_INFO ;
typedef TYPE_2__ POINT ;
typedef int LRESULT ;
typedef TYPE_3__* LPMSG ;
typedef int INT ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,...) ;







 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static LRESULT
FUNC_9 (TOOLTIPS_INFO *VAR_3, LPMSG VAR_4)
{
    POINT VAR_5;
    INT VAR_6;

    if (!VAR_4) {
 FUNC_0("lpMsg == NULL\n");
 return 0;
    }

    switch (VAR_4->message) {
 case 134:
 case 133:
 case 132:
 case 131:
 case 129:
 case 128:
     FUNC_6 (VAR_3);
     break;

 case 130:
     VAR_5.x = (short)FUNC_3(VAR_4->lParam);
     VAR_5.y = (short)FUNC_1(VAR_4->lParam);
     VAR_6 = VAR_3->nTool;
     VAR_3->nTool = FUNC_5(VAR_3, VAR_4->hwnd,
             &VAR_5);
     FUNC_7("tool (%p) %d %d %d\n", VAR_3->hwndSelf, VAR_6,
    VAR_3->nTool, VAR_3->nCurrentTool);
            FUNC_7("WM_MOUSEMOVE (%p %s)\n", VAR_3->hwndSelf, FUNC_8(&VAR_5));

     if (VAR_3->nTool != VAR_6) {
         if(VAR_3->nTool == -1) {
      FUNC_6(VAR_3);
      FUNC_2(VAR_3->hwndSelf, VAR_0);
  } else if (VAR_6 == -1) {
      if(VAR_3->bActive) {
          FUNC_4(VAR_3->hwndSelf, VAR_2, VAR_3->nInitialTime, 0);
                        FUNC_7("timer 1 started\n");
      }
  } else {
      FUNC_6 (VAR_3);
      FUNC_2(VAR_3->hwndSelf, VAR_0);
      if(VAR_3->bActive) {
          FUNC_4 (VAR_3->hwndSelf, VAR_2, VAR_3->nReshowTime, 0);
                        FUNC_7("timer 1 started\n");
      }
  }
     } else if(VAR_3->nCurrentTool != -1) {
         FUNC_2(VAR_3->hwndSelf, VAR_1);
  FUNC_4(VAR_3->hwndSelf, VAR_1, VAR_3->nAutoPopTime, 0);
  FUNC_7("timer 2 restarted\n");
     } else if(VAR_3->nTool != -1 && VAR_3->bActive) {

  FUNC_4(VAR_3->hwndSelf, VAR_2, VAR_3->nInitialTime, 0);
                FUNC_7("timer 1 started\n");
     }
     break;
    }

    return 0;
}
