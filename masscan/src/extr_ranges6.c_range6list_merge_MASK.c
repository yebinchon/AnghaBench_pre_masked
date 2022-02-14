
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Range6List {unsigned int count; TYPE_1__* list; } ;
struct TYPE_2__ {int end; int begin; } ;


 int FUNC_0 (struct Range6List*,int ,int ) ;

void
FUNC_1(struct Range6List *VAR_0, const struct Range6List *VAR_1)
{
    unsigned VAR_2;

    for (VAR_2=0; VAR_2<VAR_1->count; VAR_2++) {
        FUNC_0(VAR_0, VAR_1->list[VAR_2].begin, VAR_1->list[VAR_2].end);
    }
}
