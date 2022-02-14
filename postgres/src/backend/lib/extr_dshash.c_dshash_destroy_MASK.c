
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int next; } ;
typedef TYPE_2__ dshash_table_item ;
struct TYPE_10__ {size_t size_log2; TYPE_1__* control; int area; int * buckets; } ;
typedef TYPE_3__ dshash_table ;
typedef int dsa_pointer ;
struct TYPE_8__ {scalar_t__ magic; int handle; int buckets; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

void
FUNC_6(dshash_table *VAR_1)
{
 size_t VAR_2;
 size_t VAR_3;

 FUNC_0(VAR_1->control->magic == VAR_0);
 FUNC_4(VAR_1);


 VAR_2 = ((size_t) 1) << VAR_1->size_log2;
 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
 {
  dsa_pointer VAR_4 = VAR_1->buckets[VAR_3];

  while (FUNC_1(VAR_4))
  {
   dshash_table_item *VAR_5;
   dsa_pointer VAR_6;

   VAR_5 = FUNC_3(VAR_1->area, VAR_4);
   VAR_6 = VAR_5->next;
   FUNC_2(VAR_1->area, VAR_4);
   VAR_4 = VAR_6;
  }
 }





 VAR_1->control->magic = 0;


 FUNC_2(VAR_1->area, VAR_1->control->buckets);
 FUNC_2(VAR_1->area, VAR_1->control->handle);

 FUNC_5(VAR_1);
}
