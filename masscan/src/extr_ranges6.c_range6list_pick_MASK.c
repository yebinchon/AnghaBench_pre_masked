
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ const uint64_t ;
struct Range6List {size_t count; scalar_t__* picker; TYPE_1__* list; } ;
typedef int ipv6address ;
struct TYPE_2__ {int begin; } ;


 int FUNC_0 (int ,scalar_t__ const) ;
 int FUNC_1 (struct Range6List const*,scalar_t__ const) ;

ipv6address
FUNC_2(const struct Range6List *VAR_0, uint64_t VAR_1)
{
    size_t VAR_2 = VAR_0->count;
    size_t VAR_3 = 0;
    size_t VAR_4 = VAR_0->count;
    size_t VAR_5;
    const uint64_t *VAR_6 = VAR_0->picker;

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

    return FUNC_0(VAR_0->list[VAR_5].begin, (VAR_1 - VAR_6[VAR_5]));
}
