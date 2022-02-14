
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int optdata; } ;
struct TYPE_7__ {TYPE_1__ xstatetable; } ;
struct TYPE_6__ {void* ligatureTable; void* componentTable; void* ligActionTable; } ;
typedef TYPE_2__* GXV_morx_subtable_type2_StateOptRecData ;
typedef TYPE_3__* GXV_Validator ;
typedef int FT_Bytes ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
  FUNC_3( FT_Bytes VAR_0,
                                         FT_Bytes VAR_1,
                                         GXV_Validator VAR_2 )
  {
    FT_Bytes VAR_3 = VAR_0;

    GXV_morx_subtable_type2_StateOptRecData VAR_4 =
      (GXV_morx_subtable_type2_StateOptRecData)VAR_2->xstatetable.optdata;


    FUNC_1( 4 + 4 + 4 );
    VAR_4->ligActionTable = FUNC_0( VAR_3 );
    VAR_4->componentTable = FUNC_0( VAR_3 );
    VAR_4->ligatureTable = FUNC_0( VAR_3 );

    FUNC_2(( "offset to ligActionTable=0x%08x\n",
                VAR_4->ligActionTable ));
    FUNC_2(( "offset to componentTable=0x%08x\n",
                VAR_4->componentTable ));
    FUNC_2(( "offset to ligatureTable=0x%08x\n",
                VAR_4->ligatureTable ));
  }
