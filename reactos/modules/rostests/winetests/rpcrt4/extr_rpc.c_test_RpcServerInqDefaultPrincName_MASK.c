
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ RPC_STATUS ;
typedef scalar_t__ RPC_CSTR ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int *) ;
 char* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int *,int *) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(void)
{
    RPC_STATUS VAR_5;
    RPC_CSTR VAR_6, VAR_7;
    char *VAR_8;
    ULONG VAR_9 = 0;

    FUNC_1( VAR_0, ((void*)0), &VAR_9 );
    VAR_8 = FUNC_2( FUNC_0(), 0, VAR_9 );
    FUNC_1( VAR_0, VAR_8, &VAR_9 );

    VAR_5 = FUNC_4( 0, ((void*)0) );
    FUNC_7( VAR_5 == VAR_4, "got %u\n", VAR_5 );

    VAR_5 = FUNC_4( VAR_1, ((void*)0) );
    FUNC_7( VAR_5 == VAR_4, "got %u\n", VAR_5 );

    VAR_6 = (RPC_CSTR)0xdeadbeef;
    VAR_5 = FUNC_4( VAR_1, &VAR_6 );
    FUNC_7( VAR_5 == VAR_4, "got %u\n", VAR_5 );
    FUNC_7( VAR_6 == (RPC_CSTR)0xdeadbeef, "got unexpected principal\n" );

    VAR_7 = (RPC_CSTR)0xdeadbeef;
    VAR_5 = FUNC_4( VAR_2, &VAR_7 );
    FUNC_7( VAR_5 == VAR_3, "got %u\n", VAR_5 );
    FUNC_7( VAR_7 != (RPC_CSTR)0xdeadbeef, "expected valid principal\n" );
    FUNC_7( !FUNC_8( (const char *)VAR_7, VAR_8 ), "got \'%s\'\n", VAR_7 );
    FUNC_9("%s\n", VAR_7);

    VAR_5 = FUNC_5( (RPC_CSTR)"wine\\test", VAR_2, ((void*)0), ((void*)0) );
    FUNC_7( VAR_5 == VAR_3, "got %u\n", VAR_5 );

    VAR_6 = (RPC_CSTR)0xdeadbeef;
    VAR_5 = FUNC_4( VAR_2, &VAR_6 );
    FUNC_7( VAR_5 == VAR_3, "got %u\n", VAR_5 );
    FUNC_7( VAR_6 != (RPC_CSTR)0xdeadbeef, "expected valid principal\n" );
    FUNC_7( !FUNC_8( (const char *)VAR_6, VAR_8 ), "got \'%s\'\n", VAR_6 );
    FUNC_6( &VAR_6 );

    VAR_5 = FUNC_5( VAR_7, VAR_2, ((void*)0), ((void*)0) );
    FUNC_7( VAR_5 == VAR_3, "got %u\n", VAR_5 );

    FUNC_6( &VAR_7 );
    FUNC_3( FUNC_0(), 0, VAR_8 );
}
