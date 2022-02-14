
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nMaxTipWidth; int nTool; int nCurrentTool; int nTrackTool; int hwndSelf; int bTrackActive; int bActive; } ;
typedef TYPE_1__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef int HWND ;
typedef int DWORD_PTR ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static LRESULT
FUNC_5 (HWND VAR_7)
{
    TOOLTIPS_INFO *VAR_8;


    VAR_8 = FUNC_0 (sizeof(TOOLTIPS_INFO));
    FUNC_1 (VAR_7, 0, (DWORD_PTR)VAR_8);


    VAR_8->bActive = VAR_5;
    VAR_8->bTrackActive = VAR_0;

    VAR_8->nMaxTipWidth = -1;
    VAR_8->nTool = -1;
    VAR_8->nCurrentTool = -1;
    VAR_8->nTrackTool = -1;
    VAR_8->hwndSelf = VAR_7;


    FUNC_3(VAR_8);

    FUNC_4(VAR_8, VAR_6, 0);

    FUNC_2 (VAR_7, VAR_1, 0, 0, 0, 0, VAR_4 | VAR_2 | VAR_3);

    return 0;
}
