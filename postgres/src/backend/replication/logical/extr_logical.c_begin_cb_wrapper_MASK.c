
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


struct TYPE_17__ {struct TYPE_17__* previous; void* arg; int callback; } ;
struct TYPE_12__ {int (* begin_cb ) (TYPE_5__*,TYPE_2__*) ;} ;
struct TYPE_16__ {int accept_writes; TYPE_1__ callbacks; int write_location; int write_xid; int fast_forward; } ;
struct TYPE_15__ {char* callback_name; int report_location; TYPE_5__* ctx; } ;
struct TYPE_14__ {TYPE_5__* private_data; } ;
struct TYPE_13__ {int first_lsn; int xid; } ;
typedef TYPE_2__ ReorderBufferTXN ;
typedef TYPE_3__ ReorderBuffer ;
typedef TYPE_4__ LogicalErrorCallbackState ;
typedef TYPE_5__ LogicalDecodingContext ;
typedef TYPE_6__ ErrorContextCallback ;


 int FUNC_0 (int) ;
 TYPE_6__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(ReorderBuffer *VAR_2, ReorderBufferTXN *VAR_3)
{
 LogicalDecodingContext *VAR_4 = VAR_2->private_data;
 LogicalErrorCallbackState VAR_5;
 ErrorContextCallback VAR_6;

 FUNC_0(!VAR_4->fast_forward);


 VAR_5.ctx = VAR_4;
 VAR_5.callback_name = "begin";
 VAR_5.report_location = VAR_3->first_lsn;
 VAR_6.callback = VAR_1;
 VAR_6.arg = (void *) &VAR_5;
 VAR_6.previous = VAR_0;
 VAR_0 = &VAR_6;


 VAR_4->accept_writes = 1;
 VAR_4->write_xid = VAR_3->xid;
 VAR_4->write_location = VAR_3->first_lsn;


 VAR_4->callbacks.begin_cb(VAR_4, VAR_3);


 VAR_0 = VAR_6.previous;
}
