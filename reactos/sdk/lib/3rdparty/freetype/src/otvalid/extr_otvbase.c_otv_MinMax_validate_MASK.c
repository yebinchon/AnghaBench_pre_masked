
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OTV_Validator ;
typedef int FT_UInt ;
typedef int FT_Bytes ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static void
  FUNC_8( FT_Bytes VAR_3,
                       OTV_Validator VAR_4 )
  {
    FT_Bytes VAR_5 = VAR_3;
    FT_UInt VAR_6;
    FT_UInt VAR_7;

    FUNC_4( VAR_1 );
    FUNC_4( VAR_0 );


    FUNC_2( "MinMax" );

    FUNC_1( 6 );

    FUNC_3( VAR_1 );
    FUNC_3( VAR_0 );
    VAR_7 = FUNC_0( VAR_5 );

    FUNC_6(( " (FeatMinMaxCount = %d)\n", VAR_7 ));

    VAR_6 = VAR_7 * 8 + 6;

    FUNC_5( VAR_1 );
    if ( VAR_1 )
      FUNC_7( VAR_3 + VAR_1, VAR_4 );

    FUNC_5( VAR_0 );
    if ( VAR_0 )
      FUNC_7( VAR_3 + VAR_0, VAR_4 );

    FUNC_1( VAR_7 * 8 );


    for ( ; VAR_7 > 0; VAR_7-- )
    {
      VAR_5 += 4;

      FUNC_3( VAR_1 );
      FUNC_3( VAR_0 );

      FUNC_5( VAR_1 );
      if ( VAR_1 )
        FUNC_7( VAR_3 + VAR_1, VAR_4 );

      FUNC_5( VAR_0 );
      if ( VAR_0 )
        FUNC_7( VAR_3 + VAR_0, VAR_4 );
    }

    VAR_2;
  }
