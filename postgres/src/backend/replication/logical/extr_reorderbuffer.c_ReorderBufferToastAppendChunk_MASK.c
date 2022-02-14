
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int32 ;
typedef int TupleDesc ;
struct TYPE_10__ {TYPE_3__* newtuple; } ;
struct TYPE_11__ {TYPE_1__ tp; } ;
struct TYPE_15__ {int node; TYPE_2__ data; } ;
struct TYPE_14__ {int * toast_hash; } ;
struct TYPE_13__ {scalar_t__ chunk_id; scalar_t__ last_chunk_seq; scalar_t__ size; int chunks; scalar_t__ num_chunks; int * reconstructed; } ;
struct TYPE_12__ {int tuple; } ;
typedef TYPE_3__ ReorderBufferTupleBuf ;
typedef TYPE_4__ ReorderBufferToastEnt ;
typedef TYPE_5__ ReorderBufferTXN ;
typedef TYPE_6__ ReorderBufferChange ;
typedef int ReorderBuffer ;
typedef int Relation ;
typedef int Pointer ;
typedef scalar_t__ Oid ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,TYPE_5__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (int *,int,int ,int*) ;
 scalar_t__ FUNC_15 (int *,void*,int ,int*) ;

__attribute__((used)) static void
FUNC_16(ReorderBuffer *VAR_4, ReorderBufferTXN *VAR_5,
         Relation VAR_6, ReorderBufferChange *VAR_7)
{
 ReorderBufferToastEnt *VAR_8;
 ReorderBufferTupleBuf *VAR_9;
 bool VAR_10;
 int32 VAR_11;
 bool VAR_12;
 Pointer VAR_13;
 TupleDesc VAR_14 = FUNC_5(VAR_6);
 Oid VAR_15;
 int32 VAR_16;

 if (VAR_5->toast_hash == ((void*)0))
  FUNC_6(VAR_4, VAR_5);

 FUNC_0(FUNC_4(VAR_6));

 VAR_9 = VAR_7->data.tp.newtuple;
 VAR_15 = FUNC_2(FUNC_14(&VAR_9->tuple, 1, VAR_14, &VAR_12));
 FUNC_0(!VAR_12);
 VAR_16 = FUNC_1(FUNC_14(&VAR_9->tuple, 2, VAR_14, &VAR_12));
 FUNC_0(!VAR_12);

 VAR_8 = (ReorderBufferToastEnt *)
  FUNC_15(VAR_5->toast_hash,
     (void *) &VAR_15,
     VAR_1,
     &VAR_10);

 if (!VAR_10)
 {
  FUNC_0(VAR_8->chunk_id == VAR_15);
  VAR_8->num_chunks = 0;
  VAR_8->last_chunk_seq = 0;
  VAR_8->size = 0;
  VAR_8->reconstructed = ((void*)0);
  FUNC_11(&VAR_8->chunks);

  if (VAR_16 != 0)
   FUNC_13(VAR_0, "got sequence entry %d for toast chunk %u instead of seq 0",
     VAR_16, VAR_15);
 }
 else if (VAR_10 && VAR_16 != VAR_8->last_chunk_seq + 1)
  FUNC_13(VAR_0, "got sequence entry %d for toast chunk %u instead of seq %d",
    VAR_16, VAR_15, VAR_8->last_chunk_seq + 1);

 VAR_13 = FUNC_3(FUNC_14(&VAR_9->tuple, 3, VAR_14, &VAR_12));
 FUNC_0(!VAR_12);


 if (!FUNC_7(VAR_13))
  VAR_11 = FUNC_9(VAR_13) - VAR_2;
 else if (FUNC_8(VAR_13))

  VAR_11 = FUNC_10(VAR_13) - VAR_3;
 else
  FUNC_13(VAR_0, "unexpected type of toast chunk");

 VAR_8->size += VAR_11;
 VAR_8->last_chunk_seq = VAR_16;
 VAR_8->num_chunks++;
 FUNC_12(&VAR_8->chunks, &VAR_7->node);
}
