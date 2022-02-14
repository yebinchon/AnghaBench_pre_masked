
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;
typedef int nameW ;
typedef int WNDCLASSW ;
typedef int WNDCLASSA ;
typedef int WCHAR ;
typedef int ULONG_PTR ;
typedef scalar_t__ HWND ;
typedef int * HMODULE ;
typedef int HANDLE ;
typedef int BOOL ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char*,int ,int ,int ,int,int,int *,int *,int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char const*,int *) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 () ;
 int * FUNC_9 (char*) ;
 int FUNC_10 (int,char*) ;
 int VAR_1 ;
 int FUNC_11 (int ,int ,char const*,int,int *,int) ;
 int FUNC_12 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_13 (int) ;
 int VAR_3 ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int,char*,...) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static void FUNC_19( const char *VAR_4 )
{
    WNDCLASSA VAR_5;
    WNDCLASSW VAR_6;
    BOOL VAR_7;
    HMODULE VAR_8;
    WCHAR VAR_9[20];
    HWND VAR_10;

    if (VAR_4[0] == '!')
    {
        char VAR_11[VAR_1];
        ULONG_PTR VAR_12;
        HANDLE VAR_13;

        VAR_4++;

        FUNC_10(sizeof(VAR_11)/sizeof(VAR_11[0]), VAR_11);
        FUNC_17(VAR_11, "comctl32_class.manifest");

        FUNC_14(VAR_11, VAR_3);
        VAR_13 = FUNC_15(VAR_11);
        VAR_7 = FUNC_3(VAR_11);
        FUNC_16(VAR_7, "Failed to delete manifest file, error %d.\n", FUNC_8());

        VAR_8 = FUNC_9( "comctl32" );
        FUNC_16( !VAR_8, "comctl32 already loaded\n" );

        VAR_7 = FUNC_0(VAR_13, &VAR_12);
        FUNC_16(VAR_7, "Failed to activate context.\n");


        VAR_8 = FUNC_9( "comctl32" );
        FUNC_16( !VAR_8 || FUNC_13(VAR_8 != ((void*)0)) , "comctl32 already loaded\n" );
        if (VAR_8)
        {
            FUNC_18("Module loaded during context activation. Skipping tests.\n");
            goto skiptest;
        }

        VAR_7 = FUNC_6( 0, VAR_4, &VAR_5 );
        FUNC_16( VAR_7 || FUNC_13(!VAR_7) , "GetClassInfoA failed for %s\n", VAR_4 );
        if (!VAR_7)
            goto skiptest;

        FUNC_11( VAR_0, 0, VAR_4, -1, VAR_9, sizeof(VAR_9)/sizeof(WCHAR) );
        VAR_7 = FUNC_7( 0, VAR_9, &VAR_6 );
        FUNC_16( VAR_7, "GetClassInfoW failed for %s\n", VAR_4 );
        VAR_8 = FUNC_9( "comctl32" );
        FUNC_16( VAR_8 != 0, "comctl32 not loaded\n" );
        FUNC_5( VAR_8 );
        VAR_8 = FUNC_9( "comctl32" );
        FUNC_16( !VAR_8 || FUNC_13(VAR_8 != ((void*)0)) , "comctl32 still loaded\n" );
        VAR_10 = FUNC_1( VAR_4, "test", VAR_2, 0, 0, 10, 10, ((void*)0), ((void*)0), ((void*)0), 0 );
        FUNC_16( VAR_10 != 0, "failed to create window for %s\n", VAR_4 );
        VAR_8 = FUNC_9( "comctl32" );
        FUNC_16( VAR_8 != 0, "comctl32 not loaded\n" );
        FUNC_4( VAR_10 );

    skiptest:
        VAR_7 = FUNC_2(0, VAR_12);
        FUNC_16(VAR_7, "Failed to deactivate context.\n");
        FUNC_12(VAR_13);
    }
    else
    {
        VAR_8 = FUNC_9( "comctl32" );
        FUNC_16( !VAR_8, "comctl32 already loaded\n" );
        VAR_7 = FUNC_6( 0, VAR_4, &VAR_5 );
        FUNC_16( VAR_7 || FUNC_13(!VAR_7) , "GetClassInfoA failed for %s\n", VAR_4 );
        if (!VAR_7) return;
        FUNC_11( VAR_0, 0, VAR_4, -1, VAR_9, sizeof(VAR_9)/sizeof(WCHAR) );
        VAR_7 = FUNC_7( 0, VAR_9, &VAR_6 );
        FUNC_16( VAR_7, "GetClassInfoW failed for %s\n", VAR_4 );
        VAR_8 = FUNC_9( "comctl32" );
        FUNC_16( VAR_8 != 0, "comctl32 not loaded\n" );
        FUNC_5( VAR_8 );
        VAR_8 = FUNC_9( "comctl32" );
        FUNC_16( !VAR_8, "comctl32 still loaded\n" );
        VAR_10 = FUNC_1( VAR_4, "test", VAR_2, 0, 0, 10, 10, ((void*)0), ((void*)0), ((void*)0), 0 );
        FUNC_16( VAR_10 != 0, "failed to create window for %s\n", VAR_4 );
        VAR_8 = FUNC_9( "comctl32" );
        FUNC_16( VAR_8 != 0, "comctl32 not loaded\n" );
        FUNC_4( VAR_10 );
    }
}
