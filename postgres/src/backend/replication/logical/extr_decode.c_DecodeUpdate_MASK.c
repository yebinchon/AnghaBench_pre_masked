
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {int flags; } ;
typedef TYPE_5__ xl_heap_update ;
struct TYPE_22__ {int origptr; int * record; } ;
typedef TYPE_6__ XLogRecordBuffer ;
typedef int XLogReaderState ;
struct TYPE_25__ {int reorder; TYPE_2__* slot; } ;
struct TYPE_24__ {scalar_t__ dbNode; } ;
struct TYPE_19__ {int clear_toast_afterwards; void* oldtuple; void* newtuple; int relnode; } ;
struct TYPE_20__ {TYPE_3__ tp; } ;
struct TYPE_23__ {TYPE_4__ data; int origin_id; int action; } ;
struct TYPE_17__ {scalar_t__ database; } ;
struct TYPE_18__ {TYPE_1__ data; } ;
typedef int Size ;
typedef TYPE_7__ ReorderBufferChange ;
typedef TYPE_8__ RelFileNode ;
typedef TYPE_9__ LogicalDecodingContext ;


 int FUNC_0 (char*,int,void*) ;
 scalar_t__ FUNC_1 (TYPE_9__*,int ) ;
 int VAR_0 ;
 TYPE_7__* FUNC_2 (int ) ;
 void* FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ,TYPE_7__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_5 (int *,int ,int*) ;
 int FUNC_6 (int *,int ,TYPE_8__*,int *,int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_8__*,int) ;

__attribute__((used)) static void
FUNC_12(LogicalDecodingContext *VAR_5, XLogRecordBuffer *VAR_6)
{
 XLogReaderState *VAR_7 = VAR_6->record;
 xl_heap_update *VAR_8;
 ReorderBufferChange *VAR_9;
 char *VAR_10;
 RelFileNode VAR_11;

 VAR_8 = (xl_heap_update *) FUNC_7(VAR_7);


 FUNC_6(VAR_7, 0, &VAR_11, ((void*)0), ((void*)0));
 if (VAR_11.dbNode != VAR_5->slot->data.database)
  return;


 if (FUNC_1(VAR_5, FUNC_9(VAR_7)))
  return;

 VAR_9 = FUNC_2(VAR_5->reorder);
 VAR_9->action = VAR_0;
 VAR_9->origin_id = FUNC_9(VAR_7);
 FUNC_11(&VAR_9->data.tp.relnode, &VAR_11, sizeof(RelFileNode));

 if (VAR_8->flags & VAR_3)
 {
  Size VAR_12;
  Size VAR_13;

  VAR_10 = FUNC_5(VAR_7, 0, &VAR_12);

  VAR_13 = VAR_12 - VAR_1;

  VAR_9->data.tp.newtuple =
   FUNC_3(VAR_5->reorder, VAR_13);

  FUNC_0(VAR_10, VAR_12, VAR_9->data.tp.newtuple);
 }

 if (VAR_8->flags & VAR_4)
 {
  Size VAR_14;
  Size VAR_15;


  VAR_10 = FUNC_7(VAR_7) + VAR_2;
  VAR_14 = FUNC_8(VAR_7) - VAR_2;
  VAR_15 = VAR_14 - VAR_1;

  VAR_9->data.tp.oldtuple =
   FUNC_3(VAR_5->reorder, VAR_15);

  FUNC_0(VAR_10, VAR_14, VAR_9->data.tp.oldtuple);
 }

 VAR_9->data.tp.clear_toast_afterwards = 1;

 FUNC_4(VAR_5->reorder, FUNC_10(VAR_7), VAR_6->origptr, VAR_9);
}
