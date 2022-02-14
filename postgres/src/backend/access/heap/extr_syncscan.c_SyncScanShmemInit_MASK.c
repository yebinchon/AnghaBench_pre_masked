
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* items; TYPE_4__* tail; TYPE_4__* head; } ;
typedef TYPE_3__ ss_scan_locations_t ;
struct TYPE_6__ {void* relNode; void* dbNode; void* spcNode; } ;
struct TYPE_7__ {int location; TYPE_1__ relfilenode; } ;
struct TYPE_9__ {struct TYPE_9__* next; struct TYPE_9__* prev; TYPE_2__ location; } ;
typedef TYPE_4__ ss_lru_item_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,int ,int*) ;
 int FUNC_2 (int) ;
 TYPE_3__* VAR_4 ;

void
FUNC_3(void)
{
 int VAR_5;
 bool VAR_6;

 VAR_4 = (ss_scan_locations_t *)
  FUNC_1("Sync Scan Locations List",
      FUNC_2(VAR_3),
      &VAR_6);

 if (!VAR_2)
 {

  FUNC_0(!VAR_6);

  VAR_4->head = &VAR_4->items[0];
  VAR_4->tail = &VAR_4->items[VAR_3 - 1];

  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  {
   ss_lru_item_t *VAR_7 = &VAR_4->items[VAR_5];






   VAR_7->location.relfilenode.spcNode = VAR_1;
   VAR_7->location.relfilenode.dbNode = VAR_1;
   VAR_7->location.relfilenode.relNode = VAR_1;
   VAR_7->location.location = VAR_0;

   VAR_7->prev = (VAR_5 > 0) ?
    (&VAR_4->items[VAR_5 - 1]) : ((void*)0);
   VAR_7->next = (VAR_5 < VAR_3 - 1) ?
    (&VAR_4->items[VAR_5 + 1]) : ((void*)0);
  }
 }
 else
  FUNC_0(VAR_6);
}
