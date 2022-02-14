
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef char WCHAR ;
typedef int LPARAM ;
typedef int HWND ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    HWND VAR_7;
    BOOL VAR_8;
    static WCHAR VAR_9[5] = {'T',0};
    static const WCHAR VAR_10[] = {'T','e','s','t',0};
    static const WCHAR VAR_11[] = {'T','e','s',0};
    static const WCHAR VAR_12[] = {0};

    VAR_7 = FUNC_2(VAR_2 | VAR_3, 0);

    VAR_8 = FUNC_1(VAR_7, VAR_0, (WPARAM)VAR_9, 5);
    if (FUNC_3(VAR_9, VAR_12) != 0)
    {
        FUNC_8("skipping for Win XP and 2003 Server.\n");
        FUNC_0(VAR_7);
        return;
    }
    FUNC_7(FUNC_3(VAR_9, VAR_12) == 0, "First char is %c\n", VAR_9[0]);
    FUNC_7(VAR_8 == VAR_5, "EM_GETCUEBANNER should have returned FALSE.\n");

    FUNC_4(VAR_9, VAR_10);
    VAR_8 = FUNC_1(VAR_7, VAR_0, (WPARAM)VAR_9, 0);
    FUNC_7(FUNC_3(VAR_9, VAR_10) == 0, "String was %s.\n", FUNC_9(VAR_9));
    FUNC_7(VAR_8 == VAR_5, "EM_GETCUEBANNER should have returned FALSE.\n");

    VAR_8 = FUNC_1(VAR_7, VAR_0, 0, 0);
    FUNC_7(VAR_8 == VAR_5, "EM_GETCUEBANNER should have returned FALSE.\n");

    VAR_8 = FUNC_1(VAR_7, VAR_1, 0, 0);
    FUNC_7(VAR_8 == VAR_5, "EM_SETCUEBANNER should have returned FALSE.\n");

    VAR_8 = FUNC_1(VAR_7, VAR_0, 0, 0);
    FUNC_7(VAR_8 == VAR_5, "EM_GETCUEBANNER should have returned FALSE.\n");

    FUNC_4(VAR_9, VAR_10);
    VAR_8 = FUNC_1(VAR_7, VAR_1, 0, (LPARAM)VAR_9);
    FUNC_7(VAR_8 == VAR_6, "EM_SETCUEBANNER should have returned TRUE.\n");

    VAR_8 = FUNC_1(VAR_7, VAR_0, 0, 5);
    FUNC_7(VAR_8 == VAR_6, "EM_GETCUEBANNER should have returned TRUE.\n");

    VAR_8 = FUNC_1(VAR_7, VAR_0, (WPARAM)VAR_9, 5);
    FUNC_7(VAR_8 == VAR_6, "EM_GETCUEBANNER should have returned TRUE.\n");
    FUNC_7(FUNC_3(VAR_9, VAR_10) == 0, "EM_GETCUEBANNER returned string %s.\n", FUNC_9(VAR_9));

    VAR_8 = FUNC_1(VAR_7, VAR_1, 0, (LPARAM)VAR_12);
    FUNC_7(VAR_8 == VAR_6, "EM_SETCUEBANNER should have returned TRUE.\n");

    VAR_8 = FUNC_1(VAR_7, VAR_0, (WPARAM)VAR_9, 5);
    FUNC_7(VAR_8 == VAR_6, "EM_GETCUEBANNER should have returned TRUE.\n");
    FUNC_7(FUNC_3(VAR_9, VAR_12) == 0, "EM_GETCUEBANNER returned string %s.\n", FUNC_9(VAR_9));


    VAR_8 = FUNC_1(VAR_7, VAR_1, 0, (LPARAM)VAR_10);
    FUNC_7(VAR_8 == VAR_6, "EM_SETCUEBANNER should have returned TRUE.\n");
    FUNC_6(VAR_9, 0, FUNC_5(VAR_10)*sizeof(WCHAR));
    VAR_8 = FUNC_1(VAR_7, VAR_0, (WPARAM)VAR_9, (LPARAM)FUNC_5(VAR_10)+1);
    FUNC_7(VAR_8 == VAR_6, "EM_GETCUEBANNER should have returned TRUE.\n");
    FUNC_7(FUNC_3(VAR_9, VAR_10) == 0, "EM_GETCUEBANNER returned string %s.\n", FUNC_9(VAR_9));
    FUNC_6(VAR_9, 0, FUNC_5(VAR_10)*sizeof(WCHAR));
    VAR_8 = FUNC_1(VAR_7, VAR_0, (WPARAM)VAR_9, (LPARAM)FUNC_5(VAR_10));
    FUNC_7(FUNC_3(VAR_9, VAR_11) == 0, "EM_GETCUEBANNER returned string %s.\n", FUNC_9(VAR_9));
    FUNC_0(VAR_7);


    VAR_7 = FUNC_2(VAR_2 | VAR_3 | VAR_4, 0);
    FUNC_4(VAR_9, VAR_10);
    VAR_8 = FUNC_1(VAR_7, VAR_0, (WPARAM)VAR_9, 5);
    FUNC_7(VAR_8 == VAR_5, "EM_SETCUEBANNER.\n");
    FUNC_7(FUNC_3(VAR_9, VAR_10) == 0, "String was %s.\n", FUNC_9(VAR_9));
    VAR_8 = FUNC_1(VAR_7, VAR_1, 0, (LPARAM)VAR_9);
    FUNC_7(VAR_8 == VAR_5, "EM_SETCUEBANNER.\n");

    FUNC_0(VAR_7);
}
