
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int next; } ;
typedef TYPE_2__ dshash_table_item ;
struct TYPE_11__ {size_t size_log2; int area; int * buckets; TYPE_1__* control; int find_locked; } ;
typedef TYPE_3__ dshash_table ;
struct TYPE_12__ {int count; } ;
typedef TYPE_4__ dshash_partition ;
typedef int dsa_pointer ;
struct TYPE_9__ {scalar_t__ magic; TYPE_4__* partitions; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (size_t,size_t) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_3__*,size_t) ;
 TYPE_2__* FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ,char*,size_t,...) ;
 int VAR_3 ;

void
FUNC_10(dshash_table *VAR_4)
{
 size_t VAR_5;
 size_t VAR_6;

 FUNC_0(VAR_4->control->magic == VAR_0);
 FUNC_0(!VAR_4->find_locked);

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
 {
  FUNC_0(!FUNC_4(FUNC_6(VAR_4, VAR_5)));
  FUNC_3(FUNC_6(VAR_4, VAR_5), VAR_2);
 }

 FUNC_8(VAR_4);

 FUNC_9(VAR_3,
   "hash table size = %zu\n", (size_t) 1 << VAR_4->size_log2);
 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
 {
  dshash_partition *VAR_7 = &VAR_4->control->partitions[VAR_5];
  size_t VAR_8 = FUNC_1(VAR_5, VAR_4->size_log2);
  size_t VAR_9 = FUNC_1(VAR_5 + 1, VAR_4->size_log2);

  FUNC_9(VAR_3, "  partition %zu\n", VAR_5);
  FUNC_9(VAR_3,
    "    active buckets (key count = %zu)\n", VAR_7->count);

  for (VAR_6 = VAR_8; VAR_6 < VAR_9; ++VAR_6)
  {
   size_t VAR_10 = 0;
   dsa_pointer VAR_11 = VAR_4->buckets[VAR_6];

   while (FUNC_2(VAR_11))
   {
    dshash_table_item *VAR_12;

    VAR_12 = FUNC_7(VAR_4->area, VAR_11);

    VAR_11 = VAR_12->next;
    ++VAR_10;
   }
   FUNC_9(VAR_3, "      bucket %zu (key count = %zu)\n", VAR_6, VAR_10);
  }
 }

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
  FUNC_5(FUNC_6(VAR_4, VAR_5));
}
