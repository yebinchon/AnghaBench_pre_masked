
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int left; int top; int right; int bottom; } ;
struct TYPE_8__ {int cx; int cy; } ;
struct TYPE_10__ {int left; int top; int right; int bottom; } ;
struct TYPE_11__ {TYPE_1__ bmScaledSize; TYPE_3__ rcPage; } ;
struct TYPE_9__ {void* cx; void* cy; } ;
typedef TYPE_2__ SIZE ;
typedef TYPE_3__ RECT ;
typedef int HPEN ;
typedef int HDC ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,int *) ;
 int FUNC_5 (TYPE_3__*,int,int) ;
 int VAR_2 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_3__*,int,int,int,int) ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 scalar_t__ FUNC_9 (int,void*) ;

__attribute__((used)) static void FUNC_10(HDC VAR_5, int VAR_6, int VAR_7, float VAR_8)
{
    HPEN VAR_9, VAR_10;
    SIZE VAR_11;
    RECT VAR_12 = VAR_4.rcPage;

    VAR_11.cx = FUNC_2(VAR_5, VAR_0);
    VAR_11.cy = FUNC_2(VAR_5, VAR_1);

    FUNC_8(&VAR_12, VAR_4.rcPage.left + VAR_3.left, VAR_4.rcPage.top + VAR_3.top,
            VAR_4.rcPage.right - VAR_3.right, VAR_4.rcPage.bottom - VAR_3.bottom);

    VAR_12.left = (int)((float)FUNC_9(VAR_12.left, VAR_11.cx) * VAR_8);
    VAR_12.top = (int)((float)FUNC_9(VAR_12.top, VAR_11.cy) * VAR_8);
    VAR_12.bottom = (int)((float)FUNC_9(VAR_12.bottom, VAR_11.cy) * VAR_8);
    VAR_12.right = (int)((float)FUNC_9(VAR_12.right, VAR_11.cx) * VAR_8);

    FUNC_5(&VAR_12, VAR_6, VAR_7);

    VAR_9 = FUNC_0(VAR_2, 1, FUNC_6(0,0,0));
    VAR_10 = FUNC_7(VAR_5, VAR_9);

    FUNC_4(VAR_5, VAR_6, VAR_12.top, ((void*)0));
    FUNC_3(VAR_5, VAR_6 + VAR_4.bmScaledSize.cx, VAR_12.top);
    FUNC_4(VAR_5, VAR_6, VAR_12.bottom, ((void*)0));
    FUNC_3(VAR_5, VAR_6 + VAR_4.bmScaledSize.cx, VAR_12.bottom);

    FUNC_4(VAR_5, VAR_12.left, VAR_7, ((void*)0));
    FUNC_3(VAR_5, VAR_12.left, VAR_7 + VAR_4.bmScaledSize.cy);
    FUNC_4(VAR_5, VAR_12.right, VAR_7, ((void*)0));
    FUNC_3(VAR_5, VAR_12.right, VAR_7 + VAR_4.bmScaledSize.cy);

    FUNC_7(VAR_5, VAR_10);
    FUNC_1(VAR_9);
}
