
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int nTrackTool; int bTrackActive; } ;
struct TYPE_8__ {scalar_t__ cbSize; } ;
typedef int TTTOOLINFOW ;
typedef TYPE_1__ TTTOOLINFOA ;
typedef TYPE_2__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int const*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static LRESULT
FUNC_4 (TOOLTIPS_INFO *VAR_3, BOOL VAR_4, const TTTOOLINFOA *VAR_5)
{
    if (VAR_4) {

 if (!VAR_5) return 0;
 if (VAR_5->cbSize < VAR_2)
     return VAR_0;


 VAR_3->nTrackTool = FUNC_0 (VAR_3, (const TTTOOLINFOW*)VAR_5);
 if (VAR_3->nTrackTool != -1) {
     FUNC_3("activated\n");
     VAR_3->bTrackActive = VAR_1;
     FUNC_2 (VAR_3);
 }
    }
    else {

 FUNC_1 (VAR_3);

 VAR_3->bTrackActive = VAR_0;
 VAR_3->nTrackTool = -1;

        FUNC_3("deactivated\n");
    }

    return 0;
}
