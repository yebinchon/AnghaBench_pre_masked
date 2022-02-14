
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bDestroyTarget; int hwndTarget; int * hbm32bpp; } ;
typedef int HWND ;
typedef TYPE_1__ GHOST_DATA ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_3 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void
FUNC_10(HWND VAR_4)
{

    GHOST_DATA *VAR_5 = FUNC_3(VAR_4);
    if (VAR_5)
    {
        FUNC_8(VAR_4, VAR_2, 0);


        FUNC_0(VAR_5->hbm32bpp);
        VAR_5->hbm32bpp = ((void*)0);


        FUNC_7(VAR_5->hwndTarget, VAR_1);


        FUNC_9(VAR_5->hwndTarget, VAR_3);


        if (VAR_5->bDestroyTarget)
        {
            FUNC_2(VAR_5);
        }

        FUNC_4(FUNC_1(), 0, VAR_5);
    }

    FUNC_5(VAR_4, VAR_0);

    FUNC_6(0);
}
