
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef char* LPCSTR ;
typedef int DWORD ;
typedef char CHAR ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,char*,int*,int) ;
 int FUNC_2 (int *,int,char*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char,int) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    CHAR VAR_6[256];
    LPCSTR VAR_7;
    DWORD VAR_8;
    DWORD VAR_9;
    DWORD VAR_10;


    VAR_7 = "http://swupmf.adobe.com/manifest/50/win/AdobeUpdater.upd";
    VAR_8 = FUNC_5(VAR_7);

    FUNC_6(VAR_6, '#', sizeof(VAR_6)-1);
    VAR_6[sizeof(VAR_6)-1] = '\0';
    VAR_9 = 1;
    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_1(VAR_7, VAR_6, &VAR_9, 0);
    FUNC_7( !VAR_10 && (FUNC_0() == VAR_0) && (VAR_9 == (VAR_8+1)),
        "got %u and %u with size %u for '%s' (%d)\n",
        VAR_10, FUNC_0(), VAR_9, VAR_6, FUNC_5(VAR_6));



    FUNC_6(VAR_6, '#', sizeof(VAR_6)-1);
    VAR_6[sizeof(VAR_6)-1] = '\0';
    VAR_9 = VAR_8;
    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_1(VAR_7, VAR_6, &VAR_9, 0);

    FUNC_7( !VAR_10 && (FUNC_0() == VAR_0) && (VAR_9 == (VAR_8+1)),
        "got %u and %u with size %u for '%s' (%d)\n",
        VAR_10, FUNC_0(), VAR_9, VAR_6, FUNC_5(VAR_6));


    FUNC_6(VAR_6, '#', sizeof(VAR_6)-1);
    VAR_6[sizeof(VAR_6)-1] = '\0';
    VAR_9 = VAR_8+1;
    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_1(VAR_7, VAR_6, &VAR_9, 0);

    FUNC_7( VAR_10 && (VAR_9 == VAR_8) && (FUNC_4(VAR_7, VAR_6) == 0),
        "got %u and %u with size %u for '%s' (%d)\n",
        VAR_10, FUNC_0(), VAR_9, VAR_6, FUNC_5(VAR_6));

    FUNC_6(VAR_6, '#', sizeof(VAR_6)-1);
    VAR_6[sizeof(VAR_6)-1] = '\0';
    VAR_9 = sizeof(VAR_6);
    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_1("file:///C:/Program%20Files/Atmel/AVR%20Tools/STK500/STK500.xml", VAR_6, &VAR_9, VAR_4 | VAR_5);
    FUNC_7(VAR_10, "InternetCanonicalizeUrlA failed %u\n", FUNC_0());
    FUNC_7(VAR_9 == FUNC_5(VAR_6), "got %d expected %d\n", VAR_9, FUNC_5(VAR_6));
    FUNC_7(!FUNC_4("file://C:\\Program Files\\Atmel\\AVR Tools\\STK500\\STK500.xml", VAR_6),
       "got %s expected 'file://C:\\Program Files\\Atmel\\AVR Tools\\STK500\\STK500.xml'\n", VAR_6);


    FUNC_6(VAR_6, '#', sizeof(VAR_6)-1);
    VAR_6[sizeof(VAR_6)-1] = '\0';
    VAR_9 = VAR_8+2;
    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_1(VAR_7, VAR_6, &VAR_9, 0);

    FUNC_7( VAR_10 && (VAR_9 == VAR_8) && (FUNC_4(VAR_7, VAR_6) == 0),
        "got %u and %u with size %u for '%s' (%d)\n",
        VAR_10, FUNC_0(), VAR_9, VAR_6, FUNC_5(VAR_6));



    FUNC_6(VAR_6, '#', VAR_8 + 4);
    VAR_6[VAR_8 + 4] = '\0';
    VAR_9 = VAR_8+1;
    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_1(((void*)0), VAR_6, &VAR_9, 0);
    FUNC_7( !VAR_10 && (FUNC_0() == VAR_2),
        "got %u and %u with size %u for '%s' (%d)\n",
        VAR_10, FUNC_0(), VAR_9, VAR_6, FUNC_5(VAR_6));

    FUNC_6(VAR_6, '#', VAR_8 + 4);
    VAR_6[VAR_8 + 4] = '\0';
    VAR_9 = VAR_8+1;
    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_1(VAR_7, ((void*)0), &VAR_9, 0);
    FUNC_7( !VAR_10 && (FUNC_0() == VAR_2),
        "got %u and %u with size %u for '%s' (%d)\n",
        VAR_10, FUNC_0(), VAR_9, VAR_6, FUNC_5(VAR_6));

    FUNC_6(VAR_6, '#', VAR_8 + 4);
    VAR_6[VAR_8 + 4] = '\0';
    VAR_9 = VAR_8+1;
    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_1(VAR_7, VAR_6, ((void*)0), 0);
    FUNC_7( !VAR_10 && (FUNC_0() == VAR_2),
        "got %u and %u with size %u for '%s' (%d)\n",
        VAR_10, FUNC_0(), VAR_9, VAR_6, FUNC_5(VAR_6));


    VAR_9 = 256;
    VAR_10 = FUNC_1("http://www.winehq.org/index.php?x= ", VAR_6, &VAR_9, VAR_3);
    FUNC_7(VAR_10 == 1, "InternetCanonicalizeUrlA failed\n");
    FUNC_7(!FUNC_8(VAR_6, "http://www.winehq.org/index.php?x="), "Trailing space should have been stripped even in ICU_BROWSER_MODE (%s)\n", VAR_6);

    VAR_10 = FUNC_2(((void*)0), 0xdeadbeef, VAR_6, sizeof(VAR_6));
    FUNC_7(!VAR_10, "InternetSetOptionA succeeded\n");
    FUNC_7(FUNC_0() == VAR_1,
       "InternetSetOptionA failed %u, expected ERROR_INTERNET_INVALID_OPTION\n", FUNC_0());
}
