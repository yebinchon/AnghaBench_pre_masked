
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int nclm ;
struct TYPE_10__ {int lfWeight; } ;
struct TYPE_9__ {int clrInfoText; int clrInfoBk; } ;
struct TYPE_8__ {int cbSize; TYPE_6__ lfStatusFont; } ;
struct TYPE_7__ {void* hTitleFont; void* hFont; int clrText; int clrBk; } ;
typedef TYPE_1__ TOOLTIPS_INFO ;
typedef TYPE_2__ NONCLIENTMETRICSW ;


 void* FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int,TYPE_2__*,int ) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void
FUNC_3 (TOOLTIPS_INFO *VAR_3)
{
    NONCLIENTMETRICSW VAR_4;

    VAR_3->clrBk = VAR_2.clrInfoBk;
    VAR_3->clrText = VAR_2.clrInfoText;

    FUNC_1 (VAR_3->hFont);
    VAR_4.cbSize = sizeof(VAR_4);
    FUNC_2 (VAR_1, sizeof(VAR_4), &VAR_4, 0);
    VAR_3->hFont = FUNC_0 (&VAR_4.lfStatusFont);

    FUNC_1 (VAR_3->hTitleFont);
    VAR_4.lfStatusFont.lfWeight = VAR_0;
    VAR_3->hTitleFont = FUNC_0 (&VAR_4.lfStatusFont);
}
