
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int short_path ;
typedef char WCHAR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int *) ;
 scalar_t__ FUNC_2 (char*,int,int ,int *,int ,int ,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int,char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    static const WCHAR VAR_9[] = {'\\','\\','?','\\',0};
    static const WCHAR VAR_10[] = { 'L', 'o', 'n', 'g', 'D', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', 'N', 'a', 'm', 'e', 0 };
    static const WCHAR VAR_11[] = { 't', 'e', 's', 't', 0 };
    static const WCHAR VAR_12[] = { '\\', 0 };
    static const WCHAR VAR_13[] = {'a','.','b','c','d','e',0};
    static const WCHAR VAR_14[] = { '*',0 };
    WCHAR VAR_15[VAR_8], VAR_16[VAR_8], *VAR_17;
    WCHAR VAR_18[VAR_8];
    DWORD VAR_19;
    HANDLE VAR_20;
    int VAR_21;

    FUNC_8(0xdeadbeef);
    FUNC_6( VAR_8, VAR_16 );
    if (FUNC_4() == VAR_1)
    {
        FUNC_13("GetTempPathW is not implemented\n");
        return;
    }

    FUNC_10( VAR_15, VAR_16 );
    FUNC_9( VAR_15, VAR_10 );
    FUNC_9( VAR_15, VAR_12 );
    VAR_21 = FUNC_1( VAR_15, ((void*)0) );
    FUNC_12( VAR_21, "Directory was not created. LastError = %d\n", FUNC_4() );




    FUNC_10( VAR_15, VAR_9 );
    FUNC_9( VAR_15, VAR_16 );
    FUNC_9( VAR_15, VAR_10 );
    FUNC_9( VAR_15, VAR_12 );
    VAR_18[0] = 0;
    VAR_19 = FUNC_5( VAR_15, VAR_18, sizeof(VAR_18) / sizeof(*VAR_18) );
    FUNC_12( VAR_19, "GetShortPathNameW returned 0.\n" );

    FUNC_10( VAR_15, VAR_16 );
    FUNC_9( VAR_15, VAR_10 );
    FUNC_9( VAR_15, VAR_12 );
    VAR_19 = FUNC_5( VAR_15, VAR_18, 0 );
    FUNC_12( VAR_19, "GetShortPathNameW returned 0.\n" );
    VAR_21 = FUNC_5( VAR_15, VAR_18, VAR_19 );
    FUNC_12( VAR_21 && VAR_21 == VAR_19-1, "GetShortPathNameW returned 0.\n" );

    FUNC_9( VAR_18, VAR_11 );


    FUNC_8(0xdeadbeef);
    VAR_19 = FUNC_5( VAR_18, VAR_15, 0 );
    FUNC_12(!VAR_19, "GetShortPathNameW should fail\n");
    FUNC_12(FUNC_4() == VAR_2, "expected ERROR_FILE_NOT_FOUND, got %d\n", FUNC_4());

    VAR_20 = FUNC_2( VAR_18, VAR_5|VAR_6, 0, ((void*)0), VAR_0, VAR_4, ((void*)0) );
    FUNC_12( VAR_20 != VAR_7, "File was not created.\n" );
    FUNC_0( VAR_20 );
    VAR_21 = FUNC_3( VAR_18 );
    FUNC_12( VAR_21, "Cannot delete file.\n" );

    VAR_17 = VAR_15 + FUNC_11(VAR_15);
    FUNC_10( VAR_17, VAR_13);
    VAR_20 = FUNC_2( VAR_15, VAR_5|VAR_6, 0, ((void*)0), VAR_0, VAR_4, ((void*)0) );
    FUNC_12( VAR_20 != VAR_7, "File was not created.\n" );
    FUNC_0( VAR_20 );

    VAR_19 = FUNC_5( VAR_15, VAR_18, sizeof(VAR_18)/sizeof(*VAR_18) );
    FUNC_12( VAR_19, "GetShortPathNameW failed: %u.\n", FUNC_4() );

    FUNC_10(VAR_17, VAR_14);
    FUNC_8(0xdeadbeef);
    VAR_19 = FUNC_5( VAR_15, VAR_18, sizeof(VAR_18)/sizeof(*VAR_18) );
    FUNC_12(!VAR_19, "GetShortPathNameW should fail\n");
    FUNC_12(FUNC_4() == VAR_3, "wrong error %d\n", FUNC_4());

    FUNC_10(VAR_17, VAR_13);
    VAR_21 = FUNC_3( VAR_15 );
    FUNC_12( VAR_21, "Cannot delete file.\n" );
    *VAR_17 = 0;


    VAR_21 = FUNC_7( VAR_15 );
    FUNC_12( VAR_21, "Cannot delete directory.\n" );
}
