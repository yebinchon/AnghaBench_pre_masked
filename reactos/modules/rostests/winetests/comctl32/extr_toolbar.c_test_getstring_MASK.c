
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strW ;
typedef int str ;
typedef char WCHAR ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef int * HWND ;
typedef int HMENU ;


 int * FUNC_0 (int ,int ,int *,int,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    HWND VAR_7 = ((void*)0);
    char VAR_8[10];
    WCHAR VAR_9[10];
    static const char VAR_10[] = "STR";
    static const WCHAR VAR_11[] = { 'S','T','R',0 };
    INT VAR_12;

    VAR_7 = FUNC_0(0, VAR_3, ((void*)0), VAR_4 | VAR_5, 0, 0, 0, 0, VAR_6, (HMENU)5, FUNC_2(((void*)0)), ((void*)0));
    FUNC_10(VAR_7 != ((void*)0), "Toolbar creation problem\n");

    VAR_12 = FUNC_4(VAR_7, VAR_1, FUNC_3(0, 0), 0);
    if (VAR_12 == 0)
    {
        FUNC_11("TB_GETSTRINGA and TB_GETSTRINGW need 5.80\n");
        FUNC_1(VAR_7);
        return;
    }
    FUNC_6(-1, VAR_12);
    VAR_12 = FUNC_5(VAR_7, VAR_2, FUNC_3(0, 0), 0);
    FUNC_6(-1, VAR_12);
    VAR_12 = FUNC_4(VAR_7, VAR_0, 0, (LPARAM)VAR_10);
    FUNC_6(0, VAR_12);
    VAR_12 = FUNC_4(VAR_7, VAR_1, FUNC_3(0, 0), 0);
    FUNC_6(FUNC_9(VAR_10), VAR_12);
    VAR_12 = FUNC_5(VAR_7, VAR_2, FUNC_3(0, 0), 0);
    FUNC_6(FUNC_9(VAR_10), VAR_12);
    VAR_12 = FUNC_4(VAR_7, VAR_1, FUNC_3(sizeof(VAR_8), 0), (LPARAM)VAR_8);
    FUNC_6(FUNC_9(VAR_10), VAR_12);
    FUNC_6(0, FUNC_7(VAR_10, VAR_8));
    VAR_12 = FUNC_5(VAR_7, VAR_2, FUNC_3(sizeof(VAR_9), 0), (LPARAM)VAR_9);
    FUNC_6(FUNC_9(VAR_10), VAR_12);
    FUNC_6(0, FUNC_8(VAR_11, VAR_9));

    FUNC_1(VAR_7);
}
