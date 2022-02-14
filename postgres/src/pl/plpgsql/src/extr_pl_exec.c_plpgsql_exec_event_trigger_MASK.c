
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_21__ {int (* func_end ) (TYPE_2__*,TYPE_1__*) ;int (* func_beg ) (TYPE_2__*,TYPE_1__*) ;} ;
struct TYPE_20__ {struct TYPE_20__* previous; TYPE_2__* arg; int callback; } ;
struct TYPE_19__ {int * err_text; int * err_stmt; int * evtrigdata; } ;
struct TYPE_18__ {scalar_t__ action; } ;
typedef int PLpgSQL_stmt ;
typedef TYPE_1__ PLpgSQL_function ;
typedef TYPE_2__ PLpgSQL_execstate ;
typedef int EventTriggerData ;
typedef TYPE_3__ ErrorContextCallback ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,int *,int *) ;
 int VAR_4 ;
 TYPE_8__** VAR_5 ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*) ;

void
FUNC_11(PLpgSQL_function *VAR_6, EventTriggerData *VAR_7)
{
 PLpgSQL_execstate VAR_8;
 ErrorContextCallback VAR_9;
 int VAR_10;




 FUNC_8(&VAR_8, VAR_6, ((void*)0), ((void*)0));
 VAR_8.evtrigdata = VAR_7;




 VAR_9.callback = VAR_4;
 VAR_9.arg = &VAR_8;
 VAR_9.previous = VAR_3;
 VAR_3 = &VAR_9;




 VAR_8.err_text = FUNC_6("during initialization of execution state");
 FUNC_0(&VAR_8, VAR_6);




 if (*VAR_5 && (*VAR_5)->func_beg)
  ((*VAR_5)->func_beg) (&VAR_8, VAR_6);




 VAR_8.err_text = ((void*)0);
 VAR_8.err_stmt = (PLpgSQL_stmt *) (VAR_6->action);
 VAR_10 = FUNC_5(&VAR_8, (PLpgSQL_stmt *) VAR_6->action);
 if (VAR_10 != VAR_2)
 {
  VAR_8.err_stmt = ((void*)0);
  VAR_8.err_text = ((void*)0);
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("control reached end of trigger procedure without RETURN")));
 }

 VAR_8.err_stmt = ((void*)0);
 VAR_8.err_text = FUNC_6("during function exit");




 if (*VAR_5 && (*VAR_5)->func_end)
  ((*VAR_5)->func_end) (&VAR_8, VAR_6);


 FUNC_7(&VAR_8);
 FUNC_4(&VAR_8);





 VAR_3 = VAR_9.previous;

 return;
}
