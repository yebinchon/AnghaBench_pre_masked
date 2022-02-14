
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * local; int * name; } ;
struct TYPE_5__ {int nItems; int itemFlags; TYPE_3__* items; } ;
typedef int IndexSubItem ;
typedef TYPE_1__ IndexItem ;


 TYPE_3__* FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_1(IndexItem *VAR_0, int VAR_1)
{
    VAR_0->nItems = VAR_1;
    VAR_0->items = FUNC_0(VAR_0->items, sizeof(IndexSubItem)*VAR_0->nItems);
    VAR_0->items[VAR_0->nItems-1].name = ((void*)0);
    VAR_0->items[VAR_0->nItems-1].local = ((void*)0);
    VAR_0->itemFlags = 0x00;
}
