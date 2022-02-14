
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_21__ {struct TYPE_21__* previous; void* arg; int callback; } ;
struct TYPE_15__ {int (* truncate_cb ) (TYPE_6__*,TYPE_2__*,int,int *,TYPE_3__*) ;} ;
struct TYPE_20__ {int accept_writes; TYPE_1__ callbacks; int write_location; int write_xid; int fast_forward; } ;
struct TYPE_19__ {char* callback_name; int report_location; TYPE_6__* ctx; } ;
struct TYPE_18__ {TYPE_6__* private_data; } ;
struct TYPE_17__ {int lsn; } ;
struct TYPE_16__ {int xid; } ;
typedef TYPE_2__ ReorderBufferTXN ;
typedef TYPE_3__ ReorderBufferChange ;
typedef TYPE_4__ ReorderBuffer ;
typedef int Relation ;
typedef TYPE_5__ LogicalErrorCallbackState ;
typedef TYPE_6__ LogicalDecodingContext ;
typedef TYPE_7__ ErrorContextCallback ;


 int FUNC_0 (int) ;
 TYPE_7__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_6__*,TYPE_2__*,int,int *,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(ReorderBuffer *VAR_2, ReorderBufferTXN *VAR_3,
     int VAR_4, Relation VAR_5[], ReorderBufferChange *VAR_6)
{
 LogicalDecodingContext *VAR_7 = VAR_2->private_data;
 LogicalErrorCallbackState VAR_8;
 ErrorContextCallback VAR_9;

 FUNC_0(!VAR_7->fast_forward);

 if (!VAR_7->callbacks.truncate_cb)
  return;


 VAR_8.ctx = VAR_7;
 VAR_8.callback_name = "truncate";
 VAR_8.report_location = VAR_6->lsn;
 VAR_9.callback = VAR_1;
 VAR_9.arg = (void *) &VAR_8;
 VAR_9.previous = VAR_0;
 VAR_0 = &VAR_9;


 VAR_7->accept_writes = 1;
 VAR_7->write_xid = VAR_3->xid;







 VAR_7->write_location = VAR_6->lsn;

 VAR_7->callbacks.truncate_cb(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);


 VAR_0 = VAR_9.previous;
}
