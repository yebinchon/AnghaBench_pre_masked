
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ encoding; } ;
typedef TYPE_1__ bdf_glyph_t ;



__attribute__((used)) static int
  FUNC_0( const void* VAR_0,
               const void* VAR_1 )
  {
    bdf_glyph_t *VAR_2, *VAR_3;


    VAR_2 = (bdf_glyph_t *)VAR_0;
    VAR_3 = (bdf_glyph_t *)VAR_1;

    if ( VAR_2->encoding < VAR_3->encoding )
      return -1;

    if ( VAR_2->encoding > VAR_3->encoding )
      return 1;

    return 0;
  }
