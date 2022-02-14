
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_8__ ;
typedef struct TYPE_45__ TYPE_7__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_32__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_13__ ;


typedef TYPE_2__* TupleDesc ;
typedef int TupleConversionMap ;
struct TYPE_41__ {int tg_relation; int * tg_trigtuple; int * tg_newtuple; int tg_event; } ;
typedef TYPE_3__ TriggerData ;
struct TYPE_46__ {struct TYPE_46__* previous; TYPE_6__* arg; int callback; } ;
struct TYPE_45__ {scalar_t__ er_magic; } ;
struct TYPE_44__ {int retval; int rettype; scalar_t__ retisnull; scalar_t__ retisset; int * err_text; int * err_stmt; int datum_context; scalar_t__* datums; TYPE_3__* trigdata; } ;
struct TYPE_43__ {size_t new_varno; size_t old_varno; scalar_t__ action; } ;
struct TYPE_42__ {int erh; } ;
struct TYPE_40__ {scalar_t__ attgenerated; } ;
struct TYPE_39__ {int natts; TYPE_1__* constr; } ;
struct TYPE_38__ {scalar_t__ has_generated_stored; } ;
struct TYPE_37__ {int (* func_end ) (TYPE_6__*,TYPE_5__*) ;int (* func_beg ) (TYPE_6__*,TYPE_5__*) ;} ;
typedef int PLpgSQL_stmt ;
typedef TYPE_4__ PLpgSQL_rec ;
typedef TYPE_5__ PLpgSQL_function ;
typedef TYPE_6__ PLpgSQL_execstate ;
typedef int HeapTupleData ;
typedef int * HeapTuple ;
typedef TYPE_7__ ExpandedRecordHeader ;
typedef TYPE_8__ ErrorContextCallback ;
typedef int Datum ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 TYPE_32__* FUNC_12 (TYPE_2__*,int) ;
 scalar_t__ FUNC_13 (int ) ;
 int * FUNC_14 (TYPE_2__*,TYPE_2__*,void*) ;
 int FUNC_15 (TYPE_6__*,TYPE_5__*) ;
 TYPE_2__* FUNC_16 (int ,int *) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char*) ;
 TYPE_8__* VAR_6 ;
 int FUNC_21 (TYPE_6__*) ;
 int FUNC_22 (TYPE_6__*,int) ;
 int FUNC_23 (TYPE_6__*,int *) ;
 int * FUNC_24 (int *,int *) ;
 TYPE_2__* FUNC_25 (TYPE_7__*) ;
 int * FUNC_26 (TYPE_7__*) ;
 int FUNC_27 (int ,int,int ,int,int,int) ;
 int FUNC_28 (int ,int *,int,int) ;
 void* FUNC_29 (char*) ;
 int FUNC_30 (int ,int ) ;
 int FUNC_31 (TYPE_2__*,int ) ;
 int FUNC_32 (TYPE_6__*) ;
 int FUNC_33 (TYPE_6__*,TYPE_5__*,int *,int *) ;
 int VAR_7 ;
 TYPE_13__** VAR_8 ;
 int FUNC_34 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_35 (TYPE_6__*,TYPE_5__*) ;
 int * FUNC_36 (int ) ;

HeapTuple
FUNC_37(PLpgSQL_function *VAR_9,
      TriggerData *VAR_10)
{
 PLpgSQL_execstate VAR_11;
 ErrorContextCallback VAR_12;
 int VAR_13;
 TupleDesc VAR_14;
 PLpgSQL_rec *VAR_15,
      *VAR_16;
 HeapTuple VAR_17;




 FUNC_33(&VAR_11, VAR_9, ((void*)0), ((void*)0));
 VAR_11.trigdata = VAR_10;




 VAR_12.callback = VAR_7;
 VAR_12.arg = &VAR_11;
 VAR_12.previous = VAR_6;
 VAR_6 = &VAR_12;




 VAR_11.err_text = FUNC_29("during initialization of execution state");
 FUNC_15(&VAR_11, VAR_9);
 VAR_14 = FUNC_3(VAR_10->tg_relation);

 VAR_15 = (PLpgSQL_rec *) (VAR_11.datums[VAR_9->new_varno]);
 VAR_16 = (PLpgSQL_rec *) (VAR_11.datums[VAR_9->old_varno]);

 VAR_15->erh = FUNC_31(VAR_14,
              VAR_11.datum_context);
 VAR_16->erh = FUNC_30(VAR_15->erh,
                VAR_11.datum_context);

 if (!FUNC_11(VAR_10->tg_event))
 {



 }
 else if (FUNC_9(VAR_10->tg_event))
 {
  FUNC_28(VAR_15->erh, VAR_10->tg_trigtuple,
          0, 0);
 }
 else if (FUNC_10(VAR_10->tg_event))
 {
  FUNC_28(VAR_15->erh, VAR_10->tg_newtuple,
          0, 0);
  FUNC_28(VAR_16->erh, VAR_10->tg_trigtuple,
          0, 0);
  if (VAR_14->constr && VAR_14->constr->has_generated_stored &&
   FUNC_7(VAR_10->tg_event))
  {
   for (int VAR_18 = 0; VAR_18 < VAR_14->natts; VAR_18++)
    if (FUNC_12(VAR_14, VAR_18)->attgenerated == VAR_0)
     FUNC_27(VAR_15->erh,
                VAR_18 + 1,
                (Datum) 0,
                1,
                0, 0);
  }
 }
 else if (FUNC_8(VAR_10->tg_event))
 {
  FUNC_28(VAR_16->erh, VAR_10->tg_trigtuple,
          0, 0);
 }
 else
  FUNC_17(VAR_3, "unrecognized trigger action: not INSERT, DELETE, or UPDATE");


 VAR_13 = FUNC_6(VAR_10);
 FUNC_0(VAR_13 >= 0);

 VAR_11.err_text = FUNC_29("during function entry");




 FUNC_22(&VAR_11, 0);




 if (*VAR_8 && (*VAR_8)->func_beg)
  ((*VAR_8)->func_beg) (&VAR_11, VAR_9);




 VAR_11.err_text = ((void*)0);
 VAR_11.err_stmt = (PLpgSQL_stmt *) (VAR_9->action);
 VAR_13 = FUNC_23(&VAR_11, (PLpgSQL_stmt *) VAR_9->action);
 if (VAR_13 != VAR_5)
 {
  VAR_11.err_stmt = ((void*)0);
  VAR_11.err_text = ((void*)0);
  FUNC_18(VAR_3,
    (FUNC_19(VAR_2),
     FUNC_20("control reached end of trigger procedure without RETURN")));
 }

 VAR_11.err_stmt = ((void*)0);
 VAR_11.err_text = FUNC_29("during function exit");

 if (VAR_11.retisset)
  FUNC_18(VAR_3,
    (FUNC_19(VAR_1),
     FUNC_20("trigger procedure cannot return a set")));
 if (VAR_11.retisnull || !FUNC_11(VAR_10->tg_event))
  VAR_17 = ((void*)0);
 else
 {
  TupleDesc VAR_19;
  TupleConversionMap *VAR_20;


  FUNC_0(*FUNC_36(VAR_11.rettype));


  if (FUNC_13(FUNC_2(VAR_11.retval)))
  {
   ExpandedRecordHeader *VAR_21 = (ExpandedRecordHeader *) FUNC_1(VAR_11.retval);

   FUNC_0(VAR_21->er_magic == VAR_4);


   VAR_17 = FUNC_26(VAR_21);
   FUNC_0(*VAR_17);
   VAR_19 = FUNC_25(VAR_21);

   if (VAR_19 != FUNC_3(VAR_10->tg_relation))
   {

    VAR_20 = FUNC_14(VAR_19,
             FUNC_3(VAR_10->tg_relation),
             FUNC_29("returned row structure does not match the structure of the triggering table"));

    if (VAR_20)
     VAR_17 = FUNC_24(VAR_17, VAR_20);

   }







   if (VAR_17 != VAR_10->tg_newtuple &&
    VAR_17 != VAR_10->tg_trigtuple)
    VAR_17 = FUNC_5(VAR_17);
  }
  else
  {

   HeapTupleData VAR_22;

   VAR_19 = FUNC_16(VAR_11.retval, &VAR_22);
   VAR_17 = &VAR_22;


   VAR_20 = FUNC_14(VAR_19,
            FUNC_3(VAR_10->tg_relation),
            FUNC_29("returned row structure does not match the structure of the triggering table"));

   if (VAR_20)
    VAR_17 = FUNC_24(VAR_17, VAR_20);

   FUNC_4(VAR_19);



   VAR_17 = FUNC_5(VAR_17);
  }
 }




 if (*VAR_8 && (*VAR_8)->func_end)
  ((*VAR_8)->func_end) (&VAR_11, VAR_9);


 FUNC_32(&VAR_11);
 FUNC_21(&VAR_11);





 VAR_6 = VAR_12.previous;




 return VAR_17;
}
