
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int cy; int cx; } ;
typedef TYPE_1__* LPWINDOWPOS ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *,int *) ;

__attribute__((used)) static BOOL
FUNC_2(
    HWND VAR_1,
    LPWINDOWPOS VAR_2)
{

    if (!FUNC_0(VAR_1) && !(VAR_2->flags & VAR_0))
    {
 FUNC_1(VAR_2->cx, VAR_2->cy,
         &VAR_2->cx, &VAR_2->cy);
    }
    return 0;
}
