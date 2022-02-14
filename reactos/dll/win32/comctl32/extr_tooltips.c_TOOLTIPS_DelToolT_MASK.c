
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int uNumTools; int nTool; int nTrackTool; int nCurrentTool; TYPE_1__* tools; } ;
struct TYPE_15__ {scalar_t__ cbSize; } ;
struct TYPE_14__ {scalar_t__ lpszText; } ;
typedef TYPE_1__ TTTOOL_INFO ;
typedef TYPE_2__ TTTOOLINFOW ;
typedef TYPE_3__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_3__*,TYPE_2__ const*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static LRESULT
FUNC_8 (TOOLTIPS_INFO *VAR_3, const TTTOOLINFOW *VAR_4, BOOL VAR_5)
{
    TTTOOL_INFO *VAR_6;
    INT VAR_7;

    if (!VAR_4) return 0;
    if (VAR_5 && VAR_4->cbSize > VAR_1 &&
               VAR_4->cbSize != VAR_2)
 return 0;
    if (VAR_3->uNumTools == 0)
 return 0;

    VAR_7 = FUNC_3 (VAR_3, VAR_4);

    FUNC_6("tool %d\n", VAR_7);

    if (VAR_7 == -1)
        return 0;


    FUNC_4(VAR_3);


    VAR_6 = &VAR_3->tools[VAR_7];
    if (VAR_6->lpszText) {
 if ( (VAR_6->lpszText != VAR_0) &&
      !FUNC_2(VAR_6->lpszText) )
     FUNC_1 (VAR_6->lpszText);
    }

    FUNC_5 (VAR_6);


    if (VAR_3->uNumTools == 1) {
 FUNC_1 (VAR_3->tools);
 VAR_3->tools = ((void*)0);
    }
    else {
 TTTOOL_INFO *VAR_8 = VAR_3->tools;
 VAR_3->tools =
     FUNC_0 (sizeof(TTTOOL_INFO) * (VAR_3->uNumTools - 1));

 if (VAR_7 > 0)
     FUNC_7 (&VAR_3->tools[0], &VAR_8[0],
      VAR_7 * sizeof(TTTOOL_INFO));

 if (VAR_7 < VAR_3->uNumTools - 1)
     FUNC_7 (&VAR_3->tools[VAR_7], &VAR_8[VAR_7 + 1],
      (VAR_3->uNumTools - VAR_7 - 1) * sizeof(TTTOOL_INFO));

 FUNC_1 (VAR_8);
    }




    if (VAR_3->nTool == VAR_7)

        VAR_3->nTool = -1;
    else if (VAR_3->nTool > VAR_7)
        VAR_3->nTool--;

    if (VAR_3->nTrackTool == VAR_7)

        VAR_3->nTrackTool = -1;
    else if (VAR_3->nTrackTool > VAR_7)
        VAR_3->nTrackTool--;

    if (VAR_3->nCurrentTool == VAR_7)

        VAR_3->nCurrentTool = -1;
    else if (VAR_3->nCurrentTool > VAR_7)
        VAR_3->nCurrentTool--;

    VAR_3->uNumTools--;

    return 0;
}
