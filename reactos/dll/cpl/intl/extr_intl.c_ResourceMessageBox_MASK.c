
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szErrorText ;
typedef int szErrorCaption ;
typedef int WCHAR ;
typedef int UINT ;
typedef int INT ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (int ,int *,int *,int ) ;
 int VAR_1 ;

INT
FUNC_2(
    HWND VAR_2,
    UINT VAR_3,
    UINT VAR_4,
    UINT VAR_5)
{
    WCHAR VAR_6[VAR_0];
    WCHAR VAR_7[VAR_0];

    FUNC_0(VAR_1, VAR_5, VAR_6, sizeof(VAR_6) / sizeof(WCHAR));
    FUNC_0(VAR_1, VAR_4, VAR_7, sizeof(VAR_7) / sizeof(WCHAR));

    return FUNC_1(VAR_2, VAR_6, VAR_7, VAR_3);
}
