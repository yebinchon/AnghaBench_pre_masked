
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct testwindow_info {int edge; TYPE_1__ allocated_rect; TYPE_1__ desired_rect; scalar_t__ to_be_deleted; int registered; } ;
typedef int abd ;
struct TYPE_5__ {int cbSize; int uEdge; TYPE_1__ rc; int hWnd; } ;
typedef int HWND ;
typedef scalar_t__ BOOL ;
typedef TYPE_2__ APPBARDATA ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(HWND VAR_4)
{
    struct testwindow_info* VAR_5 = (struct testwindow_info*)FUNC_0(VAR_4, VAR_2);
    APPBARDATA VAR_6;
    BOOL VAR_7;

    FUNC_3(VAR_5 != ((void*)0), "got unexpected ABN_POSCHANGED notification\n");

    if (!VAR_5 || !VAR_5->registered)
    {
        return;
    }

    if (VAR_5->to_be_deleted)
    {
        FUNC_4("Some Win95 and NT4 systems send messages to removed taskbars\n");
        return;
    }

    VAR_6.cbSize = sizeof(VAR_6);
    VAR_6.hWnd = VAR_4;
    VAR_6.uEdge = VAR_5->edge;
    VAR_6.rc = VAR_5->desired_rect;
    VAR_7 = FUNC_2(VAR_0, &VAR_6);
    FUNC_3(VAR_7 == VAR_3, "SHAppBarMessage returned %i\n", VAR_7);
    switch (VAR_5->edge)
    {
        case 131:
            FUNC_3(VAR_5->desired_rect.top == VAR_6.rc.top, "ABM_QUERYPOS changed top of rect from %i to %i\n", VAR_5->desired_rect.top, VAR_6.rc.top);
            VAR_6.rc.top = VAR_6.rc.bottom - (VAR_5->desired_rect.bottom - VAR_5->desired_rect.top);
            break;
        case 130:
            FUNC_3(VAR_5->desired_rect.right == VAR_6.rc.right, "ABM_QUERYPOS changed right of rect from %i to %i\n", VAR_5->desired_rect.right, VAR_6.rc.right);
            VAR_6.rc.right = VAR_6.rc.left + (VAR_5->desired_rect.right - VAR_5->desired_rect.left);
            break;
        case 129:
            FUNC_3(VAR_5->desired_rect.left == VAR_6.rc.left, "ABM_QUERYPOS changed left of rect from %i to %i\n", VAR_5->desired_rect.left, VAR_6.rc.left);
            VAR_6.rc.left = VAR_6.rc.right - (VAR_5->desired_rect.right - VAR_5->desired_rect.left);
            break;
        case 128:
            FUNC_3(VAR_5->desired_rect.bottom == VAR_6.rc.bottom, "ABM_QUERYPOS changed bottom of rect from %i to %i\n", VAR_5->desired_rect.bottom, VAR_6.rc.bottom);
            VAR_6.rc.bottom = VAR_6.rc.top + (VAR_5->desired_rect.bottom - VAR_5->desired_rect.top);
            break;
    }

    VAR_7 = FUNC_2(VAR_1, &VAR_6);
    FUNC_3(VAR_7 == VAR_3, "SHAppBarMessage returned %i\n", VAR_7);

    VAR_5->allocated_rect = VAR_6.rc;
    FUNC_1(VAR_4, VAR_6.rc.left, VAR_6.rc.top, VAR_6.rc.right-VAR_6.rc.left, VAR_6.rc.bottom-VAR_6.rc.top, VAR_3);
}
