
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bDestroyTarget; } ;
typedef int HWND ;
typedef TYPE_1__ GHOST_DATA ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(HWND VAR_0, BOOL VAR_1)
{
    GHOST_DATA *VAR_2 = FUNC_1(VAR_0);
    if (!VAR_2)
        return;

    VAR_2->bDestroyTarget |= VAR_1;
    FUNC_0(VAR_0);
}
