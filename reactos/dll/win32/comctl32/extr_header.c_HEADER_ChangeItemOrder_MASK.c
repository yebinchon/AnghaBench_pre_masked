
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t* order; TYPE_1__* items; } ;
struct TYPE_4__ {size_t iOrder; } ;
typedef size_t INT ;
typedef TYPE_1__ HEADER_ITEM ;
typedef TYPE_2__ HEADER_INFO ;


 int FUNC_0 (char*,size_t,size_t,size_t) ;
 size_t FUNC_1 (size_t,size_t) ;
 int FUNC_2 (size_t*,size_t*,size_t) ;
 size_t FUNC_3 (size_t,size_t) ;

__attribute__((used)) static void
FUNC_4(const HEADER_INFO *VAR_0, INT VAR_1, INT VAR_2)
{
    HEADER_ITEM *VAR_3 = &VAR_0->items[VAR_1];
    INT VAR_4, VAR_5, VAR_6;

    FUNC_0("%d: %d->%d\n", VAR_1, VAR_3->iOrder, VAR_2);
    if (VAR_3->iOrder < VAR_2)
    {
        FUNC_2(&VAR_0->order[VAR_3->iOrder],
               &VAR_0->order[VAR_3->iOrder + 1],
               (VAR_2 - VAR_3->iOrder) * sizeof(INT));
    }
    if (VAR_2 < VAR_3->iOrder)
    {
        FUNC_2(&VAR_0->order[VAR_2 + 1],
                &VAR_0->order[VAR_2],
                (VAR_3->iOrder - VAR_2) * sizeof(INT));
    }
    VAR_0->order[VAR_2] = VAR_1;
    VAR_5 = FUNC_3(VAR_3->iOrder, VAR_2);
    VAR_6 = FUNC_1(VAR_3->iOrder, VAR_2);
    for (VAR_4 = VAR_5; VAR_4 <= VAR_6; VAR_4++)
        VAR_0->items[VAR_0->order[VAR_4]].iOrder = VAR_4;
}
