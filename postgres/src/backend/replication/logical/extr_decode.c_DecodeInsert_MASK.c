
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
typedef TYPE_5__ xl_heap_insert ;
struct TYPE_22__ {int origptr; int * record; } ;
typedef TYPE_6__ XLogRecordBuffer ;
typedef int XLogReaderState ;
struct TYPE_25__ {int reorder; TYPE_2__* slot; } ;
struct TYPE_24__ {scalar_t__ dbNode; } ;
struct TYPE_19__ {int clear_toast_afterwards; int newtuple; int relnode; } ;
struct TYPE_20__ {TYPE_3__ tp; } ;
struct TYPE_23__ {TYPE_4__ data; int origin_id; int action; } ;
struct TYPE_17__ {scalar_t__ database; } ;
struct TYPE_18__ {TYPE_1__ data; } ;
typedef scalar_t__ Size ;
typedef TYPE_7__ ReorderBufferChange ;
typedef TYPE_8__ RelFileNode ;
typedef TYPE_9__ LogicalDecodingContext ;


 int FUNC_0 (char*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_9__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,TYPE_7__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_5 (int *,int ,scalar_t__*) ;
 int FUNC_6 (int *,int ,TYPE_8__*,int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_8__*,int) ;

__attribute__((used)) static void
FUNC_11(LogicalDecodingContext *VAR_5, XLogRecordBuffer *VAR_6)
{
 Size VAR_7;
 char *VAR_8;
 Size VAR_9;
 XLogReaderState *VAR_10 = VAR_6->record;
 xl_heap_insert *VAR_11;
 ReorderBufferChange *VAR_12;
 RelFileNode VAR_13;

 VAR_11 = (xl_heap_insert *) FUNC_7(VAR_10);





 if (!(VAR_11->flags & VAR_3))
  return;


 FUNC_6(VAR_10, 0, &VAR_13, ((void*)0), ((void*)0));
 if (VAR_13.dbNode != VAR_5->slot->data.database)
  return;


 if (FUNC_1(VAR_5, FUNC_8(VAR_10)))
  return;

 VAR_12 = FUNC_2(VAR_5->reorder);
 if (!(VAR_11->flags & VAR_4))
  VAR_12->action = VAR_0;
 else
  VAR_12->action = VAR_1;
 VAR_12->origin_id = FUNC_8(VAR_10);

 FUNC_10(&VAR_12->data.tp.relnode, &VAR_13, sizeof(RelFileNode));

 VAR_8 = FUNC_5(VAR_10, 0, &VAR_7);
 VAR_9 = VAR_7 - VAR_2;

 VAR_12->data.tp.newtuple =
  FUNC_3(VAR_5->reorder, VAR_9);

 FUNC_0(VAR_8, VAR_7, VAR_12->data.tp.newtuple);

 VAR_12->data.tp.clear_toast_afterwards = 1;

 FUNC_4(VAR_5->reorder, FUNC_9(VAR_10), VAR_6->origptr, VAR_12);
}
