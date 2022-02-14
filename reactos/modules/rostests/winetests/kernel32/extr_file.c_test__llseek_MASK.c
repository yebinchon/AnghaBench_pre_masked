
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef int INT ;
typedef scalar_t__ HFILE ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__,char*,int) ;
 int FUNC_3 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__,int,int ) ;
 int VAR_4 ;
 int FUNC_7 (int,char*,...) ;
 char* VAR_5 ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9( void )
{
    INT VAR_6;
    HFILE VAR_7;
    char VAR_8[1];
    LONG VAR_9;
    BOOL VAR_10;

    VAR_7 = FUNC_5( VAR_4, 0 );
    if (VAR_7 == VAR_3)
    {
        FUNC_7(0,"couldn't create file \"%s\" (err=%d)\n",VAR_4,FUNC_1());
        return;
    }

    for (VAR_6 = 0; VAR_6 < 400; VAR_6++)
    {
        FUNC_7( FUNC_3( VAR_7, VAR_5, FUNC_8( VAR_5 ) ) != -1, "_hwrite complains\n" );
    }
    FUNC_7( FUNC_6( VAR_7, 400 * FUNC_8( VAR_5 ), VAR_1 ) != -1, "should be able to seek\n" );
    FUNC_7( FUNC_6( VAR_7, 27 + 35 * FUNC_8( VAR_5 ), VAR_0 ) != -1, "should be able to seek\n" );

    VAR_9 = FUNC_2( VAR_7, VAR_8, 1);
    FUNC_7( 1 == VAR_9, "file read size error\n" );
    FUNC_7( VAR_8[0] == VAR_5[27], "_llseek error, it got lost seeking\n" );
    FUNC_7( FUNC_6( VAR_7, -400 * (LONG)FUNC_8( VAR_5 ), VAR_2 ) != -1, "should be able to seek\n" );

    VAR_9 = FUNC_2( VAR_7, VAR_8, 1);
    FUNC_7( 1 == VAR_9, "file read size error\n" );
    FUNC_7( VAR_8[0] == VAR_5[0], "_llseek error, it got lost seeking\n" );
    FUNC_7( FUNC_6( VAR_7, 1000000, VAR_2 ) != -1, "should be able to seek past file; poor, poor Windows programmers\n" );
    FUNC_7( VAR_3 != FUNC_4(VAR_7), "_lclose complains\n" );

    VAR_10 = FUNC_0( VAR_4 );
    FUNC_7( VAR_10, "DeleteFile failed (%d)\n", FUNC_1( ) );
}
