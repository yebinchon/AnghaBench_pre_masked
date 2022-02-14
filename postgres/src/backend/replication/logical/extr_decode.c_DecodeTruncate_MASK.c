
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ dbId; int flags; int nrelids; int relids; } ;
typedef TYPE_5__ xl_heap_truncate ;
struct TYPE_19__ {int origptr; int * record; } ;
typedef TYPE_6__ XLogRecordBuffer ;
typedef int XLogReaderState ;
struct TYPE_21__ {int reorder; TYPE_2__* slot; } ;
struct TYPE_16__ {int cascade; int restart_seqs; int nrelids; int relids; } ;
struct TYPE_17__ {TYPE_3__ truncate; } ;
struct TYPE_20__ {TYPE_4__ data; int origin_id; int action; } ;
struct TYPE_14__ {scalar_t__ database; } ;
struct TYPE_15__ {TYPE_1__ data; } ;
typedef TYPE_7__ ReorderBufferChange ;
typedef int Oid ;
typedef TYPE_8__ LogicalDecodingContext ;


 scalar_t__ FUNC_0 (TYPE_8__*,int ) ;
 int VAR_0 ;
 TYPE_7__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ,TYPE_7__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_8(LogicalDecodingContext *VAR_3, XLogRecordBuffer *VAR_4)
{
 XLogReaderState *VAR_5 = VAR_4->record;
 xl_heap_truncate *VAR_6;
 ReorderBufferChange *VAR_7;

 VAR_6 = (xl_heap_truncate *) FUNC_4(VAR_5);


 if (VAR_6->dbId != VAR_3->slot->data.database)
  return;


 if (FUNC_0(VAR_3, FUNC_5(VAR_5)))
  return;

 VAR_7 = FUNC_1(VAR_3->reorder);
 VAR_7->action = VAR_0;
 VAR_7->origin_id = FUNC_5(VAR_5);
 if (VAR_6->flags & VAR_1)
  VAR_7->data.truncate.cascade = 1;
 if (VAR_6->flags & VAR_2)
  VAR_7->data.truncate.restart_seqs = 1;
 VAR_7->data.truncate.nrelids = VAR_6->nrelids;
 VAR_7->data.truncate.relids = FUNC_2(VAR_3->reorder,
                VAR_6->nrelids);
 FUNC_7(VAR_7->data.truncate.relids, VAR_6->relids,
     VAR_6->nrelids * sizeof(Oid));
 FUNC_3(VAR_3->reorder, FUNC_6(VAR_5),
        VAR_4->origptr, VAR_7);
}
