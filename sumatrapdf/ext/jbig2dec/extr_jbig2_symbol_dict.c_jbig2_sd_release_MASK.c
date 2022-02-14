
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_9__ {int allocator; } ;
struct TYPE_8__ {size_t n_symbols; struct TYPE_8__* glyphs; } ;
typedef TYPE_1__ Jbig2SymbolDict ;
typedef TYPE_2__ Jbig2Ctx ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__) ;

void
FUNC_2(Jbig2Ctx *VAR_0, Jbig2SymbolDict *VAR_1)
{
    uint32_t VAR_2;

    if (VAR_1 == ((void*)0))
        return;
    if (VAR_1->glyphs != ((void*)0))
        for (VAR_2 = 0; VAR_2 < VAR_1->n_symbols; VAR_2++)
            FUNC_1(VAR_0, VAR_1->glyphs[VAR_2]);
    FUNC_0(VAR_0->allocator, VAR_1->glyphs);
    FUNC_0(VAR_0->allocator, VAR_1);
}
