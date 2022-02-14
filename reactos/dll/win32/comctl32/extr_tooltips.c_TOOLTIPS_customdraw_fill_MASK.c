
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int idFrom; int code; int hwndFrom; } ;
struct TYPE_10__ {int rc; int hdc; TYPE_1__ hdr; } ;
struct TYPE_13__ {TYPE_2__ nmcd; int uDrawFlags; } ;
struct TYPE_12__ {int nCurrentTool; TYPE_3__* tools; int hwndSelf; } ;
struct TYPE_11__ {int uId; } ;
typedef TYPE_3__ TTTOOL_INFO ;
typedef TYPE_4__ TOOLTIPS_INFO ;
typedef int RECT ;
typedef TYPE_5__ NMTTCUSTOMDRAW ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int) ;

__attribute__((used)) static void
FUNC_1(const TOOLTIPS_INFO *VAR_1, NMTTCUSTOMDRAW *VAR_2,
                         HDC VAR_3, const RECT *VAR_4, UINT VAR_5)
{
    FUNC_0(VAR_2, sizeof(NMTTCUSTOMDRAW));
    VAR_2->uDrawFlags = VAR_5;
    VAR_2->nmcd.hdr.hwndFrom = VAR_1->hwndSelf;
    VAR_2->nmcd.hdr.code = VAR_0;
    if (VAR_1->nCurrentTool != -1) {
        TTTOOL_INFO *VAR_6 = &VAR_1->tools[VAR_1->nCurrentTool];
        VAR_2->nmcd.hdr.idFrom = VAR_6->uId;
    }
    VAR_2->nmcd.hdc = VAR_3;
    VAR_2->nmcd.rc = *VAR_4;

}
