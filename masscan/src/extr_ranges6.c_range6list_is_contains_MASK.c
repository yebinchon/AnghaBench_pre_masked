
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Range6List {unsigned int count; struct Range6* list; } ;
struct Range6 {int const end; int const begin; } ;
typedef int ipv6address ;


 scalar_t__ FUNC_0 (int const,int const) ;

int
FUNC_1(const struct Range6List *VAR_0, const ipv6address VAR_1)
{
    unsigned VAR_2;

    for (VAR_2=0; VAR_2<VAR_0->count; VAR_2++) {
        struct Range6 *VAR_3 = &VAR_0->list[VAR_2];

        if (FUNC_0(VAR_3->begin, VAR_1) && FUNC_0(VAR_1, VAR_3->end))
            return 1;
    }
    return 0;
}
