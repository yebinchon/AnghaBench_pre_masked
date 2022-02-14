
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef scalar_t__ HFILE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (int,char*,...) ;
 char* VAR_5 ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12( void )
{
    HFILE VAR_6;
    char VAR_7[10000];
    LONG VAR_8;
    LONG VAR_9;
    LONG VAR_10;
    BOOL VAR_11;

    FUNC_2(VAR_4,VAR_0);
    FUNC_0( VAR_4 );
    VAR_6 = FUNC_6( VAR_4, 0 );
    if (VAR_6 == VAR_2)
    {
        FUNC_10(0,"couldn't create file \"%s\" (err=%d)\n",VAR_4,FUNC_1());
        return;
    }

    FUNC_10( VAR_2 != FUNC_4( VAR_6, VAR_5, FUNC_11( VAR_5 ) ), "_hwrite complains\n" );

    FUNC_10( VAR_2 != FUNC_5(VAR_6), "_lclose complains\n" );

    VAR_6 = FUNC_8( VAR_4, VAR_3 );

    FUNC_10( VAR_2 != VAR_6, "couldn't open file \"%s\" again (err=%d)\n", VAR_4, FUNC_1( ) );

    VAR_8 = FUNC_3( VAR_6, VAR_7, 2 * FUNC_11( VAR_5 ) );

    FUNC_10( FUNC_9( VAR_5 ) == VAR_8, "file read size error\n" );

    for (VAR_9 = 0; VAR_9 < FUNC_9( VAR_5 ); VAR_9++)
    {
        FUNC_10( 0 == FUNC_7( VAR_6, 0, VAR_1 ), "_llseek complains\n" );
        FUNC_10( FUNC_3( VAR_6, VAR_7, VAR_9 ) == VAR_9, "erratic _hread return value\n" );
        for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
        {
            FUNC_10( VAR_7[VAR_10] == VAR_5[VAR_10], "that's not what's written\n" );
        }
    }

    FUNC_10( VAR_2 != FUNC_5( VAR_6 ), "_lclose complains\n" );

    VAR_11 = FUNC_0( VAR_4 );
    FUNC_10( VAR_11 != 0, "DeleteFile failed (%d)\n", FUNC_1( ) );
}
