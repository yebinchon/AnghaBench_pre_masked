
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {int id; int hwnd; } ;
typedef TYPE_3__ customctrl ;
typedef scalar_t__ UINT ;
struct TYPE_22__ {int dlg_hwnd; } ;
struct TYPE_17__ {int bottom; } ;
struct TYPE_16__ {int hwndFrom; } ;
struct TYPE_21__ {TYPE_2__ rcButton; TYPE_1__ hdr; } ;
struct TYPE_20__ {int y; int x; int member_1; int member_0; } ;
struct TYPE_19__ {scalar_t__ dwData; } ;
typedef TYPE_4__ TBBUTTON ;
typedef TYPE_5__ POINT ;
typedef TYPE_6__ NMTOOLBARW ;
typedef int LRESULT ;
typedef scalar_t__ LPARAM ;
typedef int HMENU ;
typedef TYPE_7__ FileDialogImpl ;


 int FUNC_0 (int ,TYPE_5__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,TYPE_7__*,TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_5 (TYPE_7__*,int ) ;
 int FUNC_6 (TYPE_7__*,int ,scalar_t__) ;
 TYPE_3__* FUNC_7 (TYPE_7__*,int ) ;

__attribute__((used)) static LRESULT FUNC_8(FileDialogImpl *VAR_3, LPARAM VAR_4)
{
    NMTOOLBARW *VAR_5 = (NMTOOLBARW*)VAR_4;
    customctrl *VAR_6 = FUNC_7(VAR_3, FUNC_1(VAR_5->hdr.hwndFrom));
    POINT VAR_7 = { 0, VAR_5->rcButton.bottom };
    TBBUTTON VAR_8;
    UINT VAR_9;

    FUNC_3("%p, %p (%lx)\n", VAR_3, VAR_6, VAR_4);

    if(VAR_6)
    {
        FUNC_5(VAR_3,VAR_6->id);

        FUNC_2(VAR_6->hwnd, VAR_1, 0, (LPARAM)&VAR_8);
        FUNC_0(VAR_6->hwnd, &VAR_7);
        VAR_9 = FUNC_4((HMENU)VAR_8.dwData, VAR_2, VAR_7.x, VAR_7.y, 0, VAR_3->dlg_hwnd, ((void*)0));
        if(VAR_9)
            FUNC_6(VAR_3, VAR_6->id, VAR_9);
    }

    return VAR_0;
}
