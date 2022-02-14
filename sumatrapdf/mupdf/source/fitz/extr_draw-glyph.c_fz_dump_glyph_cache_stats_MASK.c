
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int evicted; int num_evictions; int total; } ;
typedef TYPE_1__ fz_glyph_cache ;
struct TYPE_7__ {TYPE_1__* glyph_cache; } ;
typedef TYPE_2__ fz_context ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*,int ,...) ;

void
FUNC_2(fz_context *VAR_0)
{
 fz_glyph_cache *VAR_1 = VAR_0->glyph_cache;
 FUNC_1(VAR_0, FUNC_0(VAR_0), "Glyph Cache Size: %zu\n", VAR_1->total);

 FUNC_1(VAR_0, FUNC_0(VAR_0), "Glyph Cache Evictions: %d (%zu bytes)\n", VAR_1->num_evictions, VAR_1->evicted);

}
