
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct Range6List {int count; int * picker; TYPE_1__* list; } ;
struct TYPE_2__ {int begin; int end; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;

void
FUNC_4(struct Range6List *VAR_1)
{
    uint64_t *VAR_2;
    size_t VAR_3;
    uint64_t VAR_4 = 0;

    if (VAR_1->picker)
        FUNC_2(VAR_1->picker);

    if (((size_t)VAR_1->count) >= (size_t)(VAR_0/sizeof(*VAR_2)))
        FUNC_1(1);
    VAR_2 = FUNC_3(VAR_1->count * sizeof(*VAR_2));
    if (VAR_2 == ((void*)0))
        FUNC_1(1);

    for (VAR_3=0; VAR_3<VAR_1->count; VAR_3++) {
        VAR_2[VAR_3] = VAR_4;
        VAR_4 += FUNC_0(VAR_1->list[VAR_3].end, VAR_1->list[VAR_3].begin) + 1;
    }

    VAR_1->picker = VAR_2;
}
