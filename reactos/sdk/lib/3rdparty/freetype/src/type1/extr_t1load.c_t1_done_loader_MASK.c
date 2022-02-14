
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int memory; } ;
struct TYPE_7__ {TYPE_1__ root; } ;
struct TYPE_8__ {int subrs_hash; int subrs; int swap_table; int glyph_names; int charstrings; int encoding_table; TYPE_2__ parser; } ;
typedef TYPE_2__* T1_Parser ;
typedef TYPE_3__* T1_Loader ;
typedef int FT_Memory ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
  FUNC_4( T1_Loader VAR_0 )
  {
    T1_Parser VAR_1 = &VAR_0->parser;
    FT_Memory VAR_2 = VAR_1->root.memory;



    FUNC_2( &VAR_0->encoding_table );
    FUNC_2( &VAR_0->charstrings );
    FUNC_2( &VAR_0->glyph_names );
    FUNC_2( &VAR_0->swap_table );
    FUNC_2( &VAR_0->subrs );


    FUNC_3( VAR_0->subrs_hash, VAR_2 );
    FUNC_0( VAR_0->subrs_hash );


    FUNC_1( VAR_1 );
  }
