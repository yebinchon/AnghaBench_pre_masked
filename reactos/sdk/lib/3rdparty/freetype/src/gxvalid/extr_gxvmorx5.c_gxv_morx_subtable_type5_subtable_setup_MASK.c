
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int optdata; } ;
struct TYPE_8__ {TYPE_1__ xstatetable; } ;
struct TYPE_7__ {int insertionGlyphList_length; int insertionGlyphList; } ;
typedef TYPE_2__* GXV_morx_subtable_type5_StateOptRecData ;
typedef TYPE_3__* GXV_Validator ;
typedef int FT_ULong ;


 int FUNC_0 (int *,int **,int *,int,int ,TYPE_3__*) ;

__attribute__((used)) static void
  FUNC_1( FT_ULong VAR_0,
                                          FT_ULong VAR_1,
                                          FT_ULong VAR_2,
                                          FT_ULong VAR_3,
                                          FT_ULong* VAR_4,
                                          FT_ULong* VAR_5,
                                          FT_ULong* VAR_6,
                                          GXV_Validator VAR_7 )
  {
    FT_ULong VAR_8[4];
    FT_ULong* VAR_9[4];
    FT_ULong VAR_10[5];

    GXV_morx_subtable_type5_StateOptRecData VAR_11 =
      (GXV_morx_subtable_type5_StateOptRecData)VAR_7->xstatetable.optdata;


    VAR_8[0] = VAR_1;
    VAR_8[1] = VAR_2;
    VAR_8[2] = VAR_3;
    VAR_8[3] = VAR_11->insertionGlyphList;
    VAR_9[0] = VAR_4;
    VAR_9[1] = VAR_5;
    VAR_9[2] = VAR_6;
    VAR_9[3] = &(VAR_11->insertionGlyphList_length);

    FUNC_0( VAR_8, VAR_9, VAR_10, 4, VAR_0, VAR_7 );
  }
