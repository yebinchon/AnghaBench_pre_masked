
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int HWND ;
typedef scalar_t__ HINSTANCE ;
typedef int HICON ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int *,int ) ;
 int VAR_5 ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static BOOL FUNC_8(HWND VAR_6)
{
    HINSTANCE VAR_7;
    HICON VAR_8;
    TCHAR VAR_9[256];
    TCHAR VAR_10[256];
    TCHAR VAR_11[1024];

    VAR_7 = (HINSTANCE)FUNC_0(VAR_6, VAR_0);

    VAR_8 = FUNC_1(VAR_7, FUNC_3(VAR_1));

    FUNC_2(VAR_7, VAR_3, VAR_9, FUNC_4(VAR_9));
    FUNC_2(VAR_7, VAR_2, VAR_10, FUNC_4(VAR_10));
    FUNC_2(VAR_7, VAR_4, VAR_11, FUNC_4(VAR_11));

    FUNC_7(VAR_9, FUNC_6("#"));
    FUNC_7(VAR_9, VAR_10);

    FUNC_5(VAR_6, VAR_9, VAR_11, VAR_8);

    return VAR_5;
}
