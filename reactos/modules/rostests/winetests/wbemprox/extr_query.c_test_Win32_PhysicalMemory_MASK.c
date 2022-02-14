
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
typedef scalar_t__ DWORD ;
typedef int CIMTYPE ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int,int **,scalar_t__*) ;
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
    static const WCHAR VAR_7[] = {'C','a','p','a','c','i','t','y',0};
    static const WCHAR VAR_8[] = {'M','e','m','o','r','y','T','y','p','e',0};
    static const WCHAR VAR_9[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','W','i','n','3','2','_',
         'P','h','y','s','i','c','a','l','M','e','m','o','r','y',0};
    BSTR VAR_10 = FUNC_5( VAR_5 ), VAR_11 = FUNC_5( VAR_9 );
    IEnumWbemClassObject *VAR_12;
    IWbemClassObject *VAR_13;
    VARIANT VAR_14;
    CIMTYPE VAR_15;
    HRESULT VAR_16;
    DWORD VAR_17;

    VAR_16 = FUNC_4( VAR_6, VAR_10, VAR_11, 0, ((void*)0), &VAR_12 );
    if (VAR_16 != VAR_2)
    {
        FUNC_14( "Win32_PhysicalMemory not available\n" );
        return;
    }

    VAR_16 = FUNC_0( VAR_12, 10000, 1, &VAR_13, &VAR_17 );
    FUNC_12( VAR_16 == VAR_2, "got %08x\n", VAR_16 );

    if (VAR_17 > 0)
    {
        VAR_15 = 0xdeadbeef;
        FUNC_11( &VAR_14 );
        VAR_16 = FUNC_2( VAR_13, VAR_7, 0, &VAR_14, &VAR_15, ((void*)0) );
        FUNC_12( VAR_16 == VAR_2, "failed to get capacity %08x\n", VAR_16 );
        FUNC_12( FUNC_9( &VAR_14 ) == VAR_3, "unexpected variant type 0x%x\n", FUNC_9( &VAR_14 ) );
        FUNC_12( VAR_15 == VAR_1, "unexpected type 0x%x\n", VAR_15 );
        FUNC_13( "capacity %s\n", FUNC_15(FUNC_7( &VAR_14 )) );
        FUNC_10( &VAR_14 );

        VAR_15 = 0xdeadbeef;
        FUNC_11( &VAR_14 );
        VAR_16 = FUNC_2( VAR_13, VAR_8, 0, &VAR_14, &VAR_15, ((void*)0) );
        FUNC_12( VAR_16 == VAR_2, "failed to get memory type %08x\n", VAR_16 );
        FUNC_12( FUNC_9( &VAR_14 ) == VAR_4, "unexpected variant type 0x%x\n", FUNC_9( &VAR_14 ) );
        FUNC_12( VAR_15 == VAR_0, "unexpected type 0x%x\n", VAR_15 );
        FUNC_13( "memorytype %u\n", FUNC_8( &VAR_14 ) );
        FUNC_10( &VAR_14 );

        FUNC_3( VAR_13 );
    }
    FUNC_1( VAR_12 );
    FUNC_6( VAR_11 );
    FUNC_6( VAR_10 );
}
