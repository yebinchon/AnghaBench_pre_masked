
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int left; int right; scalar_t__ top; scalar_t__ bottom; } ;
typedef TYPE_1__ RECT ;
typedef int HWND ;
typedef scalar_t__ HGDIOBJ ;
typedef int HDC ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int,int,int,int,int const*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int,scalar_t__,int,scalar_t__,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_7(HWND VAR_4, int VAR_5)
{
    RECT VAR_6;
    HGDIOBJ VAR_7;
    HDC VAR_8 = FUNC_3(VAR_4);

    if(!VAR_3)
    {
        const DWORD VAR_9[4] = {0x5555AAAA, 0x5555AAAA, 0x5555AAAA, 0x5555AAAA};
        VAR_3 = FUNC_0(8, 8, 1, 1, VAR_9);
    }
    if(!VAR_2)
    {
        VAR_2 = FUNC_1(VAR_3);
    }
    FUNC_2(VAR_4, &VAR_6);
    VAR_6.left = VAR_5 - VAR_1/2;
    VAR_6.right = VAR_5 + VAR_1/2+1;
    VAR_7 = FUNC_6(VAR_8, VAR_2);
    FUNC_4(VAR_8, VAR_6.left, VAR_6.top, VAR_6.right - VAR_6.left, VAR_6.bottom - VAR_6.top, VAR_0);
    FUNC_6(VAR_8, VAR_7);
    FUNC_5(VAR_4, VAR_8);
}
