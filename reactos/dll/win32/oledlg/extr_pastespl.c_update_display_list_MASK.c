
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int LPARAM ;
typedef int LONG ;
typedef scalar_t__ HWND ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__,int ,int,int) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_4(HWND VAR_10, UINT VAR_11)
{
    LONG VAR_12, VAR_13, VAR_14;
    WCHAR VAR_15[256];
    LONG VAR_16;
    HWND VAR_17 = FUNC_0(VAR_10, VAR_0);
    HWND VAR_18 = FUNC_0(VAR_10, VAR_11);

    VAR_14 = FUNC_2(VAR_17, VAR_2, 0, 0);
    if(VAR_14 == -1) VAR_14 = 0;

    FUNC_2(VAR_17, VAR_9, 0, 0);
    FUNC_2(VAR_17, VAR_6, 0, 0);
    VAR_12 = FUNC_2(VAR_18, VAR_1, 0, 0);
    for(VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
    {
        FUNC_2(VAR_18, VAR_4, VAR_13, (LPARAM)VAR_15);
        VAR_16 = FUNC_2(VAR_18, VAR_3, VAR_13, 0);
        FUNC_2(VAR_17, VAR_5, VAR_13, (LPARAM)VAR_15);
        FUNC_2(VAR_17, VAR_8, VAR_13, VAR_16);
    }
    FUNC_2(VAR_17, VAR_7, 0, 0);
    FUNC_2(VAR_17, VAR_9, 1, 0);
    if(FUNC_1() == VAR_10)
        FUNC_3(VAR_17);
}
