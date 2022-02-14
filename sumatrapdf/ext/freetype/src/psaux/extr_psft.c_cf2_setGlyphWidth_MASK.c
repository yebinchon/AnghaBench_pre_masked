
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* decoder; } ;
struct TYPE_6__ {int is_t1; } ;
struct TYPE_7__ {int * glyph_width; TYPE_1__ builder; } ;
typedef TYPE_2__ PS_Decoder ;
typedef TYPE_3__* CF2_Outline ;
typedef int CF2_Fixed ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
  FUNC_2( CF2_Outline VAR_0,
                     CF2_Fixed VAR_1 )
  {
    PS_Decoder* VAR_2 = VAR_0->decoder;


    FUNC_0( VAR_2 );

    if ( !VAR_2->builder.is_t1 )
      *VAR_2->glyph_width = FUNC_1( VAR_1 );
  }
