
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int * LPWSTR ;
typedef int HWND ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int *,scalar_t__,int ,int *,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,char*,int) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int *,char*,int) ;

__attribute__((used)) static void FUNC_4(HWND VAR_7, DWORD VAR_8)
{
    WCHAR VAR_9[VAR_3];
    LPWSTR VAR_10 = ((void*)0);
    DWORD VAR_11;

    VAR_9[0] = '\0';
    FUNC_1(VAR_4, VAR_2, VAR_9, VAR_3);


    VAR_11 = FUNC_0(VAR_0 | VAR_1,
                        ((void*)0), VAR_8, 0, (LPWSTR) &VAR_10, 0, ((void*)0));

    if (VAR_11 > 0) {
        FUNC_3(VAR_7, VAR_10, VAR_9, VAR_6 | VAR_5);
        FUNC_2(VAR_10);
    }
}
