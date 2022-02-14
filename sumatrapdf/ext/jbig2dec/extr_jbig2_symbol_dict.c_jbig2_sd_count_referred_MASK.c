
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int referred_to_segment_count; int flags; scalar_t__ result; int * referred_to_segments; } ;
struct TYPE_5__ {scalar_t__ n_symbols; int ** glyphs; } ;
typedef TYPE_1__ Jbig2SymbolDict ;
typedef TYPE_2__ Jbig2Segment ;
typedef int Jbig2Ctx ;


 TYPE_2__* FUNC_0 (int *,int ) ;

uint32_t
FUNC_1(Jbig2Ctx *VAR_0, Jbig2Segment *VAR_1)
{
    int VAR_2;
    Jbig2Segment *VAR_3;
    uint32_t VAR_4 = 0;

    for (VAR_2 = 0; VAR_2 < VAR_1->referred_to_segment_count; VAR_2++) {
        VAR_3 = FUNC_0(VAR_0, VAR_1->referred_to_segments[VAR_2]);
        if (VAR_3 && ((VAR_3->flags & 63) == 0) &&
            VAR_3->result && (((Jbig2SymbolDict *) VAR_3->result)->n_symbols > 0) && ((*((Jbig2SymbolDict *) VAR_3->result)->glyphs) != ((void*)0)))
            VAR_4++;
    }

    return (VAR_4);
}
