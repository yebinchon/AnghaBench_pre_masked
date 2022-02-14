
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct Range6List {unsigned int count; TYPE_1__* list; } ;
struct TYPE_6__ {int member_1; int member_0; } ;
typedef TYPE_2__ const ipv6address ;
struct TYPE_5__ {int begin; int end; } ;


 TYPE_2__ const FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static ipv6address
FUNC_3(const struct Range6List *VAR_0, uint64_t VAR_1)
{
    static const ipv6address VAR_2 = {0,0};
    unsigned VAR_3;

    for (VAR_3=0; VAR_3<VAR_0->count; VAR_3++) {
        uint64_t VAR_4 = FUNC_1(VAR_0->list[VAR_3].end, VAR_0->list[VAR_3].begin) + 1ULL;
        if (VAR_1 < VAR_4)
            return FUNC_0(VAR_0->list[VAR_3].begin, VAR_1);
        else
            VAR_1 -= VAR_4;
    }

    FUNC_2(!"end of list");
    return VAR_2;
}
