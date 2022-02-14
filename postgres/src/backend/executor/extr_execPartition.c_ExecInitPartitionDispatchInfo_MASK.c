
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_14__ {int * es_partition_directory; int es_query_cxt; } ;
struct TYPE_13__ {int nparts; } ;
struct TYPE_12__ {int* indexes; int * tupslot; int * tupmap; int reldesc; TYPE_3__* partdesc; int keystate; int key; } ;
struct TYPE_11__ {int num_dispatch; int max_dispatch; TYPE_2__** partition_dispatch_info; int partition_root; int memcxt; } ;
typedef int Relation ;
typedef TYPE_1__ PartitionTupleRouting ;
typedef TYPE_2__* PartitionDispatch ;
typedef TYPE_3__* PartitionDesc ;
typedef scalar_t__ Oid ;
typedef int MemoryContext ;
typedef TYPE_4__ EState ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_4 (int *,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_8 (int ,int ) ;
 int VAR_4 ;
 int FUNC_9 (int*,int,int) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (TYPE_2__**,int) ;
 int FUNC_13 (scalar_t__,int ) ;

__attribute__((used)) static PartitionDispatch
FUNC_14(EState *VAR_5,
         PartitionTupleRouting *VAR_6, Oid VAR_7,
         PartitionDispatch VAR_8, int VAR_9)
{
 Relation VAR_10;
 PartitionDesc VAR_11;
 PartitionDispatch VAR_12;
 int VAR_13;
 MemoryContext VAR_14;

 if (VAR_5->es_partition_directory == ((void*)0))
  VAR_5->es_partition_directory =
   FUNC_1(VAR_5->es_query_cxt);

 VAR_14 = FUNC_3(VAR_6->memcxt);






 if (VAR_7 != FUNC_7(VAR_6->partition_root))
  VAR_10 = FUNC_13(VAR_7, VAR_2);
 else
  VAR_10 = VAR_6->partition_root;
 VAR_11 = FUNC_4(VAR_5->es_partition_directory, VAR_10);

 VAR_12 = (PartitionDispatch) FUNC_11(FUNC_10(VAR_1, VAR_4) +
         VAR_11->nparts * sizeof(int));
 VAR_12->reldesc = VAR_10;
 VAR_12->key = FUNC_6(VAR_10);
 VAR_12->keystate = VAR_0;
 VAR_12->partdesc = VAR_11;
 if (VAR_8 != ((void*)0))
 {
  TupleDesc VAR_15 = FUNC_5(VAR_10);
  VAR_12->tupmap = FUNC_8(FUNC_5(VAR_8->reldesc),
                VAR_15);
  VAR_12->tupslot = VAR_12->tupmap ?
   FUNC_2(VAR_15, &VAR_3) : ((void*)0);
 }
 else
 {

  VAR_12->tupmap = ((void*)0);
  VAR_12->tupslot = ((void*)0);
 }





 FUNC_9(VAR_12->indexes, -1, sizeof(int) * VAR_11->nparts);


 VAR_13 = VAR_6->num_dispatch++;


 if (VAR_6->num_dispatch >= VAR_6->max_dispatch)
 {
  if (VAR_6->max_dispatch == 0)
  {
   VAR_6->max_dispatch = 4;
   VAR_6->partition_dispatch_info = (PartitionDispatch *)
    FUNC_11(sizeof(PartitionDispatch) * VAR_6->max_dispatch);
  }
  else
  {
   VAR_6->max_dispatch *= 2;
   VAR_6->partition_dispatch_info = (PartitionDispatch *)
    FUNC_12(VAR_6->partition_dispatch_info,
       sizeof(PartitionDispatch) * VAR_6->max_dispatch);
  }
 }
 VAR_6->partition_dispatch_info[VAR_13] = VAR_12;





 if (VAR_8)
 {
  FUNC_0(VAR_8->indexes[VAR_9] == -1);
  VAR_8->indexes[VAR_9] = VAR_13;
 }

 FUNC_3(VAR_14);

 return VAR_12;
}
