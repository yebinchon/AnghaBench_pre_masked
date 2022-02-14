
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GXV_XStateTable_GlyphOffsetCPtr ;
typedef int GXV_Validator ;
typedef int FT_UShort ;
typedef int FT_Bytes ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
  FUNC_2(
    FT_UShort VAR_1,
    FT_UShort VAR_2,
    GXV_XStateTable_GlyphOffsetCPtr VAR_3,
    FT_Bytes VAR_4,
    FT_Bytes VAR_5,
    GXV_Validator VAR_6 )
  {





    FT_UShort VAR_7;




    FUNC_0( VAR_1 );
    FUNC_0( VAR_3 );
    FUNC_0( VAR_4 );
    FUNC_0( VAR_5 );
    VAR_7 = (FT_UShort)( VAR_2 & 0x1FF0 );




    if ( 0 < VAR_7 )
    {
      FUNC_1(( " non-zero bits found in reserved range\n" ));
      VAR_0;
    }
  }
