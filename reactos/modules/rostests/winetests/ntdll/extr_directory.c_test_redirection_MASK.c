
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    ULONG VAR_4, VAR_5;
    NTSTATUS VAR_6;

    if (!&FUNC_1 || !&FUNC_2)
    {
        FUNC_3( "Wow64 redirection not supported\n" );
        return;
    }
    VAR_6 = FUNC_2( VAR_0, &VAR_4 );
    if (VAR_6 == VAR_2)
    {
        FUNC_3( "Wow64 redirection not supported\n" );
        return;
    }
    FUNC_0( !VAR_6, "RtlWow64EnableFsRedirectionEx failed status %x\n", VAR_6 );

    VAR_6 = FUNC_2( VAR_0, &VAR_5 );
    FUNC_0( !VAR_6, "RtlWow64EnableFsRedirectionEx failed status %x\n", VAR_6 );
    FUNC_0( !VAR_5, "RtlWow64EnableFsRedirectionEx got %u\n", VAR_5 );

    VAR_6 = FUNC_2( VAR_3, &VAR_5 );
    FUNC_0( !VAR_6, "RtlWow64EnableFsRedirectionEx failed status %x\n", VAR_6 );
    VAR_6 = FUNC_2( VAR_3, &VAR_5 );
    FUNC_0( !VAR_6, "RtlWow64EnableFsRedirectionEx failed status %x\n", VAR_6 );
    FUNC_0( VAR_5 == 1, "RtlWow64EnableFsRedirectionEx got %u\n", VAR_5 );

    VAR_6 = FUNC_1( VAR_3 );
    FUNC_0( !VAR_6, "RtlWow64EnableFsRedirectionEx failed status %x\n", VAR_6 );
    VAR_6 = FUNC_2( VAR_3, &VAR_5 );
    FUNC_0( !VAR_6, "RtlWow64EnableFsRedirectionEx failed status %x\n", VAR_6 );
    FUNC_0( !VAR_5, "RtlWow64EnableFsRedirectionEx got %u\n", VAR_5 );

    VAR_6 = FUNC_2( VAR_3, ((void*)0) );
    FUNC_0( VAR_6 == VAR_1, "RtlWow64EnableFsRedirectionEx failed with status %x\n", VAR_6 );
    VAR_6 = FUNC_2( VAR_3, (void*)1 );
    FUNC_0( VAR_6 == VAR_1, "RtlWow64EnableFsRedirectionEx failed with status %x\n", VAR_6 );
    VAR_6 = FUNC_2( VAR_3, (void*)0xDEADBEEF );
    FUNC_0( VAR_6 == VAR_1, "RtlWow64EnableFsRedirectionEx failed with status %x\n", VAR_6 );

    VAR_6 = FUNC_1( VAR_0 );
    FUNC_0( !VAR_6, "RtlWow64EnableFsRedirectionEx failed status %x\n", VAR_6 );
    VAR_6 = FUNC_2( VAR_0, &VAR_5 );
    FUNC_0( !VAR_6, "RtlWow64EnableFsRedirectionEx failed status %x\n", VAR_6 );
    FUNC_0( VAR_5 == 1, "RtlWow64EnableFsRedirectionEx got %u\n", VAR_5 );

    FUNC_2( VAR_4, &VAR_5 );
}
