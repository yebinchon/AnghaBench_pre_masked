
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
 int VAR_2 ;
 int FUNC_0 (int *,int,int,int **,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int ,int *,int*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ,int *,int **) ;
 int VAR_3 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,char*,int) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ) ;
 char const* VAR_7 ;

__attribute__((used)) static void FUNC_16( IWbemServices *VAR_8 )
{
    static const WCHAR VAR_9[] =
        {'C','o','n','f','i','g','M','a','n','a','g','e','r','E','r','r','o','r','C','o','d','e',0};
    static const WCHAR VAR_10[] =
        {'D','r','i','v','e','r','D','a','t','e',0};
    static const WCHAR VAR_11[]=
        {'I','n','s','t','a','l','l','e','d','D','i','s','p','l','a','y','D','r','i','v','e','r','s',0};
    static const WCHAR VAR_12[] =
        {'S','t','a','t','u','s',0};
    static const WCHAR VAR_13[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','W','i','n','3','2','_',
         'V','i','d','e','o','C','o','n','t','r','o','l','l','e','r',0};
    BSTR VAR_14 = FUNC_5( VAR_7 ), VAR_15 = FUNC_5( VAR_13 );
    IEnumWbemClassObject *VAR_16;
    IWbemClassObject *VAR_17;
    VARIANT VAR_18;
    CIMTYPE VAR_19;
    HRESULT VAR_20;
    DWORD VAR_21;

    VAR_20 = FUNC_4( VAR_8, VAR_14, VAR_15, 0, ((void*)0), &VAR_16 );
    if (VAR_20 != VAR_3)
    {
        FUNC_14( "Win32_VideoController not available\n" );
        return;
    }

    for (;;)
    {
        VAR_20 = FUNC_0( VAR_16, 10000, 1, &VAR_17, &VAR_21 );
        if (VAR_20 != VAR_3) break;

        VAR_19 = 0xdeadbeef;
        FUNC_11( &VAR_18 );
        VAR_20 = FUNC_2( VAR_17, VAR_9, 0, &VAR_18, &VAR_19, ((void*)0) );
        FUNC_12( VAR_20 == VAR_3, "got %08x\n", VAR_20 );
        FUNC_12( FUNC_9( &VAR_18 ) == VAR_5, "unexpected variant type 0x%x\n", FUNC_9( &VAR_18 ) );
        FUNC_12( VAR_19 == VAR_2, "unexpected type 0x%x\n", VAR_19 );
        FUNC_13( "configmanagererrorcode %d\n", FUNC_8( &VAR_18 ) );

        VAR_19 = 0xdeadbeef;
        FUNC_11( &VAR_18 );
        VAR_20 = FUNC_2( VAR_17, VAR_10, 0, &VAR_18, &VAR_19, ((void*)0) );
        FUNC_12( VAR_20 == VAR_3, "got %08x\n", VAR_20 );
        FUNC_12( FUNC_9( &VAR_18 ) == VAR_4, "unexpected variant type 0x%x\n", FUNC_9( &VAR_18 ) );
        FUNC_12( VAR_19 == VAR_0, "unexpected type 0x%x\n", VAR_19 );
        FUNC_13( "driverdate %s\n", FUNC_15(FUNC_7( &VAR_18 )) );
        FUNC_10( &VAR_18 );

        VAR_19 = 0xdeadbeef;
        FUNC_11( &VAR_18 );
        VAR_20 = FUNC_2( VAR_17, VAR_11, 0, &VAR_18, &VAR_19, ((void*)0) );
        FUNC_12( VAR_20 == VAR_3, "got %08x\n", VAR_20 );
        FUNC_12( FUNC_9( &VAR_18 ) == VAR_4 || FUNC_9( &VAR_18 ) == VAR_6, "unexpected variant type 0x%x\n", FUNC_9( &VAR_18 ) );
        FUNC_12( VAR_19 == VAR_1, "unexpected type 0x%x\n", VAR_19 );
        FUNC_13( "installeddisplaydrivers %s\n", FUNC_15(FUNC_7( &VAR_18 )) );
        FUNC_10( &VAR_18 );

        VAR_19 = 0xdeadbeef;
        FUNC_11( &VAR_18 );
        VAR_20 = FUNC_2( VAR_17, VAR_12, 0, &VAR_18, &VAR_19, ((void*)0) );
        FUNC_12( VAR_20 == VAR_3, "got %08x\n", VAR_20 );
        FUNC_12( FUNC_9( &VAR_18 ) == VAR_4, "unexpected variant type 0x%x\n", FUNC_9( &VAR_18 ) );
        FUNC_12( VAR_19 == VAR_1, "unexpected type 0x%x\n", VAR_19 );
        FUNC_13( "status %s\n", FUNC_15(FUNC_7( &VAR_18 )) );
        FUNC_10( &VAR_18 );

        FUNC_3( VAR_17 );
    }

    FUNC_1( VAR_16 );
    FUNC_6( VAR_15 );
    FUNC_6( VAR_14 );
}
