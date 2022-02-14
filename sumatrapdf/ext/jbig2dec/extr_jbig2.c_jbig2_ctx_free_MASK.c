
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int n_segments; int current_page; struct TYPE_7__* pages; int * image; struct TYPE_7__* segments; struct TYPE_7__* buf; int * allocator; } ;
typedef TYPE_1__ Jbig2Ctx ;
typedef int Jbig2Allocator ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__) ;
 int FUNC_2 (TYPE_1__*,int *) ;

Jbig2Allocator *
FUNC_3(Jbig2Ctx *VAR_0)
{
    Jbig2Allocator *VAR_1;
    int VAR_2;

    if (VAR_0 == ((void*)0))
        return ((void*)0);

    VAR_1 = VAR_0->allocator;
    FUNC_0(VAR_1, VAR_0->buf);
    if (VAR_0->segments != ((void*)0)) {
        for (VAR_2 = 0; VAR_2 < VAR_0->n_segments; VAR_2++)
            FUNC_1(VAR_0, VAR_0->segments[VAR_2]);
        FUNC_0(VAR_1, VAR_0->segments);
    }

    if (VAR_0->pages != ((void*)0)) {
        for (VAR_2 = 0; VAR_2 <= VAR_0->current_page; VAR_2++)
            if (VAR_0->pages[VAR_2].image != ((void*)0))
                FUNC_2(VAR_0, VAR_0->pages[VAR_2].image);
        FUNC_0(VAR_1, VAR_0->pages);
    }

    FUNC_0(VAR_1, VAR_0);

    return VAR_1;
}
