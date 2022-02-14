
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct Range6List {unsigned int count; TYPE_1__* list; } ;
struct TYPE_2__ {int begin; int end; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

uint64_t
FUNC_2(const struct Range6List *VAR_1)
{
    unsigned VAR_2;
    uint64_t VAR_3 = 0;

    for (VAR_2=0; VAR_2<VAR_1->count; VAR_2++) {
        uint64_t VAR_4 = VAR_3;

        VAR_3 += FUNC_0(VAR_1->list[VAR_2].end, VAR_1->list[VAR_2].begin) + 1ULL;
        if (VAR_3 < VAR_4) {

            FUNC_1(VAR_0, "targe range bigger than 64-bits\n");
            return ~0ULL;
        }
    }

    return VAR_3;
}
