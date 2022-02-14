
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int const uint64_t ;
struct RangeList {unsigned int count; unsigned int* picker; TYPE_1__* list; int is_sorted; } ;
struct TYPE_2__ {unsigned int const begin; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct RangeList const*,unsigned int const) ;
 int FUNC_2 (struct RangeList*) ;

unsigned
FUNC_3(const struct RangeList *VAR_0, uint64_t VAR_1)
{
    unsigned VAR_2 = VAR_0->count;
    unsigned VAR_3 = 0;
    unsigned VAR_4 = VAR_0->count;
    unsigned VAR_5;
    const unsigned *VAR_6 = VAR_0->picker;

    if (!VAR_0->is_sorted)
        FUNC_2((struct RangeList *)VAR_0);
    FUNC_0(VAR_0->is_sorted);

    if (VAR_6 == ((void*)0)) {

        return FUNC_1(VAR_0, VAR_1);
    }


    for (;;) {
        VAR_5 = VAR_3 + (VAR_4-VAR_3)/2;
        if (VAR_1 < VAR_6[VAR_5]) {
            VAR_4 = VAR_5;
            continue;
        } if (VAR_1 >= VAR_6[VAR_5]) {
            if (VAR_5 + 1 == VAR_2)
                break;
            else if (VAR_1 < VAR_6[VAR_5+1])
                break;
            else
                VAR_3 = VAR_5+1;
        }
    }

    return (unsigned)(VAR_0->list[VAR_5].begin + (VAR_1 - VAR_6[VAR_5]));
}
