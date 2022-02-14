
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int TupleTableSlot ;
struct TYPE_8__ {int (* receiveSlot ) (int *,TYPE_2__*) ;} ;
struct TYPE_7__ {int es_use_parallel_mode; int es_top_eflags; int es_processed; int * es_junkFilter; int es_direction; } ;
typedef int ScanDirection ;
typedef int PlanState ;
typedef TYPE_1__ EState ;
typedef TYPE_2__ DestReceiver ;
typedef scalar_t__ CmdType ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8(EState *VAR_2,
   PlanState *VAR_3,
   bool VAR_4,
   CmdType VAR_5,
   bool VAR_6,
   uint64 VAR_7,
   ScanDirection VAR_8,
   DestReceiver *VAR_9,
   bool VAR_10)
{
 TupleTableSlot *VAR_11;
 uint64 VAR_12;




 VAR_12 = 0;




 VAR_2->es_direction = VAR_8;





 if (!VAR_10)
  VAR_4 = 0;

 VAR_2->es_use_parallel_mode = VAR_4;
 if (VAR_4)
  FUNC_0();




 for (;;)
 {

  FUNC_5(VAR_2);




  VAR_11 = FUNC_2(VAR_3);





  if (FUNC_6(VAR_11))
   break;
  if (VAR_2->es_junkFilter != ((void*)0))
   VAR_11 = FUNC_1(VAR_2->es_junkFilter, VAR_11);





  if (VAR_6)
  {





   if (!VAR_9->receiveSlot(VAR_11, VAR_9))
    break;
  }






  if (VAR_5 == VAR_0)
   (VAR_2->es_processed)++;






  VAR_12++;
  if (VAR_7 && VAR_7 == VAR_12)
   break;
 }





 if (!(VAR_2->es_top_eflags & VAR_1))
  (void) FUNC_3(VAR_3);

 if (VAR_4)
  FUNC_4();
}
