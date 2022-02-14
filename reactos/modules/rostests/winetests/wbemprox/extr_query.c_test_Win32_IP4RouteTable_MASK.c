
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


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int,int **,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int ,int *,int*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ,int *,int **) ;
 int VAR_2 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,char*,int) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ) ;
 char const* VAR_5 ;

__attribute__((used)) static void FUNC_16( IWbemServices *VAR_6 )
{
    static const WCHAR VAR_7[] = {'D','e','s','t','i','n','a','t','i','o','n',0};
    static const WCHAR VAR_8[] = {'I','n','t','e','r','f','a','c','e','I','n','d','e','x',0};
    static const WCHAR VAR_9[] = {'N','e','x','t','H','o','p',0};
    static const WCHAR VAR_10[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','W','i','n','3','2','_',
         'I','P','4','R','o','u','t','e','T','a','b','l','e',0};
    BSTR VAR_11 = FUNC_5( VAR_5 ), VAR_12 = FUNC_5( VAR_10 );
    IEnumWbemClassObject *VAR_13;
    IWbemClassObject *VAR_14;
    VARIANT VAR_15;
    CIMTYPE VAR_16;
    HRESULT VAR_17;
    DWORD VAR_18;

    VAR_17 = FUNC_4( VAR_6, VAR_11, VAR_12, 0, ((void*)0), &VAR_13 );
    if (VAR_17 != VAR_2)
    {
        FUNC_14( "Win32_IP4RouteTable not available\n" );
        return;
    }

    for (;;)
    {
        VAR_17 = FUNC_0( VAR_13, 10000, 1, &VAR_14, &VAR_18 );
        if (VAR_17 != VAR_2) break;

        VAR_16 = 0xdeadbeef;
        FUNC_11( &VAR_15 );
        VAR_17 = FUNC_2( VAR_14, VAR_7, 0, &VAR_15, &VAR_16, ((void*)0) );
        FUNC_12( VAR_17 == VAR_2, "failed to get destination %08x\n", VAR_17 );
        FUNC_12( FUNC_9( &VAR_15 ) == VAR_3, "unexpected variant type 0x%x\n", FUNC_9( &VAR_15 ) );
        FUNC_12( VAR_16 == VAR_1, "unexpected type 0x%x\n", VAR_16 );
        FUNC_13( "destination %s\n", FUNC_15(FUNC_7( &VAR_15 )) );
        FUNC_10( &VAR_15 );

        VAR_16 = 0xdeadbeef;
        FUNC_11( &VAR_15 );
        VAR_17 = FUNC_2( VAR_14, VAR_8, 0, &VAR_15, &VAR_16, ((void*)0) );
        FUNC_12( VAR_17 == VAR_2, "failed to get interface index %08x\n", VAR_17 );
        FUNC_12( FUNC_9( &VAR_15 ) == VAR_4, "unexpected variant type 0x%x\n", FUNC_9( &VAR_15 ) );
        FUNC_12( VAR_16 == VAR_0, "unexpected type 0x%x\n", VAR_16 );
        FUNC_13( "interfaceindex %d\n", FUNC_8( &VAR_15 ) );
        FUNC_10( &VAR_15 );

        VAR_16 = 0xdeadbeef;
        FUNC_11( &VAR_15 );
        VAR_17 = FUNC_2( VAR_14, VAR_9, 0, &VAR_15, &VAR_16, ((void*)0) );
        FUNC_12( VAR_17 == VAR_2, "failed to get nexthop %08x\n", VAR_17 );
        FUNC_12( FUNC_9( &VAR_15 ) == VAR_3, "unexpected variant type 0x%x\n", FUNC_9( &VAR_15 ) );
        FUNC_12( VAR_16 == VAR_1, "unexpected type 0x%x\n", VAR_16 );
        FUNC_13( "nexthop %s\n", FUNC_15(FUNC_7( &VAR_15 )) );
        FUNC_10( &VAR_15 );

        FUNC_3( VAR_14 );
    }

    FUNC_1( VAR_13 );
    FUNC_6( VAR_12 );
    FUNC_6( VAR_11 );
}
