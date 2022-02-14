
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
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const* const,char*) ;
 int FUNC_3 (int ,char*,char const* const) ;
 int FUNC_4 (int *,int ,char const*) ;
 int FUNC_5 () ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int) ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_8 () ;

int FUNC_9( int VAR_10, const char* const* VAR_11 )
{
  int VAR_12 = 0;
  int VAR_13 = 0;
  OutputFormat VAR_14 = VAR_2;
  FILE* VAR_15 = VAR_9;
  const char* VAR_16 = ((void*)0);

  if ( VAR_10 < 2 )
    FUNC_8();


  while ( VAR_10 > 1 && VAR_11[1][0] == '-' )
  {
    const char* VAR_17 = VAR_11[1];

    switch ( VAR_17[1] )
    {
      case 'v':
        VAR_13 = 1;
        break;

      case 'o':
        if ( VAR_17[2] == 0 )
        {
          if ( VAR_10 < 2 )
            FUNC_8();

          VAR_17 = VAR_11[2];
          VAR_11++;
          VAR_10--;
        }
        else
          VAR_17 += 2;

        VAR_15 = FUNC_2( VAR_17, "wt" );
        if ( !VAR_15 )
        {
          FUNC_3( VAR_7, "could not open '%s' for writing\n", VAR_11[2] );
          FUNC_0(3);
        }
        break;

      case 'd':
        if ( VAR_17[2] == 0 )
        {
          if ( VAR_10 < 2 )
            FUNC_8();

          VAR_17 = VAR_11[2];
          VAR_11++;
          VAR_10--;
        }
        else
          VAR_17 += 2;

        VAR_16 = VAR_17;
        break;

      case 'w':
        VAR_14 = VAR_5;
        switch ( VAR_17[2] )
        {
          case 'B':
            VAR_14 = VAR_0;
            break;

          case 'W':
            VAR_14 = VAR_4;
            break;

          case 'N':
            VAR_14 = VAR_3;
            break;

          case 'L':
            VAR_14 = VAR_1;
            break;

          case 0:
            break;

          default:
            FUNC_8();
        }
        break;

      case 0:
        VAR_12 = 1;
        break;

      default:
        FUNC_8();
    }

    VAR_10--;
    VAR_11++;
  }

  if ( VAR_12 )
  {
    FUNC_7( VAR_8, VAR_13 );
  }
  else
  {
    for ( --VAR_10, VAR_11++; VAR_10 > 0; VAR_10--, VAR_11++ )
    {
      FILE* VAR_18 = FUNC_2( VAR_11[0], "rb" );

      if ( !VAR_18 )
        FUNC_3( VAR_7, "unable to open '%s'\n", VAR_11[0] );
      else
      {
        if ( VAR_13 )
          FUNC_3( VAR_7, "opening '%s'\n", VAR_11[0] );

        FUNC_7( VAR_18, VAR_13 );
        FUNC_1( VAR_18 );
      }
    }
  }

  if ( VAR_6 == 0 )
    FUNC_6( "could not find exported functions !!\n" );

  FUNC_5();
  FUNC_4( VAR_15, VAR_14, VAR_16 );

  if ( VAR_15 != VAR_9 )
    FUNC_1( VAR_15 );

  return 0;
}
