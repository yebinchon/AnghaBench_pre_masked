
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {size_t n_symbols; int * glyphs; } ;
typedef TYPE_1__ Jbig2SymbolDict ;
typedef int Jbig2Ctx ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,char*) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (int *,size_t) ;

Jbig2SymbolDict *
FUNC_3(Jbig2Ctx *VAR_1, uint32_t VAR_2, Jbig2SymbolDict **VAR_3)
{
    uint32_t VAR_4, VAR_5, VAR_6, VAR_7;
    Jbig2SymbolDict *VAR_8 = ((void*)0);


    VAR_7 = 0;
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        VAR_7 += VAR_3[VAR_4]->n_symbols;


    VAR_8 = FUNC_2(VAR_1, VAR_7);
    if (VAR_8 != ((void*)0)) {
        VAR_6 = 0;
        for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
            for (VAR_5 = 0; VAR_5 < VAR_3[VAR_4]->n_symbols; VAR_5++)
                VAR_8->glyphs[VAR_6++] = FUNC_1(VAR_1, VAR_3[VAR_4]->glyphs[VAR_5]);
    } else {
        FUNC_0(VAR_1, VAR_0, -1, "failed to allocate new symbol dictionary");
    }

    return VAR_8;
}
