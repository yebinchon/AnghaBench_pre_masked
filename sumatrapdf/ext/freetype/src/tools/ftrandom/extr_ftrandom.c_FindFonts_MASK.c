
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_size; int st_mode; } ;
struct fontlist {int dummy; } ;
struct dirent {char* d_name; } ;
typedef int buffer ;
struct TYPE_5__ {int * name; int len; } ;
typedef int DIR ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,char**) ;
 unsigned int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 (int ,char*,...) ;
 int * FUNC_6 (char*) ;
 struct dirent* FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (TYPE_1__*,unsigned int) ;
 int FUNC_9 (char*,int,char*,char*,char*) ;
 int FUNC_10 (char*,struct stat*) ;
 int VAR_2 ;
 int * FUNC_11 (char*) ;

__attribute__((used)) static void
  FUNC_12( char** VAR_3,
             char** VAR_4 )
  {
    int VAR_5;
    unsigned int VAR_6;
    char VAR_7[1025];
    struct stat VAR_8;


    VAR_6 = 0;
    VAR_0 = 0;

    for ( VAR_5 = 0; VAR_3[VAR_5] != ((void*)0); VAR_5++ )
    {
      DIR* VAR_9;
      struct dirent* VAR_10;


      VAR_9 = FUNC_6( VAR_3[VAR_5] );
      if ( !VAR_9 )
      {
        FUNC_5( VAR_2,
                 "Can't open example font directory `%s'\n",
                 VAR_3[VAR_5] );
        FUNC_2( 1 );
      }

      while ( ( VAR_10 = FUNC_7( VAR_9 ) ) != ((void*)0) )
      {
        FUNC_9( VAR_7, sizeof ( VAR_7 ),
                  "%s/%s", VAR_3[VAR_5], VAR_10->d_name );
        if ( FUNC_10( VAR_7, &VAR_8 ) == -1 || FUNC_0( VAR_8.st_mode ) )
          continue;
        if ( !VAR_4 || FUNC_3( VAR_7, VAR_4 ) )
        {
          if ( VAR_0 >= VAR_6 )
          {
            VAR_6 += 100;
            VAR_1 = FUNC_8( VAR_1, VAR_6 * sizeof ( struct fontlist ) );
            if ( !VAR_1 )
            {
              FUNC_5( VAR_2, "Can't allocate memory\n" );
              FUNC_2( 1 );
            }
          }

          VAR_1[VAR_0].name = FUNC_11( VAR_7 );
          VAR_1[VAR_0].len = VAR_8.st_size;

          FUNC_4( &VAR_1[VAR_0] );
          VAR_0++;
        }
      }

      FUNC_1( VAR_9 );
    }

    if ( VAR_0 == 0 )
    {
      FUNC_5( VAR_2, "Can't find matching font files.\n" );
      FUNC_2( 1 );
    }

    VAR_1[VAR_0].name = ((void*)0);
  }
