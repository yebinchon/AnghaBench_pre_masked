
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct taskdialog_template_desc {TYPE_1__* taskconfig; } ;
typedef int info ;
struct TYPE_8__ {unsigned int left; unsigned int right; int bottom; int top; } ;
struct TYPE_9__ {int cbSize; TYPE_2__ rcWork; } ;
struct TYPE_7__ {int dwFlags; scalar_t__ hwndParent; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ MONITORINFO ;
typedef int HMONITOR ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (scalar_t__,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct taskdialog_template_desc const*,unsigned int*,int *) ;

__attribute__((used)) static unsigned int FUNC_5(const struct taskdialog_template_desc *VAR_2, RECT *VAR_3)
{
    HMONITOR VAR_4 = FUNC_3(VAR_2->taskconfig->hwndParent ? VAR_2->taskconfig->hwndParent : FUNC_0(),
            VAR_0);
    MONITORINFO VAR_5;

    VAR_5.cbSize = sizeof(VAR_5);
    FUNC_1(VAR_4, &VAR_5);

    if (VAR_2->taskconfig->dwFlags & VAR_1 && VAR_2->taskconfig->hwndParent)
        FUNC_2(VAR_2->taskconfig->hwndParent, VAR_3);
    else
        *VAR_3 = VAR_5.rcWork;

    FUNC_4(VAR_2, &VAR_3->left, &VAR_3->top);
    FUNC_4(VAR_2, &VAR_3->right, &VAR_3->bottom);

    FUNC_4(VAR_2, &VAR_5.rcWork.left, &VAR_5.rcWork.top);
    FUNC_4(VAR_2, &VAR_5.rcWork.right, &VAR_5.rcWork.bottom);
    return VAR_5.rcWork.right - VAR_5.rcWork.left;
}
