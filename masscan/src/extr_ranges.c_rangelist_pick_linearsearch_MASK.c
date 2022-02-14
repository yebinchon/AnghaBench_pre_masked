
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct RangeList {unsigned int count; TYPE_1__* list; } ;
struct TYPE_2__ {scalar_t__ begin; scalar_t__ end; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static unsigned
FUNC_1(const struct RangeList *VAR_0, uint64_t VAR_1)
{
    unsigned VAR_2;

    for (VAR_2=0; VAR_2<VAR_0->count; VAR_2++) {
        uint64_t VAR_3 = (uint64_t)VAR_0->list[VAR_2].end - (uint64_t)VAR_0->list[VAR_2].begin + 1UL;
        if (VAR_1 < VAR_3)
            return (unsigned)(VAR_0->list[VAR_2].begin + VAR_1);
        else
            VAR_1 -= VAR_3;
    }

    FUNC_0(!"end of list");
    return 0;
}
