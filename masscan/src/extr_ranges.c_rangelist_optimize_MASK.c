
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct RangeList {size_t count; unsigned int* picker; int picker_mask; TYPE_1__* list; int is_sorted; } ;
struct TYPE_2__ {scalar_t__ begin; scalar_t__ end; } ;


 unsigned int* FUNC_0 (int *,size_t,int) ;
 int FUNC_1 (unsigned int*) ;
 int FUNC_2 (struct RangeList*) ;

void
FUNC_3(struct RangeList *VAR_0)
{
    unsigned *VAR_1;
    unsigned VAR_2;
    unsigned VAR_3 = 0;
    unsigned VAR_4 = 0;
    size_t VAR_5 = VAR_0->count;

    if (!VAR_0->is_sorted)
        FUNC_2(VAR_0);

    if (VAR_0->picker)
        FUNC_1(VAR_0->picker);

    VAR_1 = FUNC_0(((void*)0), VAR_0->count, sizeof(*VAR_1));

    for (VAR_2=0; VAR_2<VAR_0->count; VAR_2++) {
        VAR_1[VAR_2] = VAR_3;
        VAR_3 += VAR_0->list[VAR_2].end - VAR_0->list[VAR_2].begin + 1;
    }
    VAR_0->picker = VAR_1;


    for (;;) {
        VAR_5 >>= 1;
        VAR_4++;
        if (VAR_5 == 0)
            break;
    }

    VAR_0->picker_mask = (1 << VAR_4) - 1;


}
