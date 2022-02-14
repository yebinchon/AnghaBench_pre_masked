
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*,int,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    HWND VAR_3 = FUNC_3(((void*)0));
    static const char VAR_4[] = "aaa\r\nbbb\r\nccc\r\nddd\r\neee";
    static const char VAR_5[] = "aaa\r\nbbb\r\nccc\r\nddd\r\neee\r\n";
    static const char VAR_6[] = "abcdef\x8e\xf0";
    int VAR_7;


    FUNC_1(VAR_3, VAR_1, 0, (LPARAM)VAR_4);
    VAR_7 = FUNC_1(VAR_3, VAR_0, 0, 0);
    FUNC_4(VAR_7 == FUNC_2(VAR_4),
       "WM_GETTEXTLENGTH reports incorrect length %d, expected %d\n",
       VAR_7, FUNC_2(VAR_4));

    FUNC_1(VAR_3, VAR_1, 0, (LPARAM)VAR_5);
    VAR_7 = FUNC_1(VAR_3, VAR_0, 0, 0);
    FUNC_4(VAR_7 == FUNC_2(VAR_5),
       "WM_GETTEXTLENGTH reports incorrect length %d, expected %d\n",
       VAR_7, FUNC_2(VAR_5));


    if (!VAR_2)
        FUNC_5("Skip multibyte character tests on non-Japanese platform\n");
    else
    {
        FUNC_1(VAR_3, VAR_1, 0, (LPARAM)VAR_6);
        VAR_7 = FUNC_1(VAR_3, VAR_0, 0, 0);
        FUNC_4(VAR_7 == 8, "WM_GETTEXTLENGTH returned %d, expected 8\n", VAR_7);
    }

    FUNC_0(VAR_3);
}
