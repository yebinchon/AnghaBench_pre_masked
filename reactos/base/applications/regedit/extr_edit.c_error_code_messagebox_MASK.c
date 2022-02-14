
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HWND ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4(HWND VAR_2, DWORD VAR_3)
{
    WCHAR VAR_4[256];
    if (!FUNC_2(VAR_1, VAR_0, VAR_4, FUNC_0(VAR_4)))
        FUNC_3(VAR_4, L"Error");
    FUNC_1(VAR_2, VAR_4, VAR_3);
}
