
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* prodesc; TYPE_1__* trigdata; int * attinmeta; TYPE_4__* ret_tupdesc; } ;
typedef TYPE_3__ pltcl_call_state ;
typedef TYPE_4__* TupleDesc ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;
struct TYPE_15__ {scalar_t__ attgenerated; } ;
struct TYPE_14__ {int natts; } ;
struct TYPE_12__ {int fn_cxt; int domain_info; int result_typid; scalar_t__ fn_retisdomain; } ;
struct TYPE_11__ {int tg_relation; } ;
typedef int HeapTuple ;
typedef int AttInMetadata ;


 int FUNC_0 (int *,char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (int *) ;
 TYPE_7__* FUNC_5 (TYPE_4__*,int) ;
 int * FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,int,int ,int *,int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,...) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 char* FUNC_14 (int ) ;

__attribute__((used)) static HeapTuple
FUNC_15(Tcl_Interp *VAR_6, Tcl_Obj **VAR_7, int VAR_8,
       pltcl_call_state *VAR_9)
{
 HeapTuple VAR_10;
 TupleDesc VAR_11;
 AttInMetadata *VAR_12;
 char **VAR_13;
 int VAR_14;

 if (VAR_9->ret_tupdesc)
 {
  VAR_11 = VAR_9->ret_tupdesc;
  VAR_12 = VAR_9->attinmeta;
 }
 else if (VAR_9->trigdata)
 {
  VAR_11 = FUNC_2(VAR_9->trigdata->tg_relation);
  VAR_12 = FUNC_6(VAR_11);
 }
 else
 {
  FUNC_8(VAR_4, "PL/Tcl function does not return a tuple");
  VAR_11 = ((void*)0);
  VAR_12 = ((void*)0);
 }

 VAR_13 = (char **) FUNC_12(VAR_11->natts * sizeof(char *));

 if (VAR_8 % 2 != 0)
  FUNC_9(VAR_4,
    (FUNC_10(VAR_2),
     FUNC_11("column name/value list must have even number of elements")));

 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14 += 2)
 {
  char *VAR_15 = FUNC_14(FUNC_4(VAR_7[VAR_14]));
  int VAR_16 = FUNC_3(VAR_11, VAR_15);






  if (VAR_16 == VAR_5)
  {
   if (FUNC_13(VAR_15, ".tupno") == 0)
    continue;
   FUNC_9(VAR_4,
     (FUNC_10(VAR_3),
      FUNC_11("column name/value list contains nonexistent column name \"%s\"",
       VAR_15)));
  }

  if (VAR_16 <= 0)
   FUNC_9(VAR_4,
     (FUNC_10(VAR_1),
      FUNC_11("cannot set system attribute \"%s\"",
       VAR_15)));

  if (FUNC_5(VAR_11, VAR_16 - 1)->attgenerated)
   FUNC_9(VAR_4,
     (FUNC_10(VAR_0),
      FUNC_11("cannot set generated column \"%s\"",
       VAR_15)));

  VAR_13[VAR_16 - 1] = FUNC_14(FUNC_4(VAR_7[VAR_14 + 1]));
 }

 VAR_10 = FUNC_0(VAR_12, VAR_13);


 if (VAR_9->prodesc->fn_retisdomain)
  FUNC_7(FUNC_1(VAR_10), 0,
      VAR_9->prodesc->result_typid,
      &VAR_9->prodesc->domain_info,
      VAR_9->prodesc->fn_cxt);

 return VAR_10;
}
