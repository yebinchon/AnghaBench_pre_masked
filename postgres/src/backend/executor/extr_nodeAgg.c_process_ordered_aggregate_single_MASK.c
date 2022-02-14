
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {size_t current_set; TYPE_1__* tmpcontext; } ;
struct TYPE_13__ {int numDistinctCols; int ** sortstates; int inputtypeByVal; int aggCollation; int equalfnOne; TYPE_3__* transfn_fcinfo; } ;
struct TYPE_12__ {TYPE_2__* args; } ;
struct TYPE_11__ {scalar_t__ value; int isnull; } ;
struct TYPE_10__ {int ecxt_per_tuple_memory; } ;
typedef int MemoryContext ;
typedef TYPE_3__* FunctionCallInfo ;
typedef scalar_t__ Datum ;
typedef TYPE_4__* AggStatePerTrans ;
typedef int AggStatePerGroup ;
typedef TYPE_5__ AggState ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int,scalar_t__*,int*,scalar_t__*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(AggState *VAR_0,
         AggStatePerTrans VAR_1,
         AggStatePerGroup VAR_2)
{
 Datum VAR_3 = (Datum) 0;
 bool VAR_4 = 1;
 bool VAR_5 = 0;
 MemoryContext VAR_6 = VAR_0->tmpcontext->ecxt_per_tuple_memory;
 MemoryContext VAR_7;
 bool VAR_8 = (VAR_1->numDistinctCols > 0);
 Datum VAR_9 = (Datum) 0;
 Datum VAR_10 = (Datum) 0;
 FunctionCallInfo VAR_11 = VAR_1->transfn_fcinfo;
 Datum *VAR_12;
 bool *VAR_13;

 FUNC_0(VAR_1->numDistinctCols < 2);

 FUNC_10(VAR_1->sortstates[VAR_0->current_set]);


 VAR_12 = &VAR_11->args[1].value;
 VAR_13 = &VAR_11->args[1].isnull;







 while (FUNC_9(VAR_1->sortstates[VAR_0->current_set],
         1, VAR_12, VAR_13, &VAR_9))
 {




  FUNC_4(VAR_6);
  VAR_7 = FUNC_5(VAR_6);




  if (VAR_8 &&
   VAR_5 &&
   ((VAR_4 && *VAR_13) ||
    (!VAR_4 && !*VAR_13 &&
     VAR_10 == VAR_9 &&
     FUNC_1(FUNC_3(&VAR_1->equalfnOne,
            VAR_1->aggCollation,
            VAR_3, *VAR_12)))))
  {

   if (!VAR_1->inputtypeByVal && !*VAR_13)
    FUNC_7(FUNC_2(*VAR_12));
  }
  else
  {
   FUNC_6(VAR_0, VAR_1, VAR_2);

   if (!VAR_4 && !VAR_1->inputtypeByVal)
    FUNC_7(FUNC_2(VAR_3));

   VAR_3 = *VAR_12;
   VAR_10 = VAR_9;
   VAR_4 = *VAR_13;
   VAR_5 = 1;
  }

  FUNC_5(VAR_7);
 }

 if (!VAR_4 && !VAR_1->inputtypeByVal)
  FUNC_7(FUNC_2(VAR_3));

 FUNC_8(VAR_1->sortstates[VAR_0->current_set]);
 VAR_1->sortstates[VAR_0->current_set] = ((void*)0);
}
