
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fontlist {char* name; int len; scalar_t__ isascii; scalar_t__ isbinary; } ;
typedef int buffer ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,char*) ;
 size_t FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (char*,int,size_t,int *) ;
 unsigned int FUNC_8 (struct fontlist*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int *) ;
 int VAR_1 ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int
  FUNC_12( struct fontlist* VAR_2,
            char* VAR_3 )
  {
    static char VAR_4[8096];
    FILE *VAR_5, *VAR_6;
    size_t VAR_7;
    unsigned int VAR_8, VAR_9;


    VAR_5 = FUNC_3( VAR_2->name, "r" );
    if ( !VAR_5 )
    {
      FUNC_4( VAR_1, "Can't open `%s'\n", VAR_2->name );
      return 0;
    }

    VAR_6 = FUNC_3( VAR_3, "w+" );
    if ( !VAR_6 )
    {
      FUNC_4( VAR_1, "Can't create temporary output file `%s'\n",
               VAR_3 );
      FUNC_0( 1 );
    }

    while ( ( VAR_7 = FUNC_5( VAR_4, 1, sizeof ( VAR_4 ), VAR_5 ) ) > 0 )
      FUNC_7( VAR_4, 1, VAR_7, VAR_6 );

    FUNC_1( VAR_5 );

    VAR_9 = FUNC_8( VAR_2 );
    for ( VAR_8 = 0; VAR_8 < VAR_9; VAR_8++ )
    {
      FUNC_6( VAR_6, FUNC_9( 0, (int)( VAR_2->len - 1 ) ), VAR_0 );

      if ( VAR_2->isbinary )
        FUNC_10( FUNC_9( 0, 0xFF ), VAR_6 );
      else if ( VAR_2->isascii )
        FUNC_10( FUNC_9( 0x20, 0x7E ), VAR_6 );
      else
      {
        int VAR_10 = FUNC_9( 0, 15 );


        if ( VAR_10 < 10 )
          VAR_10 += '0';
        else
          VAR_10 += 'A' - 10;

        FUNC_10( VAR_10, VAR_6 );
      }
    }

    if ( FUNC_2( VAR_6 ) )
    {
      FUNC_1( VAR_6 );
      FUNC_11( VAR_3 );
      return 0;
    }

    FUNC_1( VAR_6 );

    return 1;
  }
