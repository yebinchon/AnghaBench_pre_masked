
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int glyph_count; } ;
typedef TYPE_1__* OTV_Validator ;
typedef int FT_UInt ;
typedef int FT_Bytes ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,TYPE_1__*,int) ;

__attribute__((used)) static void
  FUNC_6( FT_Bytes VAR_3,
                                        OTV_Validator VAR_4 )
  {
    FT_Bytes VAR_5 = VAR_3, VAR_6;
    FT_UInt VAR_7;
    FT_UInt VAR_8, VAR_9, VAR_10;


    FUNC_2( "ReverseChainSingleSubst" );

    FUNC_1( 2 );
    VAR_7 = FUNC_0( VAR_5 );

    FUNC_3(( " (format %d)\n", VAR_7 ));

    switch ( VAR_7 )
    {
    case 1:
      FUNC_1( 4 );
      VAR_6 = VAR_3 + FUNC_0( VAR_5 );
      VAR_8 = FUNC_0( VAR_5 );

      FUNC_3(( " (BacktrackGlyphCount = %d)\n", VAR_8 ));

      FUNC_5( VAR_6, VAR_4, -1 );

      FUNC_1( VAR_8 * 2 + 2 );

      for ( ; VAR_8 > 0; VAR_8-- )
        FUNC_5( VAR_3 + FUNC_0( VAR_5 ), VAR_4, -1 );

      VAR_9 = FUNC_0( VAR_5 );

      FUNC_3(( " (LookaheadGlyphCount = %d)\n", VAR_9 ));

      FUNC_1( VAR_9 * 2 + 2 );

      for ( ; VAR_9 > 0; VAR_9-- )
        FUNC_5( VAR_3 + FUNC_0( VAR_5 ), VAR_4, -1 );

      VAR_10 = FUNC_0( VAR_5 );

      FUNC_3(( " (GlyphCount = %d)\n", VAR_10 ));

      if ( VAR_10 != FUNC_4( VAR_6 ) )
        VAR_0;

      FUNC_1( VAR_10 * 2 );


      for ( ; VAR_10 > 0; VAR_10-- )
        if ( FUNC_0( VAR_5 ) >= VAR_4->glyph_count )
          VAR_0;

      break;

    default:
      VAR_1;
    }

    VAR_2;
  }
