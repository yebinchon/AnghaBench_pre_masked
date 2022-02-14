
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPCWSTR ;
typedef int INT ;
typedef int HDC ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int *,int,int ) ;
 int FUNC_1 (int *,int,char*,int ) ;
 int FUNC_2 (int ,int,int,int *,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int,int,int *,int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(HDC VAR_2, int VAR_3, LPCWSTR VAR_4, DWORD VAR_5, int VAR_6)
{
    WCHAR VAR_7[100];
    INT VAR_8 = 0;

    if (VAR_6 == VAR_0)
    {
        VAR_8 = FUNC_0(VAR_2, 0, VAR_3, VAR_4, (!VAR_4) ? 10 : FUNC_4(VAR_4), VAR_5);
        FUNC_1(VAR_7, 100, L"Return Value = %d", VAR_8);
        FUNC_2(VAR_2, 200, VAR_3, VAR_7, FUNC_4(VAR_7));
    }
    else if (VAR_6 == VAR_1)
    {
        VAR_8 = FUNC_3(VAR_2, 400, VAR_3, VAR_4, FUNC_4(VAR_4), VAR_5);
        FUNC_1(VAR_7, 100, L"Return Value = %d", VAR_8);
        FUNC_2(VAR_2, 600, VAR_3, VAR_7, FUNC_4(VAR_7));
    }

}
