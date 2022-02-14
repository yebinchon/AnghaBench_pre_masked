
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ format; int outline; } ;
struct TYPE_8__ {scalar_t__ glyph_format; } ;
struct TYPE_7__ {int y; int x; } ;
typedef TYPE_1__ FT_Vector ;
typedef TYPE_2__* FT_Renderer ;
typedef int FT_Matrix ;
typedef TYPE_3__* FT_GlyphSlot ;
typedef int FT_Error ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

__attribute__((used)) static FT_Error
  FUNC_3( FT_Renderer VAR_2,
                        FT_GlyphSlot VAR_3,
                        const FT_Matrix* VAR_4,
                        const FT_Vector* VAR_5 )
  {
    FT_Error VAR_6 = VAR_0;


    if ( VAR_3->format != VAR_2->glyph_format )
    {
      VAR_6 = FUNC_2( VAR_1 );
      goto Exit;
    }

    if ( VAR_4 )
      FUNC_0( &VAR_3->outline, VAR_4 );

    if ( VAR_5 )
      FUNC_1( &VAR_3->outline, VAR_5->x, VAR_5->y );

  Exit:
    return VAR_6;
  }
