
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {int origptr; int * record; } ;
typedef TYPE_5__ XLogRecordBuffer ;
typedef int XLogReaderState ;
struct TYPE_23__ {int reorder; TYPE_2__* slot; } ;
struct TYPE_22__ {scalar_t__ dbNode; } ;
struct TYPE_18__ {int clear_toast_afterwards; int relnode; } ;
struct TYPE_19__ {TYPE_3__ tp; } ;
struct TYPE_21__ {TYPE_4__ data; int origin_id; int action; } ;
struct TYPE_16__ {scalar_t__ database; } ;
struct TYPE_17__ {TYPE_1__ data; } ;
typedef TYPE_6__ ReorderBufferChange ;
typedef TYPE_7__ RelFileNode ;
typedef TYPE_8__ LogicalDecodingContext ;


 scalar_t__ FUNC_0 (TYPE_8__*,int ) ;
 int VAR_0 ;
 TYPE_6__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,TYPE_6__*) ;
 int FUNC_3 (int *,int ,TYPE_7__*,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_7__*,int) ;

__attribute__((used)) static void
FUNC_7(LogicalDecodingContext *VAR_1, XLogRecordBuffer *VAR_2)
{
 XLogReaderState *VAR_3 = VAR_2->record;
 ReorderBufferChange *VAR_4;
 RelFileNode VAR_5;


 FUNC_3(VAR_3, 0, &VAR_5, ((void*)0), ((void*)0));
 if (VAR_5.dbNode != VAR_1->slot->data.database)
  return;


 if (FUNC_0(VAR_1, FUNC_4(VAR_3)))
  return;

 VAR_4 = FUNC_1(VAR_1->reorder);
 VAR_4->action = VAR_0;
 VAR_4->origin_id = FUNC_4(VAR_3);

 FUNC_6(&VAR_4->data.tp.relnode, &VAR_5, sizeof(RelFileNode));

 VAR_4->data.tp.clear_toast_afterwards = 1;

 FUNC_2(VAR_1->reorder, FUNC_5(VAR_3), VAR_2->origptr, VAR_4);
}
