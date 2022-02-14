
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* face; } ;
struct TYPE_4__ {int num_glyphs; } ;
typedef TYPE_2__* GXV_Validator ;
typedef int FT_UShort ;
typedef int FT_String ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
  FUNC_3( FT_UShort VAR_1,
                          const FT_String* VAR_2,
                          GXV_Validator VAR_3 )
  {
    FUNC_0( VAR_2 );

    if ( VAR_1 < VAR_3->face->num_glyphs )
      return;

    FUNC_2(( "just table includes too large %s"
                " GID=%d > %d (in maxp)\n",
                VAR_2, VAR_1, VAR_3->face->num_glyphs ));
    FUNC_1( VAR_0 );
  }
