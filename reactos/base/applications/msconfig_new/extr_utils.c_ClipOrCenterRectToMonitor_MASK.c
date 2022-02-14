
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mi ;
typedef int VOID ;
typedef int UINT ;
struct TYPE_9__ {int right; int left; int bottom; int top; } ;
struct TYPE_7__ {int left; int right; int top; int bottom; } ;
struct TYPE_8__ {int cbSize; TYPE_1__ rcMonitor; TYPE_1__ rcWork; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ MONITORINFO ;
typedef TYPE_3__* LPRECT ;
typedef int HMONITOR ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int,int) ;

VOID FUNC_4(LPRECT VAR_3, UINT VAR_4)
{
    HMONITOR VAR_5;
    MONITORINFO VAR_6;
    RECT VAR_7;
    int VAR_8 = VAR_3->right - VAR_3->left;
    int VAR_9 = VAR_3->bottom - VAR_3->top;




    VAR_5 = FUNC_1(VAR_3, VAR_1);




    VAR_6.cbSize = sizeof(VAR_6);
    FUNC_0(VAR_5, &VAR_6);

    if (VAR_4 & VAR_2)
        VAR_7 = VAR_6.rcWork;
    else
        VAR_7 = VAR_6.rcMonitor;




    if (VAR_4 & VAR_0)
    {
        VAR_3->left = VAR_7.left + (VAR_7.right - VAR_7.left - VAR_8) / 2;
        VAR_3->top = VAR_7.top + (VAR_7.bottom - VAR_7.top - VAR_9) / 2;
        VAR_3->right = VAR_3->left + VAR_8;
        VAR_3->bottom = VAR_3->top + VAR_9;
    }
    else
    {
        VAR_3->left = FUNC_2(VAR_7.left, FUNC_3(VAR_7.right-VAR_8, VAR_3->left));
        VAR_3->top = FUNC_2(VAR_7.top, FUNC_3(VAR_7.bottom-VAR_9, VAR_3->top));
        VAR_3->right = VAR_3->left + VAR_8;
        VAR_3->bottom = VAR_3->top + VAR_9;
    }
}
