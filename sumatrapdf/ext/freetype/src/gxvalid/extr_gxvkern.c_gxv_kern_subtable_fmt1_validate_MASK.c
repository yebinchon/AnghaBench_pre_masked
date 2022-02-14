
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int entry_validate_func; int entry_glyphoffset_fmt; int subtable_setup_func; int optdata_load_func; int * optdata; } ;
struct TYPE_6__ {TYPE_1__ statetable; } ;
typedef int GXV_kern_fmt1_StateOptRec ;
typedef TYPE_2__* GXV_Validator ;
typedef int FT_Bytes ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
  FUNC_2( FT_Bytes VAR_5,
                                   FT_Bytes VAR_6,
                                   GXV_Validator VAR_7 )
  {
    FT_Bytes VAR_8 = VAR_5;
    GXV_kern_fmt1_StateOptRec VAR_9;


    FUNC_0( "kern subtable format 1" );

    VAR_7->statetable.optdata =
      &VAR_9;
    VAR_7->statetable.optdata_load_func =
      VAR_4;
    VAR_7->statetable.subtable_setup_func =
      VAR_3;
    VAR_7->statetable.entry_glyphoffset_fmt =
      VAR_1;
    VAR_7->statetable.entry_validate_func =
      VAR_2;

    FUNC_1( VAR_8, VAR_6, VAR_7 );

    VAR_0;
  }
