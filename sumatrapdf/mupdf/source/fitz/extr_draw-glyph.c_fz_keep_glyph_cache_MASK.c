
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int refs; } ;
typedef TYPE_1__ fz_glyph_cache ;
struct TYPE_8__ {TYPE_1__* glyph_cache; } ;
typedef TYPE_2__ fz_context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;

fz_glyph_cache *
FUNC_2(fz_context *VAR_1)
{
 FUNC_0(VAR_1, VAR_0);
 VAR_1->glyph_cache->refs++;
 FUNC_1(VAR_1, VAR_0);
 return VAR_1->glyph_cache;
}
