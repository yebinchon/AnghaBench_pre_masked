
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int dshash_table_control ;
struct TYPE_11__ {int tranche_id; } ;
struct TYPE_9__ {int find_locked; int find_exclusively_locked; TYPE_1__* control; int size_log2; void* buckets; void* arg; TYPE_4__ params; int * area; } ;
typedef TYPE_2__ dshash_table ;
struct TYPE_10__ {scalar_t__ count; int lock; } ;
typedef TYPE_3__ dshash_partition ;
typedef TYPE_4__ dshash_parameters ;
typedef int dsa_pointer ;
typedef int dsa_area ;
struct TYPE_8__ {int lwlock_tranche_id; int size_log2; int buckets; TYPE_3__* partitions; int magic; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int ) ;
 void* FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*) ;
 TYPE_2__* FUNC_10 (int) ;

dshash_table *
FUNC_11(dsa_area *VAR_7, const dshash_parameters *VAR_8, void *VAR_9)
{
 dshash_table *VAR_10;
 dsa_pointer VAR_11;


 VAR_10 = FUNC_10(sizeof(dshash_table));


 VAR_11 = FUNC_2(VAR_7, sizeof(dshash_table_control));


 VAR_10->area = VAR_7;
 VAR_10->params = *VAR_8;
 VAR_10->arg = VAR_9;
 VAR_10->control = FUNC_5(VAR_7, VAR_11);
 VAR_10->control->handle = VAR_11;
 VAR_10->control->magic = VAR_2;
 VAR_10->control->lwlock_tranche_id = VAR_8->tranche_id;


 {
  dshash_partition *VAR_12 = VAR_10->control->partitions;
  int VAR_13 = VAR_10->control->lwlock_tranche_id;
  int VAR_14;

  for (VAR_14 = 0; VAR_14 < VAR_3; ++VAR_14)
  {
   FUNC_1(&VAR_12[VAR_14].lock, VAR_13);
   VAR_12[VAR_14].count = 0;
  }
 }

 VAR_10->find_locked = 0;
 VAR_10->find_exclusively_locked = 0;





 VAR_10->control->size_log2 = VAR_4;
 VAR_10->control->buckets =
  FUNC_3(VAR_7,
         sizeof(dsa_pointer) * VAR_3,
         VAR_0 | VAR_1);
 if (!FUNC_0(VAR_10->control->buckets))
 {
  FUNC_4(VAR_7, VAR_11);
  FUNC_6(VAR_6,
    (FUNC_7(VAR_5),
     FUNC_9("out of memory"),
     FUNC_8("Failed on DSA request of size %zu.",
         sizeof(dsa_pointer) * VAR_3)));
 }
 VAR_10->buckets = FUNC_5(VAR_7,
            VAR_10->control->buckets);
 VAR_10->size_log2 = VAR_10->control->size_log2;

 return VAR_10;
}
