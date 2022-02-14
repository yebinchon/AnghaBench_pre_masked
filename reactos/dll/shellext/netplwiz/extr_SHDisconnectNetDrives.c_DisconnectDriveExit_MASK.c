
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int INT ;
typedef int HWND ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int ,int *,int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;

DWORD FUNC_6(HWND VAR_5)
{
    TCHAR VAR_6[10];
    HRESULT VAR_7;
    HWND VAR_8 = FUNC_1(VAR_5, VAR_2);
    INT VAR_9 = FUNC_3(VAR_8, -1, VAR_4);

    if (VAR_9 == -1)
        return 0;

    FUNC_2(VAR_8, VAR_9, 0, VAR_6, FUNC_5(VAR_6));
    VAR_7 = FUNC_4(VAR_6, VAR_0, VAR_1);

    FUNC_0(VAR_5, VAR_3);
    return VAR_7;
}
