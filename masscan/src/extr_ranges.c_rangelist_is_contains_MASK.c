
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeList {unsigned int count; struct Range* list; } ;
struct Range {unsigned int begin; unsigned int end; } ;



int
FUNC_0(const struct RangeList *VAR_0, unsigned VAR_1)
{
    unsigned VAR_2;
    for (VAR_2=0; VAR_2<VAR_0->count; VAR_2++) {
        struct Range *VAR_3 = &VAR_0->list[VAR_2];

        if (VAR_3->begin <= VAR_1 && VAR_1 <= VAR_3->end)
            return 1;
    }
    return 0;
}
