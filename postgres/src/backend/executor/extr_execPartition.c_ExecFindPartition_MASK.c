
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_38__ {int * ecxt_scantuple; } ;
struct TYPE_31__ {int state; } ;
struct TYPE_37__ {TYPE_1__ ps; } ;
struct TYPE_36__ {scalar_t__ nparts; int * oids; scalar_t__* is_leaf; } ;
struct TYPE_35__ {size_t* indexes; int * tupslot; TYPE_6__* partdesc; int reldesc; int * tupmap; } ;
struct TYPE_34__ {size_t num_partitions; size_t num_dispatch; scalar_t__ subplan_resultrel_htab; TYPE_3__** partitions; TYPE_5__** partition_dispatch_info; } ;
struct TYPE_33__ {scalar_t__ ri_PartitionCheck; } ;
struct TYPE_32__ {TYPE_3__* rri; } ;
typedef TYPE_2__ SubplanResultRelHashElem ;
typedef TYPE_3__ ResultRelInfo ;
typedef int Relation ;
typedef TYPE_4__ PartitionTupleRouting ;
typedef TYPE_5__* PartitionDispatch ;
typedef TYPE_6__* PartitionDesc ;
typedef int Oid ;
typedef TYPE_7__ ModifyTableState ;
typedef int MemoryContext ;
typedef TYPE_8__ ExprContext ;
typedef int EState ;
typedef int Datum ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_3 (int ,int *,int*,int) ;
 int FUNC_4 (int *) ;
 TYPE_5__* FUNC_5 (int ,TYPE_4__*,int ,TYPE_5__*,int) ;
 TYPE_3__* FUNC_6 (TYPE_7__*,int *,TYPE_4__*,TYPE_5__*,TYPE_3__*,int) ;
 int FUNC_7 (TYPE_7__*,int *,TYPE_4__*,TYPE_5__*,TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*,int *,int *,int) ;
 int FUNC_9 (TYPE_5__*,int *,int *,int *,int*) ;
 TYPE_8__* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_3 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_4 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,int ) ;
 int * FUNC_20 (int *,int *,int *) ;
 int FUNC_21 (TYPE_5__*,int *,int*) ;
 TYPE_2__* FUNC_22 (scalar_t__,int *,int ,int *) ;
 scalar_t__ FUNC_23 (int) ;

ResultRelInfo *
FUNC_24(ModifyTableState *VAR_5,
      ResultRelInfo *VAR_6,
      PartitionTupleRouting *VAR_7,
      TupleTableSlot *VAR_8, EState *VAR_9)
{
 PartitionDispatch *VAR_10 = VAR_7->partition_dispatch_info;
 Datum VAR_11[VAR_4];
 bool VAR_12[VAR_4];
 Relation VAR_13;
 PartitionDispatch VAR_14;
 PartitionDesc VAR_15;
 ExprContext *VAR_16 = FUNC_10(VAR_9);
 TupleTableSlot *VAR_17 = VAR_16->ecxt_scantuple;
 TupleTableSlot *VAR_18 = ((void*)0);
 MemoryContext VAR_19;


 VAR_19 = FUNC_12(FUNC_11(VAR_9));





 if (VAR_6->ri_PartitionCheck)
  FUNC_8(VAR_6, VAR_8, VAR_9, 1);


 VAR_14 = VAR_10[0];
 while (1)
 {
  AttrNumber *VAR_20 = VAR_14->tupmap;
  int VAR_21 = -1;

  FUNC_1();

  VAR_13 = VAR_14->reldesc;
  VAR_15 = VAR_14->partdesc;





  VAR_18 = VAR_14->tupslot;
  if (VAR_18 != ((void*)0))
  {
   FUNC_0(VAR_20 != ((void*)0));
   VAR_8 = FUNC_20(VAR_20, VAR_8, VAR_18);
  }
  VAR_16->ecxt_scantuple = VAR_8;
  FUNC_9(VAR_14, VAR_8, VAR_9, VAR_11, VAR_12);





  if (VAR_15->nparts == 0 ||
   (VAR_21 = FUNC_21(VAR_14, VAR_11, VAR_12)) < 0)
  {
   char *VAR_22;

   VAR_22 = FUNC_3(VAR_13,
               VAR_11, VAR_12, 64);
   FUNC_0(FUNC_13(FUNC_15(VAR_13)));
   FUNC_16(VAR_2,
     (FUNC_17(VAR_1),
      FUNC_19("no partition of relation \"%s\" found for row",
       FUNC_14(VAR_13)),
      VAR_22 ?
      FUNC_18("Partition key of the failing row contains %s.",
          VAR_22) : 0));
  }

  if (VAR_15->is_leaf[VAR_21])
  {
   ResultRelInfo *VAR_23;





   if (FUNC_23(VAR_14->indexes[VAR_21] >= 0))
   {

    FUNC_0(VAR_14->indexes[VAR_21] < VAR_7->num_partitions);
    VAR_23 = VAR_7->partitions[VAR_14->indexes[VAR_21]];
   }
   else
   {
    bool VAR_24 = 0;






    if (VAR_7->subplan_resultrel_htab)
    {
     Oid VAR_25 = VAR_15->oids[VAR_21];
     SubplanResultRelHashElem *VAR_26;

     VAR_26 = FUNC_22(VAR_7->subplan_resultrel_htab,
            &VAR_25, VAR_3, ((void*)0));
     if (VAR_26)
     {
      VAR_24 = 1;
      VAR_23 = VAR_26->rri;


      FUNC_2(VAR_23, VAR_0);


      FUNC_7(VAR_5, VAR_9, VAR_7, VAR_14,
           VAR_23, VAR_21);
     }
    }


    if (!VAR_24)
     VAR_23 = FUNC_6(VAR_5, VAR_9, VAR_7,
            VAR_14,
            VAR_6, VAR_21);
   }


   if (VAR_8 == VAR_18)
    FUNC_4(VAR_18);

   FUNC_12(VAR_19);
   VAR_16->ecxt_scantuple = VAR_17;
   return VAR_23;
  }
  else
  {



   if (FUNC_23(VAR_14->indexes[VAR_21] >= 0))
   {

    FUNC_0(VAR_14->indexes[VAR_21] < VAR_7->num_dispatch);





    VAR_14 = VAR_10[VAR_14->indexes[VAR_21]];
   }
   else
   {

    PartitionDispatch VAR_27;





    VAR_27 = FUNC_5(VAR_5->ps.state,
               VAR_7,
               VAR_15->oids[VAR_21],
               VAR_14, VAR_21);
    FUNC_0(VAR_14->indexes[VAR_21] >= 0 &&
        VAR_14->indexes[VAR_21] < VAR_7->num_dispatch);
    VAR_14 = VAR_27;
   }
  }
 }
}
