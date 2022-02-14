
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int VARIANT ;
typedef int IWbemServices ;
typedef int IWbemClassObject ;
typedef int IEnumWbemClassObject ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int CIMTYPE ;
typedef int BSTR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int*) ;
 int FUNC_2 (char*,int*) ;
 int FUNC_3 (int *,int,int,int **,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,int ,int *,int*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,int ,int *,int **) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_4 ;
 int FUNC_14 (char*,char const*) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int,char*,int,...) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,int ) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (char*) ;
 char const* VAR_5 ;

__attribute__((used)) static void FUNC_23( IWbemServices *VAR_6 )
{
    static const WCHAR VAR_7[] = {'\\',0};
    static const WCHAR VAR_8[] = {'M','e','m','o','r','y','T','y','p','e',0};
    static const WCHAR VAR_9[] = {'M','o','d','e','l',0};
    static const WCHAR VAR_10[] = {'N','a','m','e',0};
    static const WCHAR VAR_11[] = {'U','s','e','r','N','a','m','e',0};
    static const WCHAR VAR_12[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','W','i','n','3','2','_',
         'C','o','m','p','u','t','e','r','S','y','s','t','e','m',0};
    BSTR VAR_13 = FUNC_8( VAR_5 ), VAR_14 = FUNC_8( VAR_12 );
    IEnumWbemClassObject *VAR_15;
    IWbemClassObject *VAR_16;
    VARIANT VAR_17;
    CIMTYPE VAR_18;
    HRESULT VAR_19;
    WCHAR VAR_20[VAR_1 + 1];
    WCHAR VAR_21[128];
    DWORD VAR_22, VAR_23;

    VAR_22 = FUNC_0( VAR_20 );
    if (!FUNC_1( VAR_20, &VAR_22 ))
        VAR_20[0] = 0;

    FUNC_16( VAR_21, VAR_20 );
    FUNC_14( VAR_21, VAR_7 );
    VAR_22 = FUNC_0( VAR_21 ) - FUNC_17( VAR_21 );
    if (!FUNC_2( VAR_21 + FUNC_17( VAR_21 ), &VAR_22 ))
        VAR_21[0] = 0;

    if (!VAR_20[0] || !VAR_21[0])
    {
        FUNC_19( "Failed to get user or computer name\n" );
        goto out;
    }

    VAR_19 = FUNC_7( VAR_6, VAR_13, VAR_14, 0, ((void*)0), &VAR_15 );
    if (VAR_19 != VAR_2)
    {
        FUNC_21( "Win32_ComputerSystem not available\n" );
        goto out;
    }

    VAR_19 = FUNC_3( VAR_15, 10000, 1, &VAR_16, &VAR_23 );
    FUNC_18( VAR_19 == VAR_2, "got %08x\n", VAR_19 );

    VAR_18 = 0xdeadbeef;
    FUNC_13( &VAR_17 );
    VAR_19 = FUNC_5( VAR_16, VAR_8, 0, &VAR_17, &VAR_18, ((void*)0) );
    FUNC_18( VAR_19 == VAR_4, "got %08x\n", VAR_19 );

    VAR_18 = 0xdeadbeef;
    FUNC_13( &VAR_17 );
    VAR_19 = FUNC_5( VAR_16, VAR_9, 0, &VAR_17, &VAR_18, ((void*)0) );
    FUNC_18( VAR_19 == VAR_2, "failed to get model %08x\n", VAR_19 );
    FUNC_18( FUNC_11( &VAR_17 ) == VAR_3, "unexpected variant type 0x%x\n", FUNC_11( &VAR_17 ) );
    FUNC_18( VAR_18 == VAR_0, "unexpected type 0x%x\n", VAR_18 );
    FUNC_20( "model: %s\n", FUNC_22(FUNC_10( &VAR_17 )) );
    FUNC_12( &VAR_17 );

    VAR_18 = 0xdeadbeef;
    FUNC_13( &VAR_17 );
    VAR_19 = FUNC_5( VAR_16, VAR_10, 0, &VAR_17, &VAR_18, ((void*)0) );
    FUNC_18( VAR_19 == VAR_2, "failed to get computer name %08x\n", VAR_19 );
    FUNC_18( FUNC_11( &VAR_17 ) == VAR_3, "unexpected variant type 0x%x\n", FUNC_11( &VAR_17 ) );
    FUNC_18( VAR_18 == VAR_0, "unexpected type 0x%x\n", VAR_18 );
    FUNC_18( !FUNC_15( FUNC_10( &VAR_17 ), VAR_20 ), "got %s, expected %s\n", FUNC_22(FUNC_10(&VAR_17)), FUNC_22(VAR_20) );
    FUNC_12( &VAR_17 );

    VAR_18 = 0xdeadbeef;
    FUNC_13( &VAR_17 );
    VAR_19 = FUNC_5( VAR_16, VAR_11, 0, &VAR_17, &VAR_18, ((void*)0) );
    FUNC_18( VAR_19 == VAR_2, "failed to get computer name %08x\n", VAR_19 );
    FUNC_18( FUNC_11( &VAR_17 ) == VAR_3, "unexpected variant type 0x%x\n", FUNC_11( &VAR_17 ) );
    FUNC_18( VAR_18 == VAR_0, "unexpected type 0x%x\n", VAR_18 );
    FUNC_18( !FUNC_15( FUNC_10( &VAR_17 ), VAR_21 ), "got %s, expected %s\n", FUNC_22(FUNC_10(&VAR_17)), FUNC_22(VAR_21) );
    FUNC_12( &VAR_17 );

    FUNC_6( VAR_16 );
    FUNC_4( VAR_15 );
out:
    FUNC_9( VAR_14 );
    FUNC_9( VAR_13 );
}
