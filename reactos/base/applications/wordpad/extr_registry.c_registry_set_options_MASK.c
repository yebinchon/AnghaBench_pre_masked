
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; scalar_t__ showCmd; int rcNormalPosition; } ;
typedef TYPE_1__ WINDOWPLACEMENT ;
typedef int RECT ;
typedef int LPBYTE ;
typedef int HWND ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *,int*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_6(HWND VAR_8)
{
    HKEY VAR_9 = 0;
    DWORD VAR_10;

    if(FUNC_3(&VAR_9, &VAR_10, VAR_4) == VAR_0)
    {
        WINDOWPLACEMENT VAR_11;
        DWORD VAR_12;

        VAR_11.length = sizeof(WINDOWPLACEMENT);
        FUNC_0(VAR_8, &VAR_11);
        VAR_12 = (VAR_11.showCmd == VAR_3);

        FUNC_2(VAR_9, VAR_6, 0, VAR_1, (LPBYTE)&VAR_11.rcNormalPosition, sizeof(RECT));
        FUNC_2(VAR_9, VAR_7, 0, VAR_2, (LPBYTE)&VAR_12, sizeof(DWORD));

        FUNC_4(VAR_9);
        FUNC_1(VAR_9);
    }

    if(FUNC_3(&VAR_9, &VAR_10, VAR_5) == VAR_0)
    {
        FUNC_5(VAR_9);
        FUNC_1(VAR_9);
    }
}
