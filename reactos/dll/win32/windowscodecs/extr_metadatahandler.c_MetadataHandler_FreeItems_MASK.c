
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int value; int id; int schema; } ;
struct TYPE_4__ {size_t item_count; TYPE_3__* items; } ;
typedef TYPE_1__ MetadataHandler ;
typedef size_t DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(MetadataHandler *VAR_0)
{
    DWORD VAR_1;

    for (VAR_1=0; VAR_1<VAR_0->item_count; VAR_1++)
    {
        FUNC_2(&VAR_0->items[VAR_1].schema);
        FUNC_2(&VAR_0->items[VAR_1].id);
        FUNC_2(&VAR_0->items[VAR_1].value);
    }

    FUNC_1(FUNC_0(), 0, VAR_0->items);
}
