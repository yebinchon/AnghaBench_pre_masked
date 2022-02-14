
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OutputFormat ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const* const,char*) ;
 int FUNC_3 (int ,char*,char const* const) ;
 int FUNC_4 (int *,int ,char const*) ;
 int FUNC_5 () ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int) ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_8 () ;

int FUNC_9( int VAR_9, const char* const* VAR_10 )
{
  int VAR_11 = 0;
  int VAR_12 = 0;
  OutputFormat VAR_13 = VAR_1;
  FILE* VAR_14 = VAR_8;
  const char* VAR_15 = ((void*)0);

  if ( VAR_9 < 2 )
    FUNC_8();


  while ( VAR_9 > 1 && VAR_10[1][0] == '-' )
  {
    const char* VAR_16 = VAR_10[1];

    switch ( VAR_16[1] )
    {
      case 'v':
        VAR_12 = 1;
        break;

      case 'o':
        if ( VAR_16[2] == 0 )
        {
          if ( VAR_9 < 2 )
            FUNC_8();

          VAR_16 = VAR_10[2];
          VAR_10++;
          VAR_9--;
        }
        else
          VAR_16 += 2;

        VAR_14 = FUNC_2( VAR_16, "wt" );
        if ( !VAR_14 )
        {
          FUNC_3( VAR_6, "could not open '%s' for writing\n", VAR_10[2] );
          FUNC_0(3);
        }
        break;

      case 'd':
        if ( VAR_16[2] == 0 )
        {
          if ( VAR_9 < 2 )
            FUNC_8();

          VAR_16 = VAR_10[2];
          VAR_10++;
          VAR_9--;
        }
        else
          VAR_16 += 2;

        VAR_15 = VAR_16;
        break;

      case 'w':
        VAR_13 = VAR_4;
        switch ( VAR_16[2] )
        {
          case 'B':
            VAR_13 = VAR_0;
            break;

          case 'W':
            VAR_13 = VAR_3;
            break;

          case 'N':
            VAR_13 = VAR_2;
            break;

          case 0:
            break;

          default:
            FUNC_8();
        }
        break;

      case 0:
        VAR_11 = 1;
        break;

      default:
        FUNC_8();
    }

    VAR_9--;
    VAR_10++;
  }

  if ( VAR_11 )
  {
    FUNC_7( VAR_7, VAR_12 );
  }
  else
  {
    for ( --VAR_9, VAR_10++; VAR_9 > 0; VAR_9--, VAR_10++ )
    {
      FILE* VAR_17 = FUNC_2( VAR_10[0], "rb" );

      if ( !VAR_17 )
        FUNC_3( VAR_6, "unable to open '%s'\n", VAR_10[0] );
      else
      {
        if ( VAR_12 )
          FUNC_3( VAR_6, "opening '%s'\n", VAR_10[0] );

        FUNC_7( VAR_17, VAR_12 );
        FUNC_1( VAR_17 );
      }
    }
  }

  if ( VAR_5 == 0 )
    FUNC_6( "could not find exported functions !!\n" );

  FUNC_5();
  FUNC_4( VAR_14, VAR_13, VAR_15 );

  if ( VAR_14 != VAR_8 )
    FUNC_1( VAR_14 );

  return 0;
}
