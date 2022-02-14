
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ optdata; } ;
struct TYPE_9__ {int min_gid; int max_gid; TYPE_2__* face; TYPE_1__ statetable; } ;
struct TYPE_8__ {int substitutionTable; scalar_t__ substitutionTable_length; } ;
struct TYPE_7__ {int num_glyphs; } ;
typedef TYPE_3__ GXV_mort_subtable_type1_StateOptRec ;
typedef TYPE_4__* GXV_Validator ;
typedef int FT_UShort ;
typedef int FT_String ;
typedef int FT_Short ;
typedef int const* FT_Byte ;


 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static void
  FUNC_2(
    FT_Short VAR_0,
    const FT_String* VAR_1,
    FT_Byte VAR_2,
    GXV_Validator VAR_3 )
  {
    FT_UShort VAR_4;
    FT_UShort VAR_5;

    FUNC_1( VAR_1 );
    FUNC_1( VAR_2 );


    VAR_4 =
      ((GXV_mort_subtable_type1_StateOptRec *)
       (VAR_3->statetable.optdata))->substitutionTable;
    VAR_5 =
      (FT_UShort)( VAR_4 +
                   ((GXV_mort_subtable_type1_StateOptRec *)
                    (VAR_3->statetable.optdata))->substitutionTable_length );

    VAR_3->min_gid = (FT_UShort)( ( VAR_4 - VAR_0 * 2 ) / 2 );
    VAR_3->max_gid = (FT_UShort)( ( VAR_5 - VAR_0 * 2 ) / 2 );
    VAR_3->max_gid = (FT_UShort)( FUNC_0( VAR_3->max_gid,
                                            VAR_3->face->num_glyphs ) );




  }
