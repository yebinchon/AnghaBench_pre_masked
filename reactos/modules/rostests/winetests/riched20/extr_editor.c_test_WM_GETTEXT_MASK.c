
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,char*,int,...) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_9(void)
{
    HWND VAR_3 = FUNC_4(((void*)0));
    static const char VAR_4[] = "Hello. My name is RichEdit!";
    static const char VAR_5[] = "Hello. My name is RichEdit!\r";
    static const char VAR_6[] = "Hello. My name is RichEdit!\r\n";
    char VAR_7[1024] = {0};
    int VAR_8;


    FUNC_1(VAR_3, VAR_2, 0, (LPARAM)VAR_4);
    VAR_8 = FUNC_1(VAR_3, VAR_0, 1024, (LPARAM)VAR_7);
    FUNC_5(VAR_8 == FUNC_2(VAR_7),
        "WM_GETTEXT returned %d, expected %d\n", VAR_8, FUNC_2(VAR_7));
    FUNC_1(VAR_3, VAR_0, 1024, (LPARAM)VAR_7);
    VAR_8 = FUNC_6(VAR_7,VAR_4);
    FUNC_5(VAR_8 == 0,
        "WM_GETTEXT: settext and gettext differ. strcmp: %d\n", VAR_8);


    VAR_8 = FUNC_1(VAR_3, VAR_1, 0, 0);
    FUNC_5(VAR_8 == FUNC_2(VAR_4),
        "WM_GETTEXTLENGTH reports incorrect length %d, expected %d\n",
        VAR_8, FUNC_2(VAR_4));


    FUNC_3(VAR_7, 0, 1024);
    VAR_8 = FUNC_1(VAR_3, VAR_0, FUNC_7(VAR_4), (LPARAM)VAR_7);
    FUNC_5(VAR_8 == 0 ||
       VAR_8 == FUNC_2(VAR_4) - 1,
        "WM_GETTEXT returned %d, expected 0 or %d\n", VAR_8, FUNC_2(VAR_4) - 1);
    VAR_8 = FUNC_6(VAR_7,VAR_4);
    if (VAR_8)
        VAR_8 = FUNC_8(VAR_7, VAR_4, FUNC_2(VAR_4) - 1);
    FUNC_5(VAR_8 == 0,
        "WM_GETTEXT: settext and gettext differ. strcmp: %d\n", VAR_8);


    FUNC_1(VAR_3, VAR_2, 0, (LPARAM)VAR_5);
    VAR_8 = FUNC_1(VAR_3, VAR_0, 1024, (LPARAM)VAR_7);
    FUNC_5(VAR_8 == FUNC_2(VAR_7),
        "WM_GETTEXT returned %d, expected %d\n", VAR_8, FUNC_2(VAR_7));
    VAR_8 = FUNC_6(VAR_7,VAR_6);
    FUNC_5(VAR_8 == 0,
        "WM_GETTEXT: settext and gettext differ. strcmp: %d\n", VAR_8);


    VAR_8 = FUNC_1(VAR_3, VAR_1, 0, 0);
    FUNC_5(VAR_8 == FUNC_2(VAR_6),
        "WM_GETTEXTLENGTH reports incorrect length %d, expected %d\n",
        VAR_8, FUNC_2(VAR_6));


    FUNC_3(VAR_7, 0, 1024);
    VAR_8 = FUNC_1(VAR_3, VAR_0, FUNC_7(VAR_5), (LPARAM)VAR_7);
    FUNC_5(VAR_8 == 0 ||
       VAR_8 == FUNC_2(VAR_5) - 1,
        "WM_GETTEXT returned %d, expected 0 or %d\n", VAR_8, FUNC_2(VAR_5) - 1);
    VAR_8 = FUNC_6(VAR_7,VAR_5);
    if (VAR_8)
        VAR_8 = FUNC_8(VAR_7, VAR_5, FUNC_2(VAR_5) - 1);
    FUNC_5(VAR_8 == 0,
        "WM_GETTEXT: settext and gettext differ. strcmp: %d\n", VAR_8);

    FUNC_0(VAR_3);
}
