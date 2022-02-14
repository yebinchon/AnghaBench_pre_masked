
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* glyph; } ;
struct TYPE_7__ {TYPE_1__ builder; } ;
struct TYPE_6__ {int y_scale; int x_scale; scalar_t__ scaled; scalar_t__ hint; } ;
typedef TYPE_3__ PS_Decoder ;
typedef scalar_t__ FT_Bool ;
typedef int CF2_Fixed ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
  FUNC_2( PS_Decoder* VAR_0,
                           CF2_Fixed* VAR_1,
                           CF2_Fixed* VAR_2,
                           FT_Bool* VAR_3,
                           FT_Bool* VAR_4 )
  {
    FUNC_1( VAR_0 && VAR_0->builder.glyph );


    *VAR_3 = VAR_0->builder.glyph->hint;
    *VAR_4 = VAR_0->builder.glyph->scaled;

    if ( *VAR_3 )
    {
      *VAR_1 = FUNC_0( VAR_0->builder.glyph->x_scale, 32 ) / 64;
      *VAR_2 = FUNC_0( VAR_0->builder.glyph->y_scale, 32 ) / 64;
    }
    else
    {



      *VAR_1 = 0x0400;
      *VAR_2 = 0x0400;
    }
  }
