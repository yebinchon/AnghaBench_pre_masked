
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* previous; void* arg; int callback; } ;
struct TYPE_8__ {int (* startup_cb ) (TYPE_3__*,int *,int) ;} ;
struct TYPE_10__ {int accept_writes; TYPE_1__ callbacks; int fast_forward; } ;
struct TYPE_9__ {char* callback_name; int report_location; TYPE_3__* ctx; } ;
typedef int OutputPluginOptions ;
typedef TYPE_2__ LogicalErrorCallbackState ;
typedef TYPE_3__ LogicalDecodingContext ;
typedef TYPE_4__ ErrorContextCallback ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int *,int) ;

__attribute__((used)) static void
FUNC_2(LogicalDecodingContext *VAR_3, OutputPluginOptions *VAR_4, bool VAR_5)
{
 LogicalErrorCallbackState VAR_6;
 ErrorContextCallback VAR_7;

 FUNC_0(!VAR_3->fast_forward);


 VAR_6.ctx = VAR_3;
 VAR_6.callback_name = "startup";
 VAR_6.report_location = VAR_0;
 VAR_7.callback = VAR_2;
 VAR_7.arg = (void *) &VAR_6;
 VAR_7.previous = VAR_1;
 VAR_1 = &VAR_7;


 VAR_3->accept_writes = 0;


 VAR_3->callbacks.startup_cb(VAR_3, VAR_4, VAR_5);


 VAR_1 = VAR_7.previous;
}
