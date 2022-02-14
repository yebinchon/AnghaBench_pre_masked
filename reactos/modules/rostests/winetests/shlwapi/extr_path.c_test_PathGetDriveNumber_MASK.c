
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char CHAR ;


 int FUNC_0 () ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static void FUNC_6(void)
{
    static const CHAR VAR_0[] = "a:\\test.file";
    static const CHAR VAR_1[] = "file:////b:\\test.file";
    static const CHAR VAR_2[] = "file:///c:\\test.file";
    static const CHAR VAR_3[] = "file:\\\\c:\\test.file";
    static const CHAR VAR_4[] = "\\\\?\\C:\\dir\\file.txt";
    static const WCHAR VAR_5[] =
        {'a',':','\\',0};
    static const WCHAR VAR_6[] =
        {'\\','\\','?','\\','C',':','\\','d','i','r','\\','f','i','l','e',0};
    int VAR_7;

    FUNC_3(0xdeadbeef);
    VAR_7 = FUNC_1(((void*)0));
    FUNC_5(VAR_7 == -1, "got %d\n", VAR_7);
    FUNC_5(FUNC_0() == 0xdeadbeef, "got %d\n", FUNC_0());

    VAR_7 = FUNC_1(VAR_0);
    FUNC_5(VAR_7 == 0, "got %d\n", VAR_7);
    VAR_7 = FUNC_2(VAR_5);
    FUNC_5(VAR_7 == 0, "got %d\n", VAR_7);
    VAR_7 = FUNC_1(VAR_1);
    FUNC_5(VAR_7 == -1, "got %d\n", VAR_7);
    VAR_7 = FUNC_1(VAR_2);
    FUNC_5(VAR_7 == -1, "got %d\n", VAR_7);
    VAR_7 = FUNC_1(VAR_3);
    FUNC_5(VAR_7 == -1, "got %d\n", VAR_7);

    VAR_7 = FUNC_1(VAR_4);
    FUNC_5(VAR_7 == -1, "got %d\n", VAR_7);
    VAR_7 = FUNC_2(VAR_6);
    FUNC_5(VAR_7 == 2 || FUNC_4(VAR_7 == -1) , "got = %d\n", VAR_7);
}
