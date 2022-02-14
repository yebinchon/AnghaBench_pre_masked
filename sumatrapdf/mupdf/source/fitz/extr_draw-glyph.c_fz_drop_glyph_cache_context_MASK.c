
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_5__* glyph_cache; } ;
typedef TYPE_1__ fz_context ;
struct TYPE_9__ {scalar_t__ refs; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void
FUNC_4(fz_context *VAR_1)
{
 if (!VAR_1 || !VAR_1->glyph_cache)
  return;

 FUNC_2(VAR_1, VAR_0);
 VAR_1->glyph_cache->refs--;
 if (VAR_1->glyph_cache->refs == 0)
 {
  FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_1->glyph_cache);
  VAR_1->glyph_cache = ((void*)0);
 }
 FUNC_3(VAR_1, VAR_0);
}
