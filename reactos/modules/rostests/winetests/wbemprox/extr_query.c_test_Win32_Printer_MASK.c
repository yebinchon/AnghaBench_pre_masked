
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef char WCHAR ;
typedef int VARIANT ;
typedef int IWbemServices ;
typedef int IWbemClassObject ;
typedef int IEnumWbemClassObject ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int CIMTYPE ;
typedef int BSTR ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int **,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int ,int *,int*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ,int *,int **) ;
 int VAR_1 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int,char*,int) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ) ;
 char const* VAR_4 ;

__attribute__((used)) static void FUNC_15( IWbemServices *VAR_5 )
{
    static const WCHAR VAR_6[] =
        {'D','e','v','i','c','e','I','d',0};
    static const WCHAR VAR_7[] =
        {'L','o','c','a','t','i','o','n',0};
    static const WCHAR VAR_8[] =
        {'P','o','r','t','N','a','m','e',0};
    static const WCHAR VAR_9[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','W','i','n','3','2','_',
         'P','r','i','n','t','e','r',0};
    BSTR VAR_10 = FUNC_5( VAR_4 ), VAR_11 = FUNC_5( VAR_9 );
    IEnumWbemClassObject *VAR_12;
    IWbemClassObject *VAR_13;
    VARIANT VAR_14;
    CIMTYPE VAR_15;
    HRESULT VAR_16;
    DWORD VAR_17;

    VAR_16 = FUNC_4( VAR_5, VAR_10, VAR_11, 0, ((void*)0), &VAR_12 );
    if (VAR_16 != VAR_1)
    {
        FUNC_13( "Win32_Printer not available\n" );
        return;
    }

    for (;;)
    {
        VAR_16 = FUNC_0( VAR_12, 10000, 1, &VAR_13, &VAR_17 );
        if (VAR_16 != VAR_1) break;

        VAR_15 = 0xdeadbeef;
        FUNC_10( &VAR_14, 0, sizeof(VAR_14) );
        VAR_16 = FUNC_2( VAR_13, VAR_6, 0, &VAR_14, &VAR_15, ((void*)0) );
        FUNC_11( VAR_16 == VAR_1, "got %08x\n", VAR_16 );
        FUNC_11( FUNC_8( &VAR_14 ) == VAR_2, "unexpected variant type 0x%x\n", FUNC_8( &VAR_14 ) );
        FUNC_11( VAR_15 == VAR_0, "unexpected type 0x%x\n", VAR_15 );
        FUNC_12( "deviceid %s\n", FUNC_14(FUNC_7( &VAR_14 )) );
        FUNC_9( &VAR_14 );

        VAR_15 = 0xdeadbeef;
        FUNC_10( &VAR_14, 0, sizeof(VAR_14) );
        VAR_16 = FUNC_2( VAR_13, VAR_7, 0, &VAR_14, &VAR_15, ((void*)0) );
        FUNC_11( VAR_16 == VAR_1, "got %08x\n", VAR_16 );
        FUNC_11( FUNC_8( &VAR_14 ) == VAR_2 || FUNC_8( &VAR_14 ) == VAR_3, "unexpected variant type 0x%x\n", FUNC_8( &VAR_14 ) );
        FUNC_11( VAR_15 == VAR_0, "unexpected type 0x%x\n", VAR_15 );
        FUNC_12( "location %s\n", FUNC_14(FUNC_7( &VAR_14 )) );
        FUNC_9( &VAR_14 );

        VAR_15 = 0xdeadbeef;
        FUNC_10( &VAR_14, 0, sizeof(VAR_14) );
        VAR_16 = FUNC_2( VAR_13, VAR_8, 0, &VAR_14, &VAR_15, ((void*)0) );
        FUNC_11( VAR_16 == VAR_1, "got %08x\n", VAR_16 );
        FUNC_11( FUNC_8( &VAR_14 ) == VAR_2, "unexpected variant type 0x%x\n", FUNC_8( &VAR_14 ) );
        FUNC_11( VAR_15 == VAR_0, "unexpected type 0x%x\n", VAR_15 );
        FUNC_12( "portname %s\n", FUNC_14(FUNC_7( &VAR_14 )) );
        FUNC_9( &VAR_14 );

        FUNC_3( VAR_13 );
    }

    FUNC_1( VAR_12 );
    FUNC_6( VAR_11 );
    FUNC_6( VAR_10 );
}
