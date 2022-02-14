
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct RangeList {unsigned int count; TYPE_1__* list; } ;
struct TYPE_2__ {scalar_t__ begin; scalar_t__ end; } ;



uint64_t
FUNC_0(const struct RangeList *VAR_0)
{
    unsigned VAR_1;
    uint64_t VAR_2 = 0;

    for (VAR_1=0; VAR_1<VAR_0->count; VAR_1++) {
        VAR_2 += (uint64_t)VAR_0->list[VAR_1].end - (uint64_t)VAR_0->list[VAR_1].begin + 1UL;
    }

    return VAR_2;
}
