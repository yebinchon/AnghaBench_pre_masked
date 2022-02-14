
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nSplitPos; } ;
struct TYPE_4__ {int bottom; int right; } ;
typedef TYPE_1__ RECT ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(HWND VAR_2, int VAR_3)
{
    RECT VAR_4;

    FUNC_3(VAR_2, VAR_1);
    VAR_1 = -1;
    FUNC_0(VAR_2, &VAR_4);
    VAR_0->nSplitPos = VAR_3;
    FUNC_2(VAR_4.right, VAR_4.bottom);
    FUNC_1();
}
