
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int code; int idFrom; int hwndFrom; } ;
struct TYPE_6__ {int nCurrentTool; int hwndSelf; TYPE_1__* tools; } ;
struct TYPE_5__ {int uId; int hwnd; } ;
typedef TYPE_1__ TTTOOL_INFO ;
typedef TYPE_2__ TOOLTIPS_INFO ;
typedef TYPE_3__ NMHDR ;
typedef int LPARAM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_3 (char*,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_4 (TOOLTIPS_INFO *VAR_7)
{
    TTTOOL_INFO *VAR_8;
    NMHDR VAR_9;

    FUNC_3("Hide tooltip %d, %p.\n", VAR_7->nCurrentTool, VAR_7->hwndSelf);

    if (VAR_7->nCurrentTool == -1)
 return;

    VAR_8 = &VAR_7->tools[VAR_7->nCurrentTool];
    FUNC_0 (VAR_7->hwndSelf, VAR_1);

    VAR_9.hwndFrom = VAR_7->hwndSelf;
    VAR_9.idFrom = VAR_8->uId;
    VAR_9.code = VAR_5;
    FUNC_1 (VAR_8->hwnd, VAR_6, VAR_8->uId, (LPARAM)&VAR_9);

    VAR_7->nCurrentTool = -1;

    FUNC_2 (VAR_7->hwndSelf, VAR_0, 0, 0, 0, 0,
      VAR_4 | VAR_2 | VAR_3);
}
