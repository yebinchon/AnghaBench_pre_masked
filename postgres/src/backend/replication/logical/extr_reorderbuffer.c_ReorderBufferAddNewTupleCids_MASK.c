
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_7__ {void* combocid; void* cmax; void* cmin; int tid; int node; } ;
struct TYPE_8__ {TYPE_1__ tuplecid; } ;
struct TYPE_10__ {int node; int action; int lsn; TYPE_2__ data; } ;
struct TYPE_9__ {int ntuplecids; int tuplecids; } ;
typedef TYPE_3__ ReorderBufferTXN ;
typedef TYPE_4__ ReorderBufferChange ;
typedef int ReorderBuffer ;
typedef int RelFileNode ;
typedef int ItemPointerData ;
typedef void* CommandId ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *,int ,int,int *,int ,int) ;
 int FUNC_2 (int *,int *) ;

void
FUNC_3(ReorderBuffer *VAR_1, TransactionId VAR_2,
        XLogRecPtr VAR_3, RelFileNode VAR_4,
        ItemPointerData VAR_5, CommandId VAR_6,
        CommandId VAR_7, CommandId VAR_8)
{
 ReorderBufferChange *VAR_9 = FUNC_0(VAR_1);
 ReorderBufferTXN *VAR_10;

 VAR_10 = FUNC_1(VAR_1, VAR_2, 1, ((void*)0), VAR_3, 1);

 VAR_9->data.tuplecid.node = VAR_4;
 VAR_9->data.tuplecid.tid = VAR_5;
 VAR_9->data.tuplecid.cmin = VAR_6;
 VAR_9->data.tuplecid.cmax = VAR_7;
 VAR_9->data.tuplecid.combocid = VAR_8;
 VAR_9->lsn = VAR_3;
 VAR_9->action = VAR_0;

 FUNC_2(&VAR_10->tuplecids, &VAR_9->node);
 VAR_10->ntuplecids++;
}
