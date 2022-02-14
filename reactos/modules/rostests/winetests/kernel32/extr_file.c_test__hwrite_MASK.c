
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int ULONG ;
typedef scalar_t__ LONG ;
typedef scalar_t__ HLOCAL ;
typedef scalar_t__ HFILE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int VAR_4 ;
 int FUNC_10 (int,char*,...) ;
 char FUNC_11 () ;
 int FUNC_12 (unsigned int) ;
 scalar_t__ FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14( void )
{
    HFILE VAR_5;
    char VAR_6[10000];
    LONG VAR_7;
    LONG VAR_8;
    ULONG VAR_9;
    LONG VAR_10;
    char *VAR_11;
    HLOCAL VAR_12;
    char VAR_13[1];
    BOOL VAR_14;

    VAR_5 = FUNC_8( VAR_4, 0 );
    if (VAR_5 == VAR_0)
    {
        FUNC_10(0,"couldn't create file \"%s\" (err=%d)\n",VAR_4,FUNC_1());
        return;
    }

    FUNC_10( VAR_0 != FUNC_6( VAR_5, "", 0 ), "_hwrite complains\n" );

    FUNC_10( VAR_0 != FUNC_7(VAR_5), "_lclose complains\n" );

    VAR_5 = FUNC_9( VAR_4, VAR_2 );

    VAR_7 = FUNC_5( VAR_5, VAR_6, 1);

    FUNC_10( 0 == VAR_7, "file read size error\n" );

    FUNC_10( VAR_0 != FUNC_7(VAR_5), "_lclose complains\n" );

    VAR_5 = FUNC_9( VAR_4, VAR_3 );

    VAR_8 = 0;
    VAR_13[0] = '\0';
    FUNC_12( (unsigned)FUNC_13( ((void*)0) ) );
    for (VAR_9 = 0; VAR_9 < 100; VAR_9++)
    {
        for (VAR_10 = 0; VAR_10 < (LONG)sizeof( VAR_6 ); VAR_10++)
        {
            VAR_6[VAR_10] = FUNC_11( );
            VAR_13[0] = VAR_13[0] + VAR_6[VAR_10];
        }
        FUNC_10( VAR_0 != FUNC_6( VAR_5, VAR_6, sizeof( VAR_6 ) ), "_hwrite complains\n" );
        VAR_8 = VAR_8 + sizeof( VAR_6 );
    }

    FUNC_10( VAR_0 != FUNC_6( VAR_5, VAR_13, 1 ), "_hwrite complains\n" );
    VAR_8++;

    FUNC_10( VAR_0 != FUNC_7( VAR_5 ), "_lclose complains\n" );

    VAR_12 = FUNC_2( VAR_1, VAR_8 );

    FUNC_10( 0 != VAR_12, "LocalAlloc fails. (Could be out of memory.)\n" );

    VAR_11 = FUNC_4( VAR_12 );
    FUNC_10( ((void*)0) != VAR_11, "LocalLock whines\n" );

    VAR_5 = FUNC_9( VAR_4, VAR_2 );

    VAR_11 = FUNC_4( VAR_12 );
    FUNC_10( ((void*)0) != VAR_11, "LocalLock whines\n" );

    FUNC_10( VAR_8 == FUNC_5( VAR_5, VAR_11, VAR_8), "read length differ from write length\n" );

    VAR_13[0] = '\0';
    VAR_10 = 0;
    do
    {
        VAR_13[0] = VAR_13[0] + VAR_11[VAR_10];
        VAR_10++;
    }
    while (VAR_10 < VAR_8 - 1);

    FUNC_10( VAR_13[0] == VAR_11[VAR_10], "stored checksum differ from computed checksum\n" );

    FUNC_10( VAR_0 != FUNC_7( VAR_5 ), "_lclose complains\n" );

    VAR_14 = FUNC_0( VAR_4 );
    FUNC_10( VAR_14 != 0, "DeleteFile failed (%d)\n", FUNC_1( ) );

    FUNC_3( VAR_11 );
}
