
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
struct TYPE_15__ {int (* change_cb ) (TYPE_6__*,TYPE_2__*,int ,TYPE_3__*) ;} ;
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
 int FUNC_1 (TYPE_6__*,TYPE_2__*,int ,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(ReorderBuffer *VAR_2, ReorderBufferTXN *VAR_3,
      Relation VAR_4, ReorderBufferChange *VAR_5)
{
 LogicalDecodingContext *VAR_6 = VAR_2->private_data;
 LogicalErrorCallbackState VAR_7;
 ErrorContextCallback VAR_8;

 FUNC_0(!VAR_6->fast_forward);


 VAR_7.ctx = VAR_6;
 VAR_7.callback_name = "change";
 VAR_7.report_location = VAR_5->lsn;
 VAR_8.callback = VAR_1;
 VAR_8.arg = (void *) &VAR_7;
 VAR_8.previous = VAR_0;
 VAR_0 = &VAR_8;


 VAR_6->accept_writes = 1;
 VAR_6->write_xid = VAR_3->xid;







 VAR_6->write_location = VAR_5->lsn;

 VAR_6->callbacks.change_cb(VAR_6, VAR_3, VAR_4, VAR_5);


 VAR_0 = VAR_8.previous;
}
