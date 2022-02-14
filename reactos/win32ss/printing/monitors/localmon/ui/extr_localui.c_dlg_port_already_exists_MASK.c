
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPWSTR ;
typedef int LPCWSTR ;
typedef int HWND ;
typedef int DWORD ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,char*,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,char*,int ) ;

__attribute__((used)) static void FUNC_7(HWND VAR_7, LPCWSTR VAR_8)
{
    WCHAR VAR_9[VAR_1];
    WCHAR VAR_10[VAR_3];
    LPWSTR VAR_11;
    DWORD VAR_12;

    VAR_9[0] = '\0';
    VAR_10[0] = '\0';
    FUNC_3(VAR_4, VAR_0, VAR_9, VAR_1);
    FUNC_3(VAR_4, VAR_2, VAR_10, VAR_3);

    VAR_12 = FUNC_5(VAR_8) + VAR_3 + 1;
    VAR_11 = FUNC_1(FUNC_0(), 0, VAR_12 * sizeof(WCHAR));
    if (VAR_11) {
        VAR_11[0] = '\0';
        FUNC_6(VAR_11, VAR_12, VAR_10, VAR_8);
        FUNC_4(VAR_7, VAR_11, VAR_9, VAR_6 | VAR_5);
        FUNC_2(FUNC_0(), 0, VAR_11);
    }
}
