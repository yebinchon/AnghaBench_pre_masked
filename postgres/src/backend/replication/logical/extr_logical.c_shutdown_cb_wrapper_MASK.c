
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* previous; void* arg; int callback; } ;
struct TYPE_8__ {int (* shutdown_cb ) (TYPE_3__*) ;} ;
struct TYPE_10__ {int accept_writes; TYPE_1__ callbacks; int fast_forward; } ;
struct TYPE_9__ {char* callback_name; int report_location; TYPE_3__* ctx; } ;
typedef TYPE_2__ LogicalErrorCallbackState ;
typedef TYPE_3__ LogicalDecodingContext ;
typedef TYPE_4__ ErrorContextCallback ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(LogicalDecodingContext *VAR_3)
{
 LogicalErrorCallbackState VAR_4;
 ErrorContextCallback VAR_5;

 FUNC_0(!VAR_3->fast_forward);


 VAR_4.ctx = VAR_3;
 VAR_4.callback_name = "shutdown";
 VAR_4.report_location = VAR_0;
 VAR_5.callback = VAR_2;
 VAR_5.arg = (void *) &VAR_4;
 VAR_5.previous = VAR_1;
 VAR_1 = &VAR_5;


 VAR_3->accept_writes = 0;


 VAR_3->callbacks.shutdown_cb(VAR_3);


 VAR_1 = VAR_5.previous;
}
