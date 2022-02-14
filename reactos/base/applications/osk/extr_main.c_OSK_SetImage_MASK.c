
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_2__ {int hMainWnd; int hInstance; } ;
typedef int LPARAM ;
typedef int * HWND ;
typedef int * HICON ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int * FUNC_1 (int ,int) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,int,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int VAR_5 ;

int FUNC_5(int VAR_6, int VAR_7)
{
    HICON VAR_8;
    HWND VAR_9;

    VAR_8 = (HICON)FUNC_2(VAR_2.hInstance, FUNC_3(VAR_7),
                              VAR_3, 16, 16, VAR_4);
    if (VAR_8 == ((void*)0))
        return VAR_1;

    VAR_9 = FUNC_1(VAR_2.hMainWnd, VAR_6);
    if (VAR_9 == ((void*)0))
    {
        FUNC_0(VAR_8);
        return VAR_1;
    }

    FUNC_4(VAR_9, VAR_0, (WPARAM)VAR_3, (LPARAM)VAR_8);



    return VAR_5;
}
