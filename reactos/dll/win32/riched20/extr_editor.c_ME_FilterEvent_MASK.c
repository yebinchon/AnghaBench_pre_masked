
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* WPARAM ;
typedef int UINT ;
struct TYPE_7__ {int hwndParent; scalar_t__ hWnd; } ;
struct TYPE_5__ {int idFrom; int code; scalar_t__ hwndFrom; } ;
struct TYPE_6__ {void* wParam; int lParam; TYPE_1__ nmhdr; int msg; } ;
typedef TYPE_2__ MSGFILTER ;
typedef TYPE_3__ ME_TextEditor ;
typedef int LPARAM ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static BOOL
FUNC_2(ME_TextEditor *VAR_5, UINT VAR_6, WPARAM* VAR_7, LPARAM* VAR_8)
{
    MSGFILTER VAR_9;

    if (!VAR_5->hWnd || !VAR_5->hwndParent) return VAR_1;
    VAR_9.nmhdr.hwndFrom = VAR_5->hWnd;
    VAR_9.nmhdr.idFrom = FUNC_0(VAR_5->hWnd, VAR_2);
    VAR_9.nmhdr.code = VAR_0;
    VAR_9.msg = VAR_6;
    VAR_9.wParam = *VAR_7;
    VAR_9.lParam = *VAR_8;
    if (FUNC_1(VAR_5->hwndParent, VAR_4, VAR_9.nmhdr.idFrom, (LPARAM)&VAR_9))
        return VAR_1;
    *VAR_7 = VAR_9.wParam;
    *VAR_8 = VAR_9.lParam;
    VAR_9.wParam = *VAR_7;

    return VAR_3;
}
