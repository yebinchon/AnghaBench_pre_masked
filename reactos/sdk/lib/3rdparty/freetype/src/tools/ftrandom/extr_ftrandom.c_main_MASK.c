
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int forever ;
typedef int FT_F26Dot6 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char**,char**) ;
 char** FUNC_2 (size_t,int) ;
 int VAR_0 ;
 char** VAR_1 ;
 char** VAR_2 ;
 unsigned int VAR_3 ;
 double VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char**) ;
 int FUNC_6 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_7 (unsigned int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char**) ;
 scalar_t__ FUNC_10 (char*,char**,int) ;
 int FUNC_11 (scalar_t__*) ;
 int FUNC_12 (int ,char*) ;

int
  FUNC_13( int VAR_11,
        char** VAR_12 )
  {
    char **VAR_13, **VAR_14;
    int VAR_15 = 0, VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;
    int VAR_19;
    time_t VAR_20;
    char* VAR_21 = ((void*)0);


    VAR_13 = FUNC_2( (size_t)( VAR_11 + 1 ), sizeof ( char ** ) );
    VAR_14 = FUNC_2( (size_t)( VAR_11 + 1 ), sizeof ( char ** ) );

    for ( VAR_19 = 1; VAR_19 < VAR_11; VAR_19++ )
    {
      char* VAR_22 = VAR_12[VAR_19];
      char* VAR_23;


      if ( VAR_22[0] == '-' && VAR_22[1] == '-' )
        VAR_22++;

      if ( FUNC_8( VAR_22, "-all" ) == 0 )
        VAR_18 = 1;
      else if ( FUNC_8( VAR_22, "-check-outlines" ) == 0 )
        VAR_0 = 1;
      else if ( FUNC_8( VAR_22, "-dir" ) == 0 )
        VAR_13[VAR_15++] = VAR_12[++VAR_19];
      else if ( FUNC_8( VAR_22, "-error-count" ) == 0 )
      {
        if ( !VAR_17 )
          VAR_4 = 0.0;
        VAR_17 = 1;
        VAR_3 = (unsigned int)FUNC_10( VAR_12[++VAR_19], &VAR_23, 10 );
        if ( *VAR_23 != '\0' )
        {
          FUNC_4( VAR_9, "Bad value for error-count: %s\n", VAR_12[VAR_19] );
          FUNC_3( 1 );
        }
      }
      else if ( FUNC_8( VAR_22, "-error-fraction" ) == 0 )
      {
        if ( !VAR_17 )
          VAR_3 = 0;
        VAR_17 = 1;
        VAR_4 = FUNC_9( VAR_12[++VAR_19], &VAR_23 );
        if ( *VAR_23 != '\0' )
        {
          FUNC_4( VAR_9, "Bad value for error-fraction: %s\n", VAR_12[VAR_19] );
          FUNC_3( 1 );
        }
        if ( VAR_4 < 0.0 || VAR_4 > 1.0 )
        {
          FUNC_4( VAR_9, "error-fraction must be in the range [0;1]\n" );
          FUNC_3( 1 );
        }
      }
      else if ( FUNC_8( VAR_22, "-ext" ) == 0 )
        VAR_14[VAR_16++] = VAR_12[++VAR_19];
      else if ( FUNC_8( VAR_22, "-help" ) == 0 )
      {
        FUNC_12( VAR_10, VAR_12[0] );
        FUNC_3( 0 );
      }
      else if ( FUNC_8( VAR_22, "-nohints" ) == 0 )
        VAR_6 = 1;
      else if ( FUNC_8( VAR_22, "-rasterize" ) == 0 )
        VAR_7 = 1;
      else if ( FUNC_8( VAR_22, "-results" ) == 0 )
        VAR_8 = VAR_12[++VAR_19];
      else if ( FUNC_8( VAR_22, "-size" ) == 0 )
      {
        VAR_5 = (FT_F26Dot6)( FUNC_9( VAR_12[++VAR_19], &VAR_23 ) * 64 );
        if ( *VAR_23 != '\0' || VAR_5 < 64 )
        {
          FUNC_4( VAR_9, "Bad value for size: %s\n", VAR_12[VAR_19] );
          FUNC_3( 1 );
        }
      }
      else if ( FUNC_8( VAR_22, "-test" ) == 0 )
        VAR_21 = VAR_12[++VAR_19];
      else
      {
        FUNC_12( VAR_9, VAR_12[0] );
        FUNC_3( 1 );
      }
    }

    if ( VAR_18 )
    {
      FUNC_5( VAR_14 );
      VAR_14 = ((void*)0);
    }
    else if ( VAR_16 == 0 )
    {
      FUNC_5( VAR_14 );
      VAR_14 = VAR_2;
    }

    if ( VAR_15 == 0 )
    {
      FUNC_5( VAR_13 );
      VAR_13 = VAR_1;
    }

    if ( VAR_21 )
      FUNC_0( VAR_21 );

    FUNC_11( &VAR_20 );
    FUNC_7( (unsigned int)VAR_20 );

    FUNC_1( VAR_13, VAR_14 );
    FUNC_6( VAR_8, 0755 );

    forever
      FUNC_14();

    return 0;
  }
