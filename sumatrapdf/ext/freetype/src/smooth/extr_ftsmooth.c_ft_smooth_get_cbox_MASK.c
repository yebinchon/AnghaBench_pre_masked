
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ format; int outline; } ;
struct TYPE_5__ {scalar_t__ glyph_format; } ;
typedef TYPE_1__* FT_Renderer ;
typedef TYPE_2__* FT_GlyphSlot ;
typedef int FT_BBox ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
  FUNC_2( FT_Renderer VAR_0,
                      FT_GlyphSlot VAR_1,
                      FT_BBox* VAR_2 )
  {
    FUNC_1( VAR_2 );

    if ( VAR_1->format == VAR_0->glyph_format )
      FUNC_0( &VAR_1->outline, VAR_2 );
  }
