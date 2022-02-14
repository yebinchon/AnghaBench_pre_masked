
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ul; } ;
typedef int GXV_Validator ;
typedef TYPE_1__* GXV_StateTable_GlyphOffsetCPtr ;
typedef int FT_UShort ;
typedef scalar_t__ FT_Short ;
typedef int FT_Bytes ;
typedef int FT_Byte ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,char*,int ,int ) ;

__attribute__((used)) static void
  FUNC_4(
    FT_Byte VAR_1,
    FT_UShort VAR_2,
    GXV_StateTable_GlyphOffsetCPtr VAR_3,
    FT_Bytes VAR_4,
    FT_Bytes VAR_5,
    GXV_Validator VAR_6 )
  {




    FT_UShort VAR_7;
    FT_Short VAR_8;
    FT_Short VAR_9;

    FUNC_0( VAR_4 );
    FUNC_0( VAR_5 );






    VAR_7 = (FT_UShort)( VAR_2 & 0x3FFF );

    VAR_8 = (FT_Short)( VAR_3->ul >> 16 );
    VAR_9 = (FT_Short)( VAR_3->ul );

    if ( 0 < VAR_7 )
    {
      FUNC_2(( " non-zero bits found in reserved range\n" ));
      FUNC_1( VAR_0 );
    }

    FUNC_3( VAR_8,
                                                      "markOffset",
                                                      VAR_1,
                                                      VAR_6 );

    FUNC_3( VAR_9,
                                                      "currentOffset",
                                                      VAR_1,
                                                      VAR_6 );
  }
