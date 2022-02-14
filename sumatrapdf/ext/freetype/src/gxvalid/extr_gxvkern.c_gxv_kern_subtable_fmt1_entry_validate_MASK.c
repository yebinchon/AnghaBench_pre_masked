
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int optdata; } ;
struct TYPE_7__ {TYPE_1__ statetable; } ;
struct TYPE_6__ {int valueTable; int valueTable_length; } ;
typedef TYPE_2__* GXV_kern_fmt1_StateOptRecData ;
typedef TYPE_3__* GXV_Validator ;
typedef int GXV_StateTable_GlyphOffsetCPtr ;
typedef int FT_UShort ;
typedef int FT_Bytes ;
typedef int FT_Byte ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
  FUNC_3(
    FT_Byte VAR_1,
    FT_UShort VAR_2,
    GXV_StateTable_GlyphOffsetCPtr VAR_3,
    FT_Bytes VAR_4,
    FT_Bytes VAR_5,
    GXV_Validator VAR_6 )
  {




    FT_UShort VAR_7;





    FUNC_1( VAR_1 );
    FUNC_1( VAR_3 );






    VAR_7 = (FT_UShort)( VAR_2 & 0x3FFF );

    {
      GXV_kern_fmt1_StateOptRecData VAR_8 =
        (GXV_kern_fmt1_StateOptRecData)VAR_6->statetable.optdata;
      FT_Bytes VAR_9;


      if ( VAR_7 < VAR_8->valueTable )
        VAR_0;

      VAR_9 = VAR_4 + VAR_7;
      VAR_5 = VAR_4 + VAR_8->valueTable + VAR_8->valueTable_length;

      FUNC_2( 2 + 2 );




    }
  }
