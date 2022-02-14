
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int optdata; } ;
struct TYPE_8__ {TYPE_1__ statetable; } ;
struct TYPE_7__ {int ligatureTable_length; int ligatureTable; int componentTable_length; int componentTable; int ligActionTable_length; int ligActionTable; } ;
typedef TYPE_2__* GXV_mort_subtable_type2_StateOptRecData ;
typedef TYPE_3__* GXV_Validator ;
typedef int FT_UShort ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int **,int *,int,int ,TYPE_3__*) ;

__attribute__((used)) static void
  FUNC_3( FT_UShort VAR_1,
                                          FT_UShort VAR_2,
                                          FT_UShort VAR_3,
                                          FT_UShort VAR_4,
                                          FT_UShort *VAR_5,
                                          FT_UShort *VAR_6,
                                          FT_UShort *VAR_7,
                                          GXV_Validator VAR_8 )
  {
    FT_UShort VAR_9[6];
    FT_UShort *VAR_10[6];
    FT_UShort VAR_11[7];

    GXV_mort_subtable_type2_StateOptRecData VAR_12 =
      (GXV_mort_subtable_type2_StateOptRecData)VAR_8->statetable.optdata;


    FUNC_0( "subtable boundaries setup" );

    VAR_9[0] = VAR_2;
    VAR_9[1] = VAR_3;
    VAR_9[2] = VAR_4;
    VAR_9[3] = VAR_12->ligActionTable;
    VAR_9[4] = VAR_12->componentTable;
    VAR_9[5] = VAR_12->ligatureTable;
    VAR_10[0] = VAR_5;
    VAR_10[1] = VAR_6;
    VAR_10[2] = VAR_7;
    VAR_10[3] = &(VAR_12->ligActionTable_length);
    VAR_10[4] = &(VAR_12->componentTable_length);
    VAR_10[5] = &(VAR_12->ligatureTable_length);

    FUNC_2( VAR_9, VAR_10, VAR_11, 6, VAR_1, VAR_8 );

    FUNC_1(( "classTable: offset=0x%04x length=0x%04x\n",
                VAR_2, *VAR_5 ));
    FUNC_1(( "stateArray: offset=0x%04x length=0x%04x\n",
                VAR_3, *VAR_6 ));
    FUNC_1(( "entryTable: offset=0x%04x length=0x%04x\n",
                VAR_4, *VAR_7 ));
    FUNC_1(( "ligActionTable: offset=0x%04x length=0x%04x\n",
                VAR_12->ligActionTable,
                VAR_12->ligActionTable_length ));
    FUNC_1(( "componentTable: offset=0x%04x length=0x%04x\n",
                VAR_12->componentTable,
                VAR_12->componentTable_length ));
    FUNC_1(( "ligatureTable:  offset=0x%04x length=0x%04x\n",
                VAR_12->ligatureTable,
                VAR_12->ligatureTable_length ));

    VAR_0;
  }
