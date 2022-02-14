
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_17__ ;


typedef int hashkey ;
typedef TYPE_4__* UnresolvedTup ;
struct TYPE_31__ {void* tid; int xmin; } ;
typedef TYPE_5__ TidHashKey ;
struct TYPE_34__ {TYPE_17__* t_data; void* t_self; } ;
struct TYPE_33__ {void* new_tid; } ;
struct TYPE_32__ {int rs_old_new_tid_map; int rs_unresolved_tups; int rs_oldest_xmin; int rs_cutoff_multi; int rs_freeze_xid; TYPE_3__* rs_old_rel; int rs_cxt; } ;
struct TYPE_30__ {void* old_tid; TYPE_8__* tuple; } ;
struct TYPE_29__ {TYPE_2__* rd_rel; } ;
struct TYPE_28__ {int relminmxid; int relfrozenxid; } ;
struct TYPE_27__ {int t_heap; } ;
struct TYPE_26__ {int t_infomask; void* t_ctid; int t_infomask2; TYPE_1__ t_choice; } ;
typedef TYPE_6__* RewriteState ;
typedef TYPE_7__* OldToNewMapping ;
typedef int MemoryContext ;
typedef void* ItemPointerData ;
typedef int HeapTupleFields ;
typedef TYPE_8__* HeapTuple ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_17__*) ;
 int FUNC_2 (TYPE_17__*) ;
 int FUNC_3 (TYPE_17__*) ;
 scalar_t__ FUNC_4 (TYPE_17__*) ;
 int FUNC_5 (void**,void**) ;
 int FUNC_6 (void**) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 void* FUNC_9 (int ,TYPE_5__*,int ,int*) ;
 TYPE_8__* FUNC_10 (TYPE_8__*) ;
 int FUNC_11 (TYPE_8__*) ;
 int FUNC_12 (TYPE_17__*,int ,int ,int ,int ) ;
 int FUNC_13 (TYPE_6__*,void*,TYPE_8__*) ;
 int FUNC_14 (int *,int *,int) ;
 int FUNC_15 (TYPE_5__*,int ,int) ;
 int FUNC_16 (TYPE_6__*,TYPE_8__*) ;

void
FUNC_17(RewriteState VAR_7,
       HeapTuple VAR_8, HeapTuple VAR_9)
{
 MemoryContext VAR_10;
 ItemPointerData VAR_11;
 TidHashKey VAR_12;
 bool VAR_13;
 bool VAR_14;

 VAR_10 = FUNC_7(VAR_7->rs_cxt);







 FUNC_14(&VAR_9->t_data->t_choice.t_heap,
     &VAR_8->t_data->t_choice.t_heap,
     sizeof(HeapTupleFields));

 VAR_9->t_data->t_infomask &= ~VAR_5;
 VAR_9->t_data->t_infomask2 &= ~VAR_3;
 VAR_9->t_data->t_infomask |=
  VAR_8->t_data->t_infomask & VAR_5;





 FUNC_12(VAR_9->t_data,
       VAR_7->rs_old_rel->rd_rel->relfrozenxid,
       VAR_7->rs_old_rel->rd_rel->relminmxid,
       VAR_7->rs_freeze_xid,
       VAR_7->rs_cutoff_multi);





 FUNC_6(&VAR_9->t_data->t_ctid);




 if (!((VAR_8->t_data->t_infomask & VAR_6) ||
    FUNC_4(VAR_8->t_data)) &&
  !FUNC_3(VAR_8->t_data) &&
  !(FUNC_5(&(VAR_8->t_self),
       &(VAR_8->t_data->t_ctid))))
 {
  OldToNewMapping VAR_15;

  FUNC_15(&VAR_12, 0, sizeof(VAR_12));
  VAR_12.xmin = FUNC_1(VAR_8->t_data);
  VAR_12.tid = VAR_8->t_data->t_ctid;

  VAR_15 = (OldToNewMapping)
   FUNC_9(VAR_7->rs_old_new_tid_map, &VAR_12,
      VAR_1, ((void*)0));

  if (VAR_15 != ((void*)0))
  {





   VAR_9->t_data->t_ctid = VAR_15->new_tid;


   FUNC_9(VAR_7->rs_old_new_tid_map, &VAR_12,
      VAR_2, &VAR_13);
   FUNC_0(VAR_13);
  }
  else
  {




   UnresolvedTup VAR_16;

   VAR_16 = FUNC_9(VAR_7->rs_unresolved_tups, &VAR_12,
          VAR_0, &VAR_13);
   FUNC_0(!VAR_13);

   VAR_16->old_tid = VAR_8->t_self;
   VAR_16->tuple = FUNC_10(VAR_9);





   FUNC_7(VAR_10);
   return;
  }
 }







 VAR_11 = VAR_8->t_self;
 VAR_14 = 0;

 for (;;)
 {
  ItemPointerData VAR_17;


  FUNC_16(VAR_7, VAR_9);
  VAR_17 = VAR_9->t_self;

  FUNC_13(VAR_7, VAR_11, VAR_9);
  if ((VAR_9->t_data->t_infomask & VAR_4) &&
   !FUNC_8(FUNC_2(VAR_9->t_data),
           VAR_7->rs_oldest_xmin))
  {



   UnresolvedTup VAR_18;

   FUNC_15(&VAR_12, 0, sizeof(VAR_12));
   VAR_12.xmin = FUNC_2(VAR_9->t_data);
   VAR_12.tid = VAR_11;

   VAR_18 = FUNC_9(VAR_7->rs_unresolved_tups, &VAR_12,
          VAR_1, ((void*)0));

   if (VAR_18 != ((void*)0))
   {





    if (VAR_14)
     FUNC_11(VAR_9);
    VAR_9 = VAR_18->tuple;
    VAR_14 = 1;
    VAR_11 = VAR_18->old_tid;
    VAR_9->t_data->t_ctid = VAR_17;





    FUNC_9(VAR_7->rs_unresolved_tups, &VAR_12,
       VAR_2, &VAR_13);
    FUNC_0(VAR_13);


    continue;
   }
   else
   {




    OldToNewMapping VAR_19;

    VAR_19 = FUNC_9(VAR_7->rs_old_new_tid_map, &VAR_12,
           VAR_0, &VAR_13);
    FUNC_0(!VAR_13);

    VAR_19->new_tid = VAR_17;
   }
  }


  if (VAR_14)
   FUNC_11(VAR_9);
  break;
 }

 FUNC_7(VAR_10);
}
