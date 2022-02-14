
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int optdata; } ;
struct TYPE_8__ {TYPE_1__ statetable; } ;
struct TYPE_7__ {int substitutionTable_length; int substitutionTable; } ;
typedef TYPE_2__* GXV_mort_subtable_type1_StateOptRecData ;
typedef TYPE_3__* GXV_Validator ;
typedef int FT_UShort ;


 int FUNC_0 (int *,int **,int *,int,int ,TYPE_3__*) ;

__attribute__((used)) static void
  FUNC_1( FT_UShort VAR_0,
                                          FT_UShort VAR_1,
                                          FT_UShort VAR_2,
                                          FT_UShort VAR_3,
                                          FT_UShort* VAR_4,
                                          FT_UShort* VAR_5,
                                          FT_UShort* VAR_6,
                                          GXV_Validator VAR_7 )
  {
    FT_UShort VAR_8[4];
    FT_UShort *VAR_9[4];
    FT_UShort VAR_10[5];

    GXV_mort_subtable_type1_StateOptRecData VAR_11 =
      (GXV_mort_subtable_type1_StateOptRecData)VAR_7->statetable.optdata;


    VAR_8[0] = VAR_1;
    VAR_8[1] = VAR_2;
    VAR_8[2] = VAR_3;
    VAR_8[3] = VAR_11->substitutionTable;
    VAR_9[0] = VAR_4;
    VAR_9[1] = VAR_5;
    VAR_9[2] = VAR_6;
    VAR_9[3] = &( VAR_11->substitutionTable_length );

    FUNC_0( VAR_8, VAR_9, VAR_10, 4, VAR_0, VAR_7 );
  }
