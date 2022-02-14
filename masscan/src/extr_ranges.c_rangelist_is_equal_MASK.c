
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct RangeList {unsigned int count; TYPE_1__* list; } ;
struct TYPE_2__ {scalar_t__ begin; scalar_t__ end; } ;



__attribute__((used)) static bool
FUNC_0(const struct RangeList *VAR_0, const struct RangeList *VAR_1)
{
    unsigned VAR_2;

    if (VAR_0->count != VAR_1->count)
        return 0;
    for (VAR_2=0; VAR_2<VAR_0->count; VAR_2++) {
        if (VAR_0->list[VAR_2].begin != VAR_1->list[VAR_2].begin) {
            return 0;
        }
        if (VAR_0->list[VAR_2].end != VAR_1->list[VAR_2].end) {
            return 0;
        }
    }

    return 1;
}
