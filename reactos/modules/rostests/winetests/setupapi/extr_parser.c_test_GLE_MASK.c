
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int LONG ;
typedef int INFCONTEXT ;
typedef int * HINF ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*,int *) ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (int *,char*,int,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int *,char*,char*,char*,int,int *) ;
 int FUNC_8 (int,char*,...) ;
 int * FUNC_9 (char const*,int *) ;

__attribute__((used)) static void FUNC_10(void)
{
    static const char *VAR_4 =
        "[Version]\n"
        "Signature=\"$Windows NT$\"\n"
        "[Sectionname]\n"
        "Keyname1=Field1,Field2,Field3\n"
        "\n"
        "Keyname2=Field4,Field5\n";
    HINF VAR_5;
    UINT VAR_6;
    INFCONTEXT VAR_7;
    BOOL VAR_8;
    LONG VAR_9;
    char VAR_10[VAR_3];
    int VAR_11 = VAR_3;
    DWORD VAR_12;

    VAR_5 = FUNC_9( VAR_4, &VAR_6 );
    FUNC_8( VAR_5 != ((void*)0), "Expected valid INF file\n" );

    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_3( VAR_5, "ImNotThere", ((void*)0), &VAR_7 );
    FUNC_8(!VAR_8, "Expected failure\n");
    FUNC_8(FUNC_0() == VAR_0,
        "Expected ERROR_LINE_NOT_FOUND, got %08x\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_3( VAR_5, "ImNotThere", "ImNotThere", &VAR_7 );
    FUNC_8(!VAR_8, "Expected failure\n");
    FUNC_8(FUNC_0() == VAR_0,
        "Expected ERROR_LINE_NOT_FOUND, got %08x\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_3( VAR_5, "Sectionname", ((void*)0), &VAR_7 );
    FUNC_8(VAR_8, "Expected success\n");
    FUNC_8(FUNC_0() == VAR_2,
        "Expected ERROR_SUCCESS, got %08x\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_3( VAR_5, "Sectionname", "ImNotThere", &VAR_7 );
    FUNC_8(!VAR_8, "Expected failure\n");
    FUNC_8(FUNC_0() == VAR_0,
        "Expected ERROR_LINE_NOT_FOUND, got %08x\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_3( VAR_5, "Sectionname", "Keyname1", &VAR_7 );
    FUNC_8(VAR_8, "Expected success\n");
    FUNC_8(FUNC_0() == VAR_2,
        "Expected ERROR_SUCCESS, got %08x\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_4( &VAR_7, "ImNotThere", &VAR_7 );
    FUNC_8(!VAR_8, "Expected failure\n");
    FUNC_8(FUNC_0() == VAR_0,
        "Expected ERROR_LINE_NOT_FOUND, got %08x\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_4( &VAR_7, "Keyname2", &VAR_7 );
    FUNC_8(VAR_8, "Expected success\n");
    FUNC_8(FUNC_0() == VAR_2,
        "Expected ERROR_SUCCESS, got %08x\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_9 = FUNC_6( VAR_5, "ImNotThere");
    FUNC_8(VAR_9 == -1, "Expected -1, got %d\n", VAR_9);
    FUNC_8(FUNC_0() == VAR_1,
        "Expected ERROR_SECTION_NOT_FOUND, got %08x\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_9 = FUNC_6( VAR_5, "Sectionname");
    FUNC_8(VAR_9 == 2, "Expected 2, got %d\n", VAR_9);
    FUNC_8(FUNC_0() == VAR_2,
        "Expected ERROR_SUCCESS, got %08x\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_7( ((void*)0), VAR_5, "ImNotThere", "ImNotThere", VAR_10, VAR_11, &VAR_12);
    FUNC_8(!VAR_8, "Expected failure\n");
    FUNC_8(FUNC_0() == VAR_0,
        "Expected ERROR_LINE_NOT_FOUND, got %08x\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_7( ((void*)0), VAR_5, "Sectionname", "ImNotThere", VAR_10, VAR_11, &VAR_12);
    FUNC_8(!VAR_8, "Expected failure\n");
    FUNC_8(FUNC_0() == VAR_0,
        "Expected ERROR_LINE_NOT_FOUND, got %08x\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_7( ((void*)0), VAR_5, "Sectionname", "Keyname1", VAR_10, VAR_11, &VAR_12);
    FUNC_8(VAR_8, "Expected success\n");
    FUNC_8(FUNC_0() == VAR_2,
        "Expected ERROR_SUCCESS, got %08x\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_5( VAR_5, "ImNotThere", 1, &VAR_7 );
    FUNC_8(!VAR_8, "Expected failure\n");
    FUNC_8(FUNC_0() == VAR_0,
        "Expected ERROR_LINE_NOT_FOUND, got %08x\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_5( VAR_5, "Sectionname", 1, &VAR_7 );
    FUNC_8(VAR_8, "Expected success\n");
    FUNC_8(FUNC_0() == VAR_2,
        "Expected ERROR_SUCCESS, got %08x\n", FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_5( VAR_5, "Sectionname", 3, &VAR_7 );
    FUNC_8(!VAR_8, "Expected failure\n");
    FUNC_8(FUNC_0() == VAR_0,
        "Expected ERROR_LINE_NOT_FOUND, got %08x\n", FUNC_0());

    FUNC_2( VAR_5 );
}
