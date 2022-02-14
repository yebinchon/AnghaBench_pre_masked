
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int * LPCWSTR ;
typedef int * LPCSTR ;
typedef int INFCONTEXT ;
typedef int * HINF ;
typedef scalar_t__ BOOL ;


 int * VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*,int *,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int ** VAR_6 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,char*,...) ;
 int * FUNC_9 (int *,int) ;
 int * FUNC_10 (int *,int) ;
 int * FUNC_11 (int ,int *) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void FUNC_13(void)
{
    UINT VAR_7;
    BOOL VAR_8;
    HINF VAR_9;
    LPCSTR VAR_10;
    LPCWSTR VAR_11;
    INFCONTEXT VAR_12;
    int VAR_13;
    int VAR_14;
    BOOL VAR_15 = VAR_3;

    FUNC_1(0xdeadbeef);
    FUNC_5(((void*)0), ((void*)0));
    if (FUNC_0() == VAR_0)
    {
        FUNC_12("Using A-functions instead of W\n");
        VAR_15 = VAR_2;
    }

    VAR_9 = FUNC_11( VAR_4, &VAR_7 );
    FUNC_8( VAR_9 != ((void*)0), "Expected valid INF file\n" );

    VAR_8 = FUNC_3( VAR_9, "FileBranchInfo", ((void*)0), &VAR_12 );
    FUNC_8( VAR_8, "Failed to find first line\n" );



    for ( VAR_13 = 0; VAR_13 < 3; VAR_13++ )
    {
        if (VAR_15)
        {
            VAR_11 = FUNC_10( &VAR_12, VAR_13 );
            FUNC_8( VAR_11 != ((void*)0), "Failed to get field %i\n", VAR_13 );
            FUNC_8( !FUNC_5( VAR_6[VAR_13], VAR_11 ), "Wrong string returned\n" );
        }
        else
        {
            VAR_10 = FUNC_9( &VAR_12, VAR_13 );
            FUNC_8( VAR_10 != ((void*)0), "Failed to get field %i\n", VAR_13 );
            FUNC_8( !FUNC_4( VAR_5[VAR_13], VAR_10 ), "Wrong string returned\n" );
        }
    }

    if (VAR_15)
    {
        VAR_11 = FUNC_10( &VAR_12, 3 );
        FUNC_8( VAR_11 != ((void*)0), "Failed to get field 3\n" );
        VAR_14 = FUNC_7( VAR_11 );
        FUNC_8( VAR_14 == 511 ||
            VAR_14 == 4096,
            "Unexpected length, got %d\n", VAR_14 );

        VAR_11 = FUNC_10( &VAR_12, 4 );
        FUNC_8( VAR_11 == ((void*)0), "Expected NULL, got %p\n", VAR_11 );
        FUNC_8( FUNC_0() == VAR_1,
            "Expected ERROR_INVALID_PARAMETER, got %u\n", FUNC_0() );
    }
    else
    {
        VAR_10 = FUNC_9( &VAR_12, 3 );
        FUNC_8( VAR_10 != ((void*)0), "Failed to get field 3\n" );
        VAR_14 = FUNC_6( VAR_10 );
        FUNC_8( VAR_14 == 511,
            "Unexpected length, got %d\n", VAR_14 );

        VAR_10 = FUNC_9( &VAR_12, 4 );
        FUNC_8( VAR_10 == ((void*)0), "Expected NULL, got %p\n", VAR_10 );
        FUNC_8( FUNC_0() == VAR_1,
            "Expected ERROR_INVALID_PARAMETER, got %u\n", FUNC_0() );
    }

    FUNC_2( VAR_9 );
}
