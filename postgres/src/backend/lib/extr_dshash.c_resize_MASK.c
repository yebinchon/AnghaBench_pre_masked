
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int hash; int next; } ;
typedef TYPE_2__ dshash_table_item ;
struct TYPE_10__ {int area; int * buckets; TYPE_1__* control; } ;
typedef TYPE_3__ dshash_table ;
typedef int dsa_pointer ;
struct TYPE_8__ {size_t size_log2; int buckets; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int ,size_t) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_3__*,size_t) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ) ;
 void* FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_3__*,int ,TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_11(dshash_table *VAR_2, size_t VAR_3)
{
 dsa_pointer VAR_4;
 dsa_pointer VAR_5;
 dsa_pointer *VAR_6;
 size_t VAR_7;
 size_t VAR_8 = ((size_t) 1) << VAR_3;
 size_t VAR_9;





 for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9)
 {
  FUNC_0(!FUNC_4(FUNC_6(VAR_2, VAR_9)));

  FUNC_3(FUNC_6(VAR_2, VAR_9), VAR_1);
  if (VAR_9 == 0 && VAR_2->control->size_log2 >= VAR_3)
  {




   FUNC_5(FUNC_6(VAR_2, 0));
   return;
  }
 }

 FUNC_0(VAR_3 == VAR_2->control->size_log2 + 1);


 VAR_5 = FUNC_7(VAR_2->area,
            sizeof(dsa_pointer) * VAR_8);
 VAR_6 = FUNC_9(VAR_2->area, VAR_5);





 VAR_7 = ((size_t) 1) << VAR_2->control->size_log2;
 for (VAR_9 = 0; VAR_9 < VAR_7; ++VAR_9)
 {
  dsa_pointer VAR_10 = VAR_2->buckets[VAR_9];

  while (FUNC_2(VAR_10))
  {
   dshash_table_item *VAR_11;
   dsa_pointer VAR_12;

   VAR_11 = FUNC_9(VAR_2->area, VAR_10);
   VAR_12 = VAR_11->next;
   FUNC_10(VAR_2, VAR_10, VAR_11,
         &VAR_6[FUNC_1(VAR_11->hash,
                    VAR_3)]);
   VAR_10 = VAR_12;
  }
 }


 VAR_4 = VAR_2->control->buckets;
 VAR_2->control->buckets = VAR_5;
 VAR_2->control->size_log2 = VAR_3;
 VAR_2->buckets = VAR_6;
 FUNC_8(VAR_2->area, VAR_4);


 for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9)
  FUNC_5(FUNC_6(VAR_2, VAR_9));
}
