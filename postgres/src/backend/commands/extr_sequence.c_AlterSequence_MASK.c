
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_19__ ;


struct TYPE_30__ {int for_identity; int options; TYPE_19__* sequence; scalar_t__ missing_ok; } ;
struct TYPE_29__ {int t_self; } ;
struct TYPE_28__ {TYPE_1__* rd_rel; } ;
struct TYPE_27__ {int last; int cached; } ;
struct TYPE_26__ {scalar_t__ relfrozenxid; scalar_t__ relminmxid; int relpersistence; } ;
struct TYPE_25__ {int relname; } ;
typedef TYPE_2__* SeqTable ;
typedef TYPE_3__* Relation ;
typedef int ParseState ;
typedef scalar_t__ Oid ;
typedef int ObjectAddress ;
typedef int List ;
typedef int HeapTupleData ;
typedef TYPE_4__* HeapTuple ;
typedef scalar_t__ Form_pg_sequence_data ;
typedef scalar_t__ Form_pg_sequence ;
typedef int Buffer ;
typedef TYPE_5__ AlterSeqStmt ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int *,TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (TYPE_19__*,int ,int ,int ,int *) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int VAR_9 ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_4__* FUNC_11 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,scalar_t__) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (TYPE_3__*,TYPE_4__*) ;
 TYPE_4__* FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,int ,int,scalar_t__,scalar_t__,int*,int **) ;
 int FUNC_19 (scalar_t__,TYPE_2__**,TYPE_3__**) ;
 int FUNC_20 (TYPE_3__*,int *,int ) ;
 int FUNC_21 (TYPE_3__*,int *,int *) ;
 int FUNC_22 (TYPE_3__*,int ) ;
 int FUNC_23 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_24 (int ,int ) ;

ObjectAddress
FUNC_25(ParseState *VAR_14, AlterSeqStmt *VAR_15)
{
 Oid VAR_16;
 SeqTable VAR_17;
 Relation VAR_18;
 Buffer VAR_19;
 HeapTupleData VAR_20;
 Form_pg_sequence VAR_21;
 Form_pg_sequence_data VAR_22;
 bool VAR_23;
 List *VAR_24;
 ObjectAddress VAR_25;
 Relation VAR_26;
 HeapTuple VAR_27;
 HeapTuple VAR_28;


 VAR_16 = FUNC_8(VAR_15->sequence,
          VAR_13,
          VAR_15->missing_ok ? VAR_7 : 0,
          VAR_8,
          ((void*)0));
 if (VAR_16 == VAR_3)
 {
  FUNC_14(VAR_5,
    (FUNC_15("relation \"%s\" does not exist, skipping",
      VAR_15->sequence->relname)));
  return VAR_2;
 }

 FUNC_19(VAR_16, &VAR_17, &VAR_18);

 VAR_26 = FUNC_24(VAR_12, VAR_10);
 VAR_27 = FUNC_11(VAR_11,
           FUNC_7(VAR_16));
 if (!FUNC_4(VAR_27))
  FUNC_13(VAR_0, "cache lookup failed for sequence %u",
    VAR_16);

 VAR_21 = (Form_pg_sequence) FUNC_2(VAR_27);


 (void) FUNC_21(VAR_18, &VAR_19, &VAR_20);


 VAR_28 = FUNC_17(&VAR_20);
 VAR_22 = (Form_pg_sequence_data) FUNC_2(VAR_28);

 FUNC_12(VAR_19);


 FUNC_18(VAR_14, VAR_15->options, VAR_15->for_identity, 0,
    VAR_21, VAR_22,
    &VAR_23, &VAR_24);



 VAR_17->cached = VAR_17->last;


 if (VAR_23)
 {

  if (FUNC_9(VAR_18))
   FUNC_3();





  FUNC_10(VAR_18, VAR_18->rd_rel->relpersistence);






  FUNC_0(VAR_18->rd_rel->relfrozenxid == VAR_4);
  FUNC_0(VAR_18->rd_rel->relminmxid == VAR_1);




  FUNC_16(VAR_18, VAR_28);
 }


 if (VAR_24)
  FUNC_20(VAR_18, VAR_24, VAR_15->for_identity);


 FUNC_1(VAR_26, &VAR_27->t_self, VAR_27);

 FUNC_5(VAR_9, VAR_16, 0);

 FUNC_6(VAR_25, VAR_9, VAR_16);

 FUNC_23(VAR_26, VAR_10);
 FUNC_22(VAR_18, VAR_6);

 return VAR_25;
}
