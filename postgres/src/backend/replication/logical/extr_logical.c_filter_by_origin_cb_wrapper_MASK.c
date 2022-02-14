
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* previous; void* arg; int callback; } ;
struct TYPE_8__ {int (* filter_by_origin_cb ) (TYPE_3__*,int ) ;} ;
struct TYPE_10__ {int accept_writes; TYPE_1__ callbacks; int fast_forward; } ;
struct TYPE_9__ {char* callback_name; int report_location; TYPE_3__* ctx; } ;
typedef int RepOriginId ;
typedef TYPE_2__ LogicalErrorCallbackState ;
typedef TYPE_3__ LogicalDecodingContext ;
typedef TYPE_4__ ErrorContextCallback ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ) ;

bool
FUNC_2(LogicalDecodingContext *VAR_3, RepOriginId VAR_4)
{
 LogicalErrorCallbackState VAR_5;
 ErrorContextCallback VAR_6;
 bool VAR_7;

 FUNC_0(!VAR_3->fast_forward);


 VAR_5.ctx = VAR_3;
 VAR_5.callback_name = "filter_by_origin";
 VAR_5.report_location = VAR_0;
 VAR_6.callback = VAR_2;
 VAR_6.arg = (void *) &VAR_5;
 VAR_6.previous = VAR_1;
 VAR_1 = &VAR_6;


 VAR_3->accept_writes = 0;


 VAR_7 = VAR_3->callbacks.filter_by_origin_cb(VAR_3, VAR_4);


 VAR_1 = VAR_6.previous;

 return VAR_7;
}
