
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hwndTarget; } ;
typedef int * HWND ;
typedef scalar_t__ HANDLE ;
typedef TYPE_1__ GHOST_DATA ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_5(GHOST_DATA *VAR_2)
{
    HWND VAR_3 = VAR_2->hwndTarget;
    DWORD VAR_4;
    HANDLE VAR_5;

    VAR_2->hwndTarget = ((void*)0);
    FUNC_2(VAR_3, &VAR_4);

    VAR_5 = FUNC_3(VAR_1, VAR_0, VAR_4);
    if (VAR_5)
    {
        FUNC_4(VAR_5, -1);
        FUNC_0(VAR_5);
    }

    FUNC_1(VAR_3);
}
