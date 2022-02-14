
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_5__ {int nTrackTool; int nTool; int uNumTools; int hwndSelf; TYPE_1__* tools; scalar_t__ bTrackActive; } ;
struct TYPE_4__ {int uFlags; } ;
typedef TYPE_2__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int INT ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static LRESULT
FUNC_2 (const TOOLTIPS_INFO *VAR_3, WPARAM VAR_4, LPARAM VAR_5)
{
    INT VAR_6 = (VAR_3->bTrackActive) ? VAR_3->nTrackTool : VAR_3->nTool;

    FUNC_1(" nTool=%d\n", VAR_6);

    if ((VAR_6 > -1) && (VAR_6 < VAR_3->uNumTools)) {
 if (VAR_3->tools[VAR_6].uFlags & VAR_1) {
     FUNC_1("-- in transparent mode\n");
     return VAR_0;
 }
    }

    return FUNC_0 (VAR_3->hwndSelf, VAR_2, VAR_4, VAR_5);
}
