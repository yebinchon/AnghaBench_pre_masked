
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mi ;
struct TYPE_7__ {int bottom; int top; int right; int left; } ;
struct TYPE_9__ {int cbSize; TYPE_1__ rcWork; } ;
struct TYPE_8__ {int bottom; int top; int right; int left; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ MONITORINFO ;
typedef int HMONITOR ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *,int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(RECT* VAR_1)
{
    HMONITOR VAR_2;
    MONITORINFO VAR_3;


    VAR_2 = FUNC_1(VAR_1, VAR_0);


    VAR_3.cbSize = sizeof(VAR_3);
    FUNC_0(VAR_2, &VAR_3);

    FUNC_2(&VAR_1->left, &VAR_1->right, VAR_3.rcWork.left, VAR_3.rcWork.right);
    FUNC_2(&VAR_1->top, &VAR_1->bottom, VAR_3.rcWork.top, VAR_3.rcWork.bottom);
}
