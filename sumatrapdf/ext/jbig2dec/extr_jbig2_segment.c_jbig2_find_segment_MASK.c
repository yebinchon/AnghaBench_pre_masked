
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int segment_index; TYPE_1__** segments; struct TYPE_6__* global_ctx; } ;
struct TYPE_5__ {scalar_t__ number; } ;
typedef TYPE_1__ Jbig2Segment ;
typedef TYPE_2__ Jbig2Ctx ;



Jbig2Segment *
FUNC_0(Jbig2Ctx *VAR_0, uint32_t VAR_1)
{
    int VAR_2, VAR_3 = VAR_0->segment_index - 1;
    const Jbig2Ctx *VAR_4 = VAR_0->global_ctx;


    for (VAR_2 = VAR_3; VAR_2 >= 0; VAR_2--)
        if (VAR_0->segments[VAR_2]->number == VAR_1)
            return (VAR_0->segments[VAR_2]);

    if (VAR_4)
        for (VAR_2 = VAR_4->segment_index - 1; VAR_2 >= 0; VAR_2--)
            if (VAR_4->segments[VAR_2]->number == VAR_1)
                return (VAR_4->segments[VAR_2]);


    return ((void*)0);
}
