
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FT_Vector ;
typedef int FT_Renderer ;
typedef scalar_t__ FT_Render_Mode ;
typedef int FT_GlyphSlot ;
typedef int FT_Error ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,int const*,scalar_t__) ;

__attribute__((used)) static FT_Error
  FUNC_1( FT_Renderer VAR_2,
                    FT_GlyphSlot VAR_3,
                    FT_Render_Mode VAR_4,
                    const FT_Vector* VAR_5 )
  {
    if ( VAR_4 == VAR_0 )
      VAR_4 = VAR_1;

    return FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5,
                                     VAR_1 );
  }
