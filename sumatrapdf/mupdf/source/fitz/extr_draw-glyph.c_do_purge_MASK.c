
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ total; scalar_t__* entry; } ;
typedef TYPE_1__ fz_glyph_cache ;
struct TYPE_6__ {TYPE_1__* glyph_cache; } ;
typedef TYPE_2__ fz_context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_1)
{
 fz_glyph_cache *VAR_2 = VAR_1->glyph_cache;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 {
  while (VAR_2->entry[VAR_3])
   FUNC_0(VAR_1, VAR_2->entry[VAR_3]);
 }

 VAR_2->total = 0;
}
