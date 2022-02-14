
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int code; int idFrom; int hwndFrom; } ;
struct TYPE_6__ {int nTrackTool; int hwndSelf; TYPE_1__* tools; } ;
struct TYPE_5__ {int uId; int hwnd; } ;
typedef TYPE_1__ TTTOOL_INFO ;
typedef TYPE_2__ TOOLTIPS_INFO ;
typedef TYPE_3__ NMHDR ;
typedef int LPARAM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (char*,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3 (const TOOLTIPS_INFO *VAR_6)
{
    TTTOOL_INFO *VAR_7;
    NMHDR VAR_8;

    FUNC_2("hide tracking tooltip %d\n", VAR_6->nTrackTool);

    if (VAR_6->nTrackTool == -1)
 return;

    VAR_7 = &VAR_6->tools[VAR_6->nTrackTool];

    VAR_8.hwndFrom = VAR_6->hwndSelf;
    VAR_8.idFrom = VAR_7->uId;
    VAR_8.code = VAR_4;
    FUNC_0 (VAR_7->hwnd, VAR_5, VAR_7->uId, (LPARAM)&VAR_8);

    FUNC_1 (VAR_6->hwndSelf, VAR_0, 0, 0, 0, 0,
      VAR_3 | VAR_1 | VAR_2);
}
