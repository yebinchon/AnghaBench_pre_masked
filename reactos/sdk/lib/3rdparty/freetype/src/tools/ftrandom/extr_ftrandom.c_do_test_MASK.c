
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*,char*) ;
 char* VAR_5 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,char*,char*,int ) ;
 int VAR_6 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int,int*,int ) ;

__attribute__((used)) static void
  FUNC_13( void )
  {
    int VAR_7 = FUNC_7( 0, (int)( VAR_3 - 1 ) );
    static int VAR_8 = 0;
    char VAR_9[1024];


    FUNC_10( VAR_9, "%s/test%d", VAR_5, VAR_8++ );

    if ( FUNC_3 ( &VAR_4[VAR_7], VAR_9 ) )
    {
      FUNC_9( VAR_0, VAR_1 );


      FUNC_2( 20 );
      if ( ( VAR_2 = FUNC_5() ) == 0 )
        FUNC_0( VAR_9 );
      else if ( VAR_2 != -1 )
      {
        int VAR_10;


        FUNC_12( VAR_2, &VAR_10, 0 );
        FUNC_2( 0 );
        if ( FUNC_1 ( VAR_10 ) )
          FUNC_8( "Error found in file `%s'\n", VAR_9 );
        else
          FUNC_11( VAR_9 );
      }
      else
      {
        FUNC_6( VAR_6, "Can't fork test case.\n" );
        FUNC_4( 1 );
      }
      FUNC_2( 0 );
    }
  }
