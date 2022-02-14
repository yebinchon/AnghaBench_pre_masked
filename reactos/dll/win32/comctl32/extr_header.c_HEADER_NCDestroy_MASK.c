
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ uNumItem; int hwndSelf; struct TYPE_5__* order; struct TYPE_5__* items; struct TYPE_5__* pszText; } ;
typedef int LRESULT ;
typedef scalar_t__ INT ;
typedef TYPE_1__ HEADER_ITEM ;
typedef TYPE_1__ HEADER_INFO ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static LRESULT
FUNC_2 (HEADER_INFO *VAR_0)
{
    HEADER_ITEM *VAR_1;
    INT VAR_2;

    if (VAR_0->items) {
        VAR_1 = VAR_0->items;
        for (VAR_2 = 0; VAR_2 < VAR_0->uNumItem; VAR_2++, VAR_1++)
            FUNC_1(VAR_1->pszText);
        FUNC_1(VAR_0->items);
    }

    FUNC_1(VAR_0->order);

    FUNC_0 (VAR_0->hwndSelf, 0, 0);
    FUNC_1(VAR_0);

    return 0;
}
