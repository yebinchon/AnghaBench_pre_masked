
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_21__ {TYPE_1__* flinfo; } ;
struct TYPE_20__ {int t_self; int t_data; } ;
struct TYPE_19__ {scalar_t__ fn_xmin; scalar_t__ use_count; int fn_tid; } ;
struct TYPE_18__ {void* fn_extra; int fn_oid; } ;
typedef TYPE_2__ PLpgSQL_function ;
typedef int PLpgSQL_func_hashkey ;
typedef int Oid ;
typedef TYPE_3__* HeapTuple ;
typedef TYPE_4__* FunctionCallInfo ;
typedef scalar_t__ Form_pg_proc ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_4__*,scalar_t__,int *,int) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_2__* FUNC_9 (TYPE_4__*,TYPE_3__*,TYPE_2__*,int *,int) ;
 int FUNC_10 (int ,char*,int ) ;
 TYPE_2__* FUNC_11 (int *) ;

PLpgSQL_function *
FUNC_12(FunctionCallInfo VAR_2, bool VAR_3)
{
 Oid VAR_4 = VAR_2->flinfo->fn_oid;
 HeapTuple VAR_5;
 Form_pg_proc VAR_6;
 PLpgSQL_function *VAR_7;
 PLpgSQL_func_hashkey VAR_8;
 bool VAR_9 = 0;
 bool VAR_10 = 0;




 VAR_5 = FUNC_6(VAR_1, FUNC_4(VAR_4));
 if (!FUNC_2(VAR_5))
  FUNC_10(VAR_0, "cache lookup failed for function %u", VAR_4);
 VAR_6 = (Form_pg_proc) FUNC_0(VAR_5);





 VAR_7 = (PLpgSQL_function *) VAR_2->flinfo->fn_extra;

recheck:
 if (!VAR_7)
 {

  FUNC_7(VAR_2, VAR_6, &VAR_8, VAR_3);
  VAR_10 = 1;


  VAR_7 = FUNC_11(&VAR_8);
 }

 if (VAR_7)
 {

  if (VAR_7->fn_xmin == FUNC_1(VAR_5->t_data) &&
   FUNC_3(&VAR_7->fn_tid, &VAR_5->t_self))
   VAR_9 = 1;
  else
  {




   FUNC_8(VAR_7);
   if (VAR_7->use_count != 0)
   {
    VAR_7 = ((void*)0);
    if (!VAR_10)
     goto recheck;
   }
  }
 }




 if (!VAR_9)
 {




  if (!VAR_10)
   FUNC_7(VAR_2, VAR_6, &VAR_8,
          VAR_3);




  VAR_7 = FUNC_9(VAR_2, VAR_5, VAR_7,
         &VAR_8, VAR_3);
 }

 FUNC_5(VAR_5);




 VAR_2->flinfo->fn_extra = (void *) VAR_7;




 return VAR_7;
}
