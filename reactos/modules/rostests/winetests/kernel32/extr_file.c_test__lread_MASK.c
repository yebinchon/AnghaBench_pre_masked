
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef scalar_t__ HFILE ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,char*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (int,char*,...) ;
 char* VAR_4 ;
 scalar_t__ FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11( void )
{
    HFILE VAR_5;
    char VAR_6[10000];
    UINT VAR_7;
    UINT VAR_8;
    UINT VAR_9;
    BOOL VAR_10;

    VAR_5 = FUNC_4( VAR_3, 0 );
    if (VAR_5 == VAR_1)
    {
        FUNC_9(0,"couldn't create file \"%s\" (err=%d)\n",VAR_3,FUNC_1());
        return;
    }

    FUNC_9( VAR_1 != FUNC_2( VAR_5, VAR_4, FUNC_10( VAR_4 ) ), "_hwrite complains\n" );

    FUNC_9( VAR_1 != FUNC_3(VAR_5), "_lclose complains\n" );

    VAR_5 = FUNC_6( VAR_3, VAR_2 );

    FUNC_9( VAR_1 != VAR_5, "couldn't open file \"%s\" again (err=%d)\n", VAR_3, FUNC_1());

    VAR_7 = FUNC_7( VAR_5, VAR_6, 2 * FUNC_10( VAR_4 ) );

    FUNC_9( FUNC_8( VAR_4 ) == VAR_7, "file read size error\n" );

    for (VAR_8 = 0; VAR_8 < FUNC_10( VAR_4 ); VAR_8++)
    {
        FUNC_9( 0 == FUNC_5( VAR_5, 0, VAR_0 ), "_llseek complains\n" );
        FUNC_9( FUNC_7( VAR_5, VAR_6, VAR_8 ) == VAR_8, "erratic _hread return value\n" );
        for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
        {
            FUNC_9( VAR_6[VAR_9] == VAR_4[VAR_9], "that's not what's written\n" );
        }
    }

    FUNC_9( VAR_1 != FUNC_3(VAR_5), "_lclose complains\n" );

    VAR_10 = FUNC_0( VAR_3 );
    FUNC_9( VAR_10, "DeleteFile failed (%d)\n", FUNC_1( ) );
}
