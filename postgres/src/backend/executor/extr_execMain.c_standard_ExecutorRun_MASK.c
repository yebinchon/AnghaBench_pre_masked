
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_13__ {int (* rShutdown ) (TYPE_4__*) ;int (* rStartup ) (TYPE_4__*,scalar_t__,int ) ;} ;
struct TYPE_12__ {int es_top_eflags; scalar_t__ es_processed; int es_query_cxt; } ;
struct TYPE_11__ {scalar_t__ operation; int already_executed; scalar_t__ totaltime; TYPE_1__* plannedstmt; int planstate; int tupDesc; TYPE_4__* dest; TYPE_3__* estate; } ;
struct TYPE_10__ {int parallelModeNeeded; scalar_t__ hasReturning; } ;
typedef int ScanDirection ;
typedef TYPE_2__ QueryDesc ;
typedef int MemoryContext ;
typedef TYPE_3__ EState ;
typedef TYPE_4__ DestReceiver ;
typedef scalar_t__ CmdType ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,int ,scalar_t__,int,int ,int ,TYPE_4__*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_8 (TYPE_4__*) ;

void
FUNC_9(QueryDesc *VAR_3,
      ScanDirection VAR_4, uint64 VAR_5, bool VAR_6)
{
 EState *VAR_7;
 CmdType VAR_8;
 DestReceiver *VAR_9;
 bool VAR_10;
 MemoryContext VAR_11;


 FUNC_0(VAR_3 != ((void*)0));

 VAR_7 = VAR_3->estate;

 FUNC_0(VAR_7 != ((void*)0));
 FUNC_0(!(VAR_7->es_top_eflags & VAR_2));




 VAR_11 = FUNC_4(VAR_7->es_query_cxt);


 if (VAR_3->totaltime)
  FUNC_2(VAR_3->totaltime);




 VAR_8 = VAR_3->operation;
 VAR_9 = VAR_3->dest;




 VAR_7->es_processed = 0;

 VAR_10 = (VAR_8 == VAR_0 ||
      VAR_3->plannedstmt->hasReturning);

 if (VAR_10)
  VAR_9->rStartup(VAR_9, VAR_8, VAR_3->tupDesc);




 if (!FUNC_5(VAR_4))
 {
  if (VAR_6 && VAR_3->already_executed)
   FUNC_6(VAR_1, "can't re-execute query flagged for single execution");
  VAR_3->already_executed = 1;

  FUNC_1(VAR_7,
     VAR_3->planstate,
     VAR_3->plannedstmt->parallelModeNeeded,
     VAR_8,
     VAR_10,
     VAR_5,
     VAR_4,
     VAR_9,
     VAR_6);
 }




 if (VAR_10)
  VAR_9->rShutdown(VAR_9);

 if (VAR_3->totaltime)
  FUNC_3(VAR_3->totaltime, VAR_7->es_processed);

 FUNC_4(VAR_11);
}
