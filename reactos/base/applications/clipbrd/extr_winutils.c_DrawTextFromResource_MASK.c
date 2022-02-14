
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int LPWSTR ;
typedef int LPRECT ;
typedef int HINSTANCE ;
typedef int HDC ;


 int FUNC_0 (int ,int ,int,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

void FUNC_2(HINSTANCE VAR_0, UINT VAR_1, HDC VAR_2, LPRECT VAR_3, UINT VAR_4)
{
    LPWSTR VAR_5;
    int VAR_6;

    VAR_6 = FUNC_1(VAR_0, VAR_1, (LPWSTR)&VAR_5, 0);
    if (VAR_6)
        FUNC_0(VAR_2, VAR_5, VAR_6, VAR_3, VAR_4);
}
