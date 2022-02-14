
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int glyph_count; int extra1; } ;
typedef TYPE_1__* OTV_Validator ;
typedef int FT_UInt ;
typedef int FT_Bytes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,TYPE_1__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
  FUNC_10( FT_Bytes VAR_6,
                           OTV_Validator VAR_7 )
  {
    FT_Bytes VAR_8 = VAR_6;
    FT_UInt VAR_9;
    FT_UInt VAR_10;

    FUNC_6( VAR_1 );
    FUNC_6( VAR_0 );


    FUNC_2( "JstfScript" );

    FUNC_1( 6 );
    FUNC_5( VAR_1 );
    FUNC_5( VAR_0 );
    VAR_10 = FUNC_0( VAR_8 );

    FUNC_9(( " (JstfLangSysCount = %d)\n", VAR_10 ));

    VAR_9 = VAR_10 * 6 + 6;

    FUNC_8( VAR_1 );
    if ( VAR_1 )
    {
      VAR_7->extra1 = VAR_7->glyph_count;
      FUNC_3( VAR_2 );
      FUNC_7( VAR_6 + VAR_1, VAR_7 );
    }

    FUNC_8( VAR_0 );
    if ( VAR_0 )
    {
      FUNC_4( VAR_3, VAR_4 );
      FUNC_7( VAR_6 + VAR_0, VAR_7 );
    }

    FUNC_1( 6 * VAR_10 );


    FUNC_4( VAR_3, VAR_4 );
    for ( ; VAR_10 > 0; VAR_10-- )
    {
      VAR_8 += 4;

      FUNC_7( VAR_6 + FUNC_0( VAR_8 ), VAR_7 );
    }

    VAR_5;
  }
