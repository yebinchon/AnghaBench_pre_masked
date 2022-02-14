
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int optdata; } ;
struct TYPE_9__ {TYPE_1__* face; TYPE_2__ xstatetable; } ;
struct TYPE_8__ {scalar_t__ ligatureTable; scalar_t__ ligatureTable_length; } ;
struct TYPE_6__ {scalar_t__ num_glyphs; } ;
typedef TYPE_3__* GXV_morx_subtable_type2_StateOptRecData ;
typedef TYPE_4__* GXV_Validator ;
typedef scalar_t__ FT_UShort ;
typedef scalar_t__ FT_Bytes ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
  FUNC_4( FT_Bytes VAR_2,
                                                  GXV_Validator VAR_3 )
  {
    GXV_morx_subtable_type2_StateOptRecData VAR_4 =
      (GXV_morx_subtable_type2_StateOptRecData)VAR_3->xstatetable.optdata;

    FT_Bytes VAR_5 = VAR_2 + VAR_4->ligatureTable;
    FT_Bytes VAR_6 = VAR_2 + VAR_4->ligatureTable
                           + VAR_4->ligatureTable_length;


    FUNC_2( "morx chain subtable type2 - substitutionTable" );

    if ( 0 != VAR_4->ligatureTable )
    {

      while ( VAR_5 < VAR_6 )
      {
        FT_UShort VAR_7;


        FUNC_1( 2 );
        VAR_7 = FUNC_0( VAR_5 );
        if ( VAR_7 < VAR_3->face->num_glyphs )
          FUNC_3( VAR_0 );
      }
    }

    VAR_1;
  }
