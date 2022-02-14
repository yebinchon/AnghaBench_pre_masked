
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ HFILE ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_4 ;
 int FUNC_7 (int,char*,...) ;
 int VAR_5 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9( void )
{
    HFILE VAR_6;
    UINT VAR_7;
    char VAR_8[10000];
    BOOL VAR_9;

    VAR_6 = FUNC_5( VAR_4, 0 );
    if (VAR_6 == VAR_0)
    {
        FUNC_7(0,"couldn't create file \"%s\" (err=%d)\n",VAR_4,FUNC_1());
        return;
    }

    FUNC_7( VAR_0 != FUNC_3( VAR_6, VAR_5, FUNC_8( VAR_5 ) ), "_hwrite complains\n" );
    FUNC_7( VAR_0 != FUNC_4(VAR_6), "_lclose complains\n" );

    VAR_6 = FUNC_6( VAR_4, VAR_1 );
    FUNC_7( VAR_0 == FUNC_3( VAR_6, VAR_5, FUNC_8( VAR_5 ) ), "_hwrite shouldn't be able to write!\n" );
    VAR_7 = FUNC_2( VAR_6, VAR_8, FUNC_8( VAR_5 ) );
    FUNC_7( FUNC_8( VAR_5 ) == VAR_7, "file read size error\n" );
    FUNC_7( VAR_0 != FUNC_4(VAR_6), "_lclose complains\n" );

    VAR_6 = FUNC_6( VAR_4, VAR_2 );
    VAR_7 = FUNC_2( VAR_6, VAR_8, 2 * FUNC_8( VAR_5 ) );
    FUNC_7( FUNC_8( VAR_5 ) == VAR_7, "file read size error\n" );
    FUNC_7( VAR_0 != FUNC_3( VAR_6, VAR_5, FUNC_8( VAR_5 ) ), "_hwrite should write just fine\n" );
    FUNC_7( VAR_0 != FUNC_4(VAR_6), "_lclose complains\n" );

    VAR_6 = FUNC_6( VAR_4, VAR_3 );
    FUNC_7( VAR_0 == FUNC_2( VAR_6, VAR_8, 1 ), "you should only be able to write this file\n" );
    FUNC_7( VAR_0 != FUNC_3( VAR_6, VAR_5, FUNC_8( VAR_5 ) ), "_hwrite should write just fine\n" );
    FUNC_7( VAR_0 != FUNC_4(VAR_6), "_lclose complains\n" );

    VAR_9 = FUNC_0( VAR_4 );
    FUNC_7( VAR_9, "DeleteFile failed (%d)\n", FUNC_1( ) );

}
