
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


typedef void* XLogRecPtr ;
struct TYPE_17__ {struct TYPE_17__* previous; void* arg; int callback; } ;
struct TYPE_12__ {int (* message_cb ) (TYPE_5__*,TYPE_2__*,void*,int,char const*,int ,char const*) ;} ;
struct TYPE_16__ {int accept_writes; TYPE_1__ callbacks; void* write_location; int write_xid; int fast_forward; } ;
struct TYPE_15__ {char* callback_name; void* report_location; TYPE_5__* ctx; } ;
struct TYPE_14__ {TYPE_5__* private_data; } ;
struct TYPE_13__ {int xid; } ;
typedef int Size ;
typedef TYPE_2__ ReorderBufferTXN ;
typedef TYPE_3__ ReorderBuffer ;
typedef TYPE_4__ LogicalErrorCallbackState ;
typedef TYPE_5__ LogicalDecodingContext ;
typedef TYPE_6__ ErrorContextCallback ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_6__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,TYPE_2__*,void*,int,char const*,int ,char const*) ;

__attribute__((used)) static void
FUNC_2(ReorderBuffer *VAR_3, ReorderBufferTXN *VAR_4,
       XLogRecPtr VAR_5, bool VAR_6,
       const char *VAR_7, Size VAR_8, const char *VAR_9)
{
 LogicalDecodingContext *VAR_10 = VAR_3->private_data;
 LogicalErrorCallbackState VAR_11;
 ErrorContextCallback VAR_12;

 FUNC_0(!VAR_10->fast_forward);

 if (VAR_10->callbacks.message_cb == ((void*)0))
  return;


 VAR_11.ctx = VAR_10;
 VAR_11.callback_name = "message";
 VAR_11.report_location = VAR_5;
 VAR_12.callback = VAR_2;
 VAR_12.arg = (void *) &VAR_11;
 VAR_12.previous = VAR_1;
 VAR_1 = &VAR_12;


 VAR_10->accept_writes = 1;
 VAR_10->write_xid = VAR_4 != ((void*)0) ? VAR_4->xid : VAR_0;
 VAR_10->write_location = VAR_5;


 VAR_10->callbacks.message_cb(VAR_10, VAR_4, VAR_5, VAR_6, VAR_7,
         VAR_8, VAR_9);


 VAR_1 = VAR_12.previous;
}
