
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_17__ {struct TYPE_17__* previous; void* arg; int callback; } ;
struct TYPE_12__ {int (* commit_cb ) (TYPE_5__*,TYPE_2__*,int ) ;} ;
struct TYPE_16__ {int accept_writes; TYPE_1__ callbacks; int write_location; int write_xid; int fast_forward; } ;
struct TYPE_15__ {char* callback_name; int report_location; TYPE_5__* ctx; } ;
struct TYPE_14__ {TYPE_5__* private_data; } ;
struct TYPE_13__ {int end_lsn; int xid; int final_lsn; } ;
typedef TYPE_2__ ReorderBufferTXN ;
typedef TYPE_3__ ReorderBuffer ;
typedef TYPE_4__ LogicalErrorCallbackState ;
typedef TYPE_5__ LogicalDecodingContext ;
typedef TYPE_6__ ErrorContextCallback ;


 int FUNC_0 (int) ;
 TYPE_6__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_2(ReorderBuffer *VAR_2, ReorderBufferTXN *VAR_3,
      XLogRecPtr VAR_4)
{
 LogicalDecodingContext *VAR_5 = VAR_2->private_data;
 LogicalErrorCallbackState VAR_6;
 ErrorContextCallback VAR_7;

 FUNC_0(!VAR_5->fast_forward);


 VAR_6.ctx = VAR_5;
 VAR_6.callback_name = "commit";
 VAR_6.report_location = VAR_3->final_lsn;
 VAR_7.callback = VAR_1;
 VAR_7.arg = (void *) &VAR_6;
 VAR_7.previous = VAR_0;
 VAR_0 = &VAR_7;


 VAR_5->accept_writes = 1;
 VAR_5->write_xid = VAR_3->xid;
 VAR_5->write_location = VAR_3->end_lsn;


 VAR_5->callbacks.commit_cb(VAR_5, VAR_3, VAR_4);


 VAR_0 = VAR_7.previous;
}
