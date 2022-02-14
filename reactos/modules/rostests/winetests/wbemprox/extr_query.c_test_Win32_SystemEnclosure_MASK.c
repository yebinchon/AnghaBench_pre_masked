
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int VARIANT ;
typedef int ULONG ;
typedef size_t LONG ;
typedef int IWbemServices ;
typedef int IWbemClassObject ;
typedef int IEnumWbemClassObject ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int CIMTYPE ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int,int **,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int ,int *,int*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ,int *,int **) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (int ,void**) ;
 int FUNC_7 (int ,int,size_t*) ;
 int FUNC_8 (int ,int,size_t*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int,char*,int) ;
 int FUNC_19 (char*,int ) ;
 int FUNC_20 (int ) ;
 char const* VAR_9 ;

__attribute__((used)) static void FUNC_21( IWbemServices *VAR_10 )
{
    static const WCHAR VAR_11[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','W','i','n','3','2','_',
         'S','y','s','t','e','m','E','n','c','l','o','s','u','r','e',0};
    static const WCHAR VAR_12[] = {'C','a','p','t','i','o','n',0};
    static const WCHAR VAR_13[] = {'C','h','a','s','s','i','s','T','y','p','e','s',0};
    static const WCHAR VAR_14[] = {'D','e','s','c','r','i','p','t','i','o','n',0};
    static const WCHAR VAR_15[] = {'L','o','c','k','P','r','e','s','e','n','t',0};
    static const WCHAR VAR_16[] = {'M','a','n','u','f','a','c','t','u','r','e','r',0};
    static const WCHAR VAR_17[] = {'N','a','m','e',0};
    static const WCHAR VAR_18[] = {'T','a','g',0};
    BSTR VAR_19 = FUNC_10( VAR_9 ), VAR_20 = FUNC_10( VAR_11 );
    IEnumWbemClassObject *VAR_21;
    IWbemClassObject *VAR_22;
    CIMTYPE VAR_23;
    ULONG VAR_24;
    VARIANT VAR_25;
    DWORD *VAR_26;
    HRESULT VAR_27;

    VAR_27 = FUNC_4( VAR_10, VAR_19, VAR_20, 0, ((void*)0), &VAR_21 );
    FUNC_18( VAR_27 == VAR_4, "IWbemServices_ExecQuery failed %08x\n", VAR_27 );

    VAR_27 = FUNC_0( VAR_21, 10000, 1, &VAR_22, &VAR_24 );
    FUNC_18( VAR_27 == VAR_4, "IEnumWbemClassObject_Next failed %08x\n", VAR_27 );

    VAR_23 = 0xdeadbeef;
    FUNC_17( &VAR_25 );
    VAR_27 = FUNC_2( VAR_22, VAR_12, 0, &VAR_25, &VAR_23, ((void*)0) );
    FUNC_18( VAR_27 == VAR_4, "failed to get caption %08x\n", VAR_27 );
    FUNC_18( FUNC_15( &VAR_25 ) == VAR_7, "unexpected variant type 0x%x\n", FUNC_15( &VAR_25 ) );
    FUNC_18( VAR_23 == VAR_2, "unexpected type 0x%x\n", VAR_23 );
    FUNC_19( "caption: %s\n", FUNC_20(FUNC_14( &VAR_25 )) );
    FUNC_16( &VAR_25 );

    VAR_23 = 0xdeadbeef;
    FUNC_17( &VAR_25 );
    VAR_27 = FUNC_2( VAR_22, VAR_13, 0, &VAR_25, &VAR_23, ((void*)0) );
    FUNC_18( VAR_27 == VAR_4, "failed to get chassis types %08x\n", VAR_27 );
    FUNC_18( FUNC_15( &VAR_25 ) == (VAR_8|VAR_5), "unexpected variant type 0x%x\n", FUNC_15( &VAR_25 ) );
    FUNC_18( VAR_23 == (VAR_3|VAR_1), "unexpected type 0x%x\n", VAR_23 );
    VAR_27 = FUNC_6( FUNC_12( &VAR_25 ), (void **)&VAR_26 );
    FUNC_18( VAR_27 == VAR_4, "SafeArrayAccessData failed %x\n", VAR_27 );
    if (FUNC_5(VAR_27))
    {
        LONG VAR_28, VAR_29, VAR_30;

        VAR_27 = FUNC_7( FUNC_12( &VAR_25 ), 1, &VAR_29 );
        FUNC_18( VAR_27 == VAR_4, "SafeArrayGetLBound failed %x\n", VAR_27 );
        VAR_27 = FUNC_8( FUNC_12( &VAR_25 ), 1, &VAR_30 );
        FUNC_18( VAR_27 == VAR_4, "SafeArrayGetUBound failed %x\n", VAR_27 );
        if (FUNC_15( &VAR_25 ) == (VAR_8|VAR_5))
        {
            for (VAR_28 = 0; VAR_28 < VAR_30 - VAR_29 + 1; VAR_28++)
                FUNC_19( "chassis type: %u\n", VAR_26[VAR_28] );
        }
        VAR_27 = FUNC_9( FUNC_12( &VAR_25 ) );
        FUNC_18( VAR_27 == VAR_4, "SafeArrayUnaccessData failed %x\n", VAR_27 );
    }
    FUNC_16( &VAR_25 );

    VAR_23 = 0xdeadbeef;
    FUNC_17( &VAR_25 );
    VAR_27 = FUNC_2( VAR_22, VAR_14, 0, &VAR_25, &VAR_23, ((void*)0) );
    FUNC_18( VAR_27 == VAR_4, "failed to get description %08x\n", VAR_27 );
    FUNC_18( FUNC_15( &VAR_25 ) == VAR_7, "unexpected variant type 0x%x\n", FUNC_15( &VAR_25 ) );
    FUNC_18( VAR_23 == VAR_2, "unexpected type 0x%x\n", VAR_23 );
    FUNC_19( "description: %s\n", FUNC_20(FUNC_14( &VAR_25 )) );
    FUNC_16( &VAR_25 );

    VAR_23 = 0xdeadbeef;
    FUNC_17( &VAR_25 );
    VAR_27 = FUNC_2( VAR_22, VAR_15, 0, &VAR_25, &VAR_23, ((void*)0) );
    FUNC_18( VAR_27 == VAR_4, "failed to get lockpresent %08x\n", VAR_27 );
    FUNC_18( FUNC_15( &VAR_25 ) == VAR_6, "unexpected variant type 0x%x\n", FUNC_15( &VAR_25 ) );
    FUNC_18( VAR_23 == VAR_0, "unexpected type 0x%x\n", VAR_23 );
    FUNC_19( "lockpresent: %u\n", FUNC_13( &VAR_25 ) );
    FUNC_16( &VAR_25 );

    VAR_23 = 0xdeadbeef;
    FUNC_17( &VAR_25 );
    VAR_27 = FUNC_2( VAR_22, VAR_16, 0, &VAR_25, &VAR_23, ((void*)0) );
    FUNC_18( VAR_27 == VAR_4, "failed to get manufacturer %08x\n", VAR_27 );
    FUNC_18( FUNC_15( &VAR_25 ) == VAR_7, "unexpected variant type 0x%x\n", FUNC_15( &VAR_25 ) );
    FUNC_18( VAR_23 == VAR_2, "unexpected type 0x%x\n", VAR_23 );
    FUNC_19( "manufacturer: %s\n", FUNC_20(FUNC_14( &VAR_25 )) );
    FUNC_16( &VAR_25 );

    VAR_23 = 0xdeadbeef;
    FUNC_17( &VAR_25 );
    VAR_27 = FUNC_2( VAR_22, VAR_17, 0, &VAR_25, &VAR_23, ((void*)0) );
    FUNC_18( VAR_27 == VAR_4, "failed to get name %08x\n", VAR_27 );
    FUNC_18( FUNC_15( &VAR_25 ) == VAR_7, "unexpected variant type 0x%x\n", FUNC_15( &VAR_25 ) );
    FUNC_18( VAR_23 == VAR_2, "unexpected type 0x%x\n", VAR_23 );
    FUNC_19( "name: %s\n", FUNC_20(FUNC_14( &VAR_25 )) );
    FUNC_16( &VAR_25 );

    VAR_23 = 0xdeadbeef;
    FUNC_17( &VAR_25 );
    VAR_27 = FUNC_2( VAR_22, VAR_18, 0, &VAR_25, &VAR_23, ((void*)0) );
    FUNC_18( VAR_27 == VAR_4, "failed to get tag %08x\n", VAR_27 );
    FUNC_18( FUNC_15( &VAR_25 ) == VAR_7, "unexpected variant type 0x%x\n", FUNC_15( &VAR_25 ) );
    FUNC_18( VAR_23 == VAR_2, "unexpected type 0x%x\n", VAR_23 );
    FUNC_19( "tag: %s\n", FUNC_20(FUNC_14( &VAR_25 )) );
    FUNC_16( &VAR_25 );

    FUNC_3( VAR_22 );
    FUNC_1( VAR_21 );
    FUNC_11( VAR_20 );
    FUNC_11( VAR_19 );
}
