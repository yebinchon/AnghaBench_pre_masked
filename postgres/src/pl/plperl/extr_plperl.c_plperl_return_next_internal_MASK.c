
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int result_typioparam; int result_in_func; scalar_t__ result_oid; scalar_t__ fn_retistuple; int fn_retisset; } ;
typedef TYPE_2__ plperl_proc_desc ;
typedef scalar_t__ TypeFuncClass ;
typedef TYPE_3__* TupleDesc ;
struct TYPE_16__ {scalar_t__ tmp_cxt; scalar_t__ ret_tdesc; scalar_t__ tuple_store; int cdomain_info; int cdomain_oid; TYPE_5__* fcinfo; TYPE_2__* prodesc; } ;
struct TYPE_15__ {scalar_t__ resultinfo; } ;
struct TYPE_14__ {int allowedModes; TYPE_1__* econtext; TYPE_3__* expectedDesc; } ;
struct TYPE_13__ {int natts; } ;
struct TYPE_11__ {scalar_t__ ecxt_per_query_memory; } ;
typedef int SV ;
typedef TYPE_4__ ReturnSetInfo ;
typedef int Oid ;
typedef scalar_t__ MemoryContext ;
typedef int HeapTuple ;
typedef int HV ;
typedef TYPE_5__* FunctionCallInfo ;
typedef int Datum ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_9__* VAR_10 ;
 int FUNC_11 (int ,int,int ,int *,scalar_t__) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (TYPE_5__*,int *,TYPE_3__**) ;
 int FUNC_17 (int *,scalar_t__) ;
 int FUNC_18 (int *,scalar_t__,int,TYPE_5__*,int *,int ,int*) ;
 scalar_t__ FUNC_19 (int,int,int ) ;
 int FUNC_20 (scalar_t__,int ) ;
 int FUNC_21 (scalar_t__,scalar_t__,int *,int*) ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_22(SV *VAR_12)
{
 plperl_proc_desc *VAR_13;
 FunctionCallInfo VAR_14;
 ReturnSetInfo *VAR_15;
 MemoryContext VAR_16;

 if (!VAR_12)
  return;

 VAR_13 = VAR_10->prodesc;
 VAR_14 = VAR_10->fcinfo;
 VAR_15 = (ReturnSetInfo *) VAR_14->resultinfo;

 if (!VAR_13->fn_retisset)
  FUNC_13(VAR_5,
    (FUNC_14(VAR_4),
     FUNC_15("cannot use return_next in a non-SETOF function")));

 if (!VAR_10->ret_tdesc)
 {
  TupleDesc VAR_17;

  FUNC_1(!VAR_10->tuple_store);






  if (VAR_13->fn_retistuple)
  {
   TypeFuncClass VAR_18;
   Oid VAR_19;

   VAR_18 = FUNC_16(VAR_14, &VAR_19, &VAR_17);
   if (VAR_18 != VAR_8 &&
    VAR_18 != VAR_9)
    FUNC_13(VAR_5,
      (FUNC_14(VAR_3),
       FUNC_15("function returning record called in context "
        "that cannot accept type record")));

   if (VAR_18 == VAR_9)
    VAR_10->cdomain_oid = VAR_19;
  }
  else
  {
   VAR_17 = VAR_15->expectedDesc;

   if (VAR_17 == ((void*)0) || VAR_17->natts != 1)
    FUNC_12(VAR_5, "expected single-column result descriptor for non-composite SETOF result");
  }





  VAR_16 = FUNC_5(VAR_15->econtext->ecxt_per_query_memory);

  VAR_10->ret_tdesc = FUNC_2(VAR_17);
  VAR_10->tuple_store =
   FUNC_19(VAR_15->allowedModes & VAR_6,
          0, VAR_11);

  FUNC_5(VAR_16);
 }







 if (!VAR_10->tmp_cxt)
 {
  VAR_10->tmp_cxt =
   FUNC_0(VAR_1,
          "PL/Perl return_next temporary cxt",
          VAR_0);
 }

 VAR_16 = FUNC_5(VAR_10->tmp_cxt);

 if (VAR_13->fn_retistuple)
 {
  HeapTuple VAR_20;

  if (!(FUNC_7(VAR_12) && FUNC_8(VAR_12) && FUNC_10(FUNC_9(VAR_12)) == VAR_7))
   FUNC_13(VAR_5,
     (FUNC_14(VAR_2),
      FUNC_15("SETOF-composite-returning PL/Perl function "
       "must call return_next with reference to hash")));

  VAR_20 = FUNC_17((HV *) FUNC_9(VAR_12),
            VAR_10->ret_tdesc);

  if (FUNC_6(VAR_10->cdomain_oid))
   FUNC_11(FUNC_3(VAR_20), 0,
       VAR_10->cdomain_oid,
       &VAR_10->cdomain_info,
       VAR_15->econtext->ecxt_per_query_memory);

  FUNC_20(VAR_10->tuple_store, VAR_20);
 }
 else if (VAR_13->result_oid)
 {
  Datum VAR_21[1];
  bool VAR_22[1];

  VAR_21[0] = FUNC_18(VAR_12,
         VAR_13->result_oid,
         -1,
         VAR_14,
         &VAR_13->result_in_func,
         VAR_13->result_typioparam,
         &VAR_22[0]);

  FUNC_21(VAR_10->tuple_store,
        VAR_10->ret_tdesc,
        VAR_21, VAR_22);
 }

 FUNC_5(VAR_16);
 FUNC_4(VAR_10->tmp_cxt);
}
