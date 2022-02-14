
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ subtable_length; } ;
typedef TYPE_1__* GXV_Validator ;
typedef int FT_UShort ;
typedef scalar_t__ FT_ULong ;
typedef int FT_Fixed ;
typedef scalar_t__ FT_Bytes ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,TYPE_1__*) ;

__attribute__((used)) static void
  FUNC_4( FT_Bytes VAR_0,
                                        FT_Bytes VAR_1,
                                        GXV_Validator VAR_2 )
  {
    FT_Bytes VAR_3 = VAR_0;



    FT_UShort VAR_4;
    FT_UShort VAR_5;


    FUNC_2( 4 + 2 + 2 );



    VAR_3 += 4;

    VAR_4 = FUNC_1( VAR_3 );
    VAR_5 = FUNC_1( VAR_3 );

    if ( VAR_4 != 0xFFFF )
      FUNC_3( VAR_4, "type2:addGlyph", VAR_2 );

    FUNC_3( VAR_5, "type2:substGlyph", VAR_2 );

    VAR_2->subtable_length = (FT_ULong)( VAR_3 - VAR_0 );
  }
