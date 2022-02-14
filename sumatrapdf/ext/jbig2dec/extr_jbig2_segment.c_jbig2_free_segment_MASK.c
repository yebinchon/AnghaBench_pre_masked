
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int allocator; } ;
struct TYPE_10__ {int flags; int * result; struct TYPE_10__* referred_to_segments; } ;
typedef int Jbig2SymbolDict ;
typedef TYPE_1__ Jbig2Segment ;
typedef int Jbig2PatternDict ;
typedef int Jbig2Image ;
typedef int Jbig2HuffmanParams ;
typedef TYPE_2__ Jbig2Ctx ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;

void
FUNC_5(Jbig2Ctx *VAR_0, Jbig2Segment *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return;

    FUNC_0(VAR_0->allocator, VAR_1->referred_to_segments);



    switch (VAR_1->flags & 63) {
    case 0:
        if (VAR_1->result != ((void*)0))
            FUNC_3(VAR_0, (Jbig2SymbolDict *) VAR_1->result);
        break;
    case 4:
    case 40:
        if (VAR_1->result != ((void*)0))
            FUNC_2(VAR_0, (Jbig2Image *) VAR_1->result);
        break;
    case 16:
        if (VAR_1->result != ((void*)0))
            FUNC_1(VAR_0, (Jbig2PatternDict *) VAR_1->result);
        break;
    case 53:
        if (VAR_1->result != ((void*)0))
            FUNC_4(VAR_0, (Jbig2HuffmanParams *) VAR_1->result);
        break;
    default:

        break;
    }
    FUNC_0(VAR_0->allocator, VAR_1);
}
