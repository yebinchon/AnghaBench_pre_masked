
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lf ;
struct TYPE_7__ {int lfWeight; } ;
struct TYPE_6__ {int nCurrentTool; void* hTitleFont; void* hFont; } ;
typedef TYPE_1__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef TYPE_2__ LOGFONTW ;
typedef int HFONT ;
typedef scalar_t__ BOOL ;


 void* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int,TYPE_2__*) ;

__attribute__((used)) static LRESULT
FUNC_4 (TOOLTIPS_INFO *VAR_1, HFONT VAR_2, BOOL VAR_3)
{
    LOGFONTW VAR_4;

    if(!FUNC_3(VAR_2, sizeof(VAR_4), &VAR_4))
        return 0;

    FUNC_1 (VAR_1->hFont);
    VAR_1->hFont = FUNC_0(&VAR_4);

    FUNC_1 (VAR_1->hTitleFont);
    VAR_4.lfWeight = VAR_0;
    VAR_1->hTitleFont = FUNC_0(&VAR_4);

    if (VAR_3 && VAR_1->nCurrentTool != -1)
        FUNC_2("full redraw needed\n");

    return 0;
}
