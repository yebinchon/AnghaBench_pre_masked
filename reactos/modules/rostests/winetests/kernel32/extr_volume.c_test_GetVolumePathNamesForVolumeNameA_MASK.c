
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volume ;
typedef int buffer ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*,int,int*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    BOOL VAR_3;
    char VAR_4[VAR_2], VAR_5[VAR_2];
    DWORD VAR_6, VAR_7;

    if (!&FUNC_6 || !&FUNC_5)
    {
        FUNC_9("required functions not found\n");
        return;
    }

    VAR_3 = FUNC_5( "c:\\", VAR_4, sizeof(VAR_4) );
    FUNC_4(VAR_3, "failed to get volume name %u\n", FUNC_0());
    FUNC_8("c:\\ -> %s\n", VAR_4);

    FUNC_1( 0xdeadbeef );
    VAR_3 = FUNC_6( ((void*)0), ((void*)0), 0, ((void*)0) );
    VAR_7 = FUNC_0();
    FUNC_4(!VAR_3, "expected failure\n");
    FUNC_4(VAR_7 == VAR_0, "expected ERROR_INVALID_NAME got %u\n", VAR_7);

    FUNC_1( 0xdeadbeef );
    VAR_3 = FUNC_6( "", ((void*)0), 0, ((void*)0) );
    VAR_7 = FUNC_0();
    FUNC_4(!VAR_3, "expected failure\n");
    FUNC_4(VAR_7 == VAR_0, "expected ERROR_INVALID_NAME got %u\n", VAR_7);

    FUNC_1( 0xdeadbeef );
    VAR_3 = FUNC_6( VAR_4, ((void*)0), 0, ((void*)0) );
    VAR_7 = FUNC_0();
    FUNC_4(!VAR_3, "expected failure\n");
    FUNC_4(VAR_7 == VAR_1, "expected ERROR_MORE_DATA got %u\n", VAR_7);

    FUNC_1( 0xdeadbeef );
    VAR_3 = FUNC_6( VAR_4, VAR_5, 0, ((void*)0) );
    VAR_7 = FUNC_0();
    FUNC_4(!VAR_3, "expected failure\n");
    FUNC_4(VAR_7 == VAR_1, "expected ERROR_MORE_DATA got %u\n", VAR_7);

    FUNC_3( VAR_5, 0xff, sizeof(VAR_5) );
    VAR_3 = FUNC_6( VAR_4, VAR_5, sizeof(VAR_5), ((void*)0) );
    FUNC_4(VAR_3, "failed to get path names %u\n", FUNC_0());
    FUNC_4(!FUNC_7( "C:\\", VAR_5 ), "expected \"\\C:\" got \"%s\"\n", VAR_5);
    FUNC_4(!VAR_5[4], "expected double null-terminated buffer\n");

    VAR_6 = 0;
    FUNC_1( 0xdeadbeef );
    VAR_3 = FUNC_6( ((void*)0), ((void*)0), 0, &VAR_6 );
    VAR_7 = FUNC_0();
    FUNC_4(!VAR_3, "expected failure\n");
    FUNC_4(VAR_7 == VAR_0, "expected ERROR_INVALID_NAME got %u\n", VAR_7);

    VAR_6 = 0;
    FUNC_1( 0xdeadbeef );
    VAR_3 = FUNC_6( ((void*)0), ((void*)0), sizeof(VAR_5), &VAR_6 );
    VAR_7 = FUNC_0();
    FUNC_4(!VAR_3, "expected failure\n");
    FUNC_4(VAR_7 == VAR_0, "expected ERROR_INVALID_NAME got %u\n", VAR_7);

    VAR_6 = 0;
    FUNC_1( 0xdeadbeef );
    VAR_3 = FUNC_6( ((void*)0), VAR_5, sizeof(VAR_5), &VAR_6 );
    VAR_7 = FUNC_0();
    FUNC_4(!VAR_3, "expected failure\n");
    FUNC_4(VAR_7 == VAR_0, "expected ERROR_INVALID_NAME got %u\n", VAR_7);

    VAR_6 = 0;
    FUNC_1( 0xdeadbeef );
    VAR_3 = FUNC_6( ((void*)0), VAR_5, sizeof(VAR_5), &VAR_6 );
    VAR_7 = FUNC_0();
    FUNC_4(!VAR_3, "expected failure\n");
    FUNC_4(VAR_7 == VAR_0, "expected ERROR_INVALID_NAME got %u\n", VAR_7);

    VAR_6 = 0;
    FUNC_3( VAR_5, 0xff, sizeof(VAR_5) );
    VAR_3 = FUNC_6( VAR_4, VAR_5, sizeof(VAR_5), &VAR_6 );
    FUNC_4(VAR_3, "failed to get path names %u\n", FUNC_0());
    FUNC_4(VAR_6 == 5 || FUNC_2(VAR_6 == 2), "expected 5 got %u\n", VAR_6);
    FUNC_4(!FUNC_7( "C:\\", VAR_5 ), "expected \"\\C:\" got \"%s\"\n", VAR_5);
    FUNC_4(!VAR_5[4], "expected double null-terminated buffer\n");
}
