
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct Range6List {unsigned int count; struct Range6* list; } ;
struct Range6 {int end; int begin; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct Range6List*,int ,int ) ;

uint64_t
FUNC_2( struct Range6List *VAR_0,
                  const struct Range6List *VAR_1)
{
    uint64_t VAR_2 = 0;
    unsigned VAR_3;

    for (VAR_3=0; VAR_3<VAR_1->count; VAR_3++) {
        struct Range6 VAR_4 = VAR_1->list[VAR_3];
        VAR_2 += FUNC_0(VAR_4.end, VAR_4.begin) + 1ULL;
        FUNC_1(VAR_0, VAR_4.begin, VAR_4.end);
    }

    return VAR_2;
}
