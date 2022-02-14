
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int u; } ;
typedef int GXV_Validator ;
typedef TYPE_1__* GXV_StateTable_GlyphOffsetCPtr ;
typedef size_t FT_UShort ;
typedef TYPE_1__* FT_Bytes ;
typedef TYPE_1__* FT_Byte ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__** VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
  FUNC_3(
    FT_Byte VAR_2,
    FT_UShort VAR_3,
    GXV_StateTable_GlyphOffsetCPtr VAR_4,
    FT_Bytes VAR_5,
    FT_Bytes VAR_6,
    GXV_Validator VAR_7 )
  {
    FT_UShort VAR_8;
    FT_UShort VAR_9;
    FT_UShort VAR_10;
    FT_UShort VAR_11;
    FT_UShort VAR_12 = 0;

    FUNC_0( VAR_2 );
    FUNC_0( VAR_5 );
    FUNC_0( VAR_6 );

    FUNC_0( VAR_1[VAR_12] );
    FUNC_0( VAR_4 );


    VAR_8 = (FT_UShort)( ( VAR_3 >> 15 ) & 1 );
    VAR_9 = (FT_UShort)( ( VAR_3 >> 14 ) & 1 );
    VAR_10 = (FT_UShort)( ( VAR_3 >> 13 ) & 1 );

    VAR_11 = (FT_UShort)( VAR_3 & 0x1FF0 );
    VAR_12 = (FT_UShort)( VAR_3 & 0x000F );

    FUNC_2(( "  IndicScript MorphRule for glyphOffset 0x%04x",
                VAR_4->u ));
    FUNC_2(( " markFirst=%01d", VAR_8 ));
    FUNC_2(( " dontAdvance=%01d", VAR_9 ));
    FUNC_2(( " markLast=%01d", VAR_10 ));
    FUNC_2(( " %02d", VAR_12 ));
    FUNC_2(( " %s\n", VAR_1[VAR_12] ));

    if ( VAR_8 > 0 && VAR_10 > 0 )
    {
      FUNC_2(( "  [odd] a glyph is marked as the first and last"
                  "  in Indic rearrangement\n" ));
      FUNC_1( VAR_0 );
    }

    if ( VAR_8 > 0 && VAR_9 > 0 )
    {
      FUNC_2(( "  [odd] the first glyph is marked as dontAdvance"
                  " in Indic rearrangement\n" ));
      FUNC_1( VAR_0 );
    }

    if ( 0 < VAR_11 )
    {
      FUNC_2(( " non-zero bits found in reserved range\n" ));
      FUNC_1( VAR_0 );
    }
    else
      FUNC_2(( "\n" ));
  }
