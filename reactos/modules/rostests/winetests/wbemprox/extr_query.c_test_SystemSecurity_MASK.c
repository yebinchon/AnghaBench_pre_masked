
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sid_admin_buffer ;
typedef char WCHAR ;
typedef int VARIANT ;
struct TYPE_2__ {int Control; scalar_t__ Owner; scalar_t__ Group; } ;
typedef int SID ;
typedef TYPE_1__ SECURITY_DESCRIPTOR_RELATIVE ;
typedef int PSID ;
typedef scalar_t__ LPBYTE ;
typedef int IWbemServices ;
typedef int IWbemClassObject ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int CIMTYPE ;
typedef int BYTE ;
typedef int BSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int *,int*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char const*,int ,int *,int*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ,int *,int *,int **,int *) ;
 int FUNC_5 (int *,int ,int ,int *,int **,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_5 ;
 int FUNC_7 (int ,void**) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_17 (int,char*,...) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static void FUNC_19( IWbemServices *VAR_11 )
{
    static const WCHAR VAR_12[] = {'_','_','S','y','s','t','e','m','S','e','c','u','r','i','t','y',0};
    static const WCHAR VAR_13[] = {'G','e','t','S','D',0};
    static const WCHAR VAR_14[] = {'R','e','t','u','r','n','V','a','l','u','e',0};
    static const WCHAR VAR_15[] = {'S','D',0};
    BSTR VAR_16 = FUNC_9( VAR_12 ), VAR_17;
    IWbemClassObject *VAR_18, *VAR_19;
    VARIANT VAR_20, VAR_21;
    void *VAR_22;
    SECURITY_DESCRIPTOR_RELATIVE *VAR_23;
    CIMTYPE VAR_24;
    HRESULT VAR_25;
    BYTE VAR_26[VAR_3];
    SID *VAR_27 = (SID*)VAR_26;
    DWORD VAR_28;
    BOOL VAR_29;

    VAR_25 = FUNC_5( VAR_11, VAR_16, 0, ((void*)0), &VAR_18, ((void*)0) );
    if (VAR_25 != VAR_5)
    {
        FUNC_18( "__SystemSecurity not available\n" );
        return;
    }
    FUNC_3( VAR_18 );

    VAR_28 = sizeof(VAR_26);
    VAR_29 = FUNC_0( VAR_10, ((void*)0), VAR_27, &VAR_28 );
    FUNC_17( VAR_29, "CreateWellKnownSid failed\n" );

    VAR_19 = ((void*)0);
    VAR_17 = FUNC_9( VAR_13 );
    VAR_25 = FUNC_4( VAR_11, VAR_16, VAR_17, 0, ((void*)0), ((void*)0), &VAR_19, ((void*)0) );
    FUNC_17( VAR_25 == VAR_5 || VAR_25 == VAR_9, "failed to execute method %08x\n", VAR_25 );
    FUNC_10( VAR_17 );

    if (FUNC_6(VAR_25))
    {
        VAR_24 = 0xdeadbeef;
        FUNC_16( &VAR_20 );
        VAR_25 = FUNC_2( VAR_19, VAR_14, 0, &VAR_20, &VAR_24, ((void*)0) );
        FUNC_17( VAR_25 == VAR_5, "failed to get return value %08x\n", VAR_25 );
        FUNC_17( FUNC_14( &VAR_20 ) == VAR_7, "unexpected variant type 0x%x\n", FUNC_14( &VAR_20 ) );
        FUNC_17( !FUNC_12( &VAR_20 ), "unexpected error %u\n", FUNC_13( &VAR_20 ) );
        FUNC_17( VAR_24 == VAR_1, "unexpected type 0x%x\n", VAR_24 );

        VAR_24 = 0xdeadbeef;
        FUNC_16( &VAR_21 );
        VAR_25 = FUNC_2( VAR_19, VAR_15, 0, &VAR_21, &VAR_24, ((void*)0) );
        FUNC_17( VAR_25 == VAR_5, "failed to get names %08x\n", VAR_25 );
        FUNC_17( FUNC_14( &VAR_21 ) == (VAR_8|VAR_6), "unexpected variant type 0x%x\n", FUNC_14( &VAR_21 ) );
        FUNC_17( VAR_24 == (VAR_2|VAR_0), "unexpected type 0x%x\n", VAR_24 );

        VAR_25 = FUNC_7( FUNC_11( &VAR_21 ), &VAR_22 );
        FUNC_17( VAR_25 == VAR_5, "SafeArrayAccessData failed %x\n", VAR_25 );
        if (FUNC_6(VAR_25))
        {
            VAR_23 = VAR_22;

            FUNC_17( (VAR_23->Control & VAR_4) == VAR_4, "relative flag unset\n" );
            FUNC_17( VAR_23->Owner != 0, "no owner SID\n");
            FUNC_17( VAR_23->Group != 0, "no owner SID\n");
            FUNC_17( FUNC_1( (PSID)((LPBYTE)VAR_23 + VAR_23->Owner), VAR_27 ), "unexpected owner SID\n" );
            FUNC_17( FUNC_1( (PSID)((LPBYTE)VAR_23 + VAR_23->Group), VAR_27 ), "unexpected group SID\n" );

            VAR_25 = FUNC_8( FUNC_11( &VAR_21 ) );
            FUNC_17( VAR_25 == VAR_5, "SafeArrayUnaccessData failed %x\n", VAR_25 );
        }

        FUNC_15( &VAR_21 );
        FUNC_3( VAR_19 );
    }
    else if (VAR_25 == VAR_9)
        FUNC_18( "insufficient privs to test __SystemSecurity\n" );

    FUNC_10( VAR_16 );
}
