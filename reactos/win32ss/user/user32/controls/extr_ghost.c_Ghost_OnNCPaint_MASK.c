
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int HWND ;
typedef scalar_t__ HRGN ;
typedef scalar_t__ HDC ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(HWND VAR_1, HRGN VAR_2, BOOL VAR_3)
{
    HDC VAR_4;


    if (VAR_3)
        FUNC_1(VAR_1, VAR_0, (WPARAM)VAR_2, 0);
    else
        FUNC_0(VAR_1, VAR_0, (WPARAM)VAR_2, 0);


    VAR_4 = FUNC_2(VAR_1);
    if (VAR_4)
    {
        FUNC_3(VAR_1, VAR_4);
        FUNC_4(VAR_1, VAR_4);
    }
}
