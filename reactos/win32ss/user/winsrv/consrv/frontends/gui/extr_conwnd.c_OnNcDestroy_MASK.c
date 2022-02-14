
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hBitmap; scalar_t__ hMemDC; scalar_t__ IsWindowVisible; } ;
typedef TYPE_1__* PGUI_CONSOLE_DATA ;
typedef int LRESULT ;
typedef int HWND ;
typedef int DWORD_PTR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static LRESULT
FUNC_8(HWND VAR_4)
{
    PGUI_CONSOLE_DATA VAR_5 = FUNC_5(VAR_4);


    FUNC_7(VAR_4, VAR_1, (DWORD_PTR)((void*)0));


    FUNC_4(VAR_4, VAR_2);

    if (VAR_5)
    {
        if (VAR_5->IsWindowVisible)
            FUNC_6(VAR_4, VAR_0);


        if (VAR_5->hMemDC ) FUNC_1(VAR_5->hMemDC);
        if (VAR_5->hBitmap) FUNC_3(VAR_5->hBitmap);

        FUNC_2(VAR_5);
    }

    return FUNC_0(VAR_4, VAR_3, 0, 0);
}
