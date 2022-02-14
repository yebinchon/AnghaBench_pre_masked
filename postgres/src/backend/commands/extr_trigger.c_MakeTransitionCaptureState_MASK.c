
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int trig_insert_new_table; int trig_update_old_table; int trig_update_new_table; int trig_delete_old_table; } ;
typedef TYPE_1__ TriggerDesc ;
struct TYPE_9__ {int tcs_delete_old_table; int tcs_update_old_table; int tcs_update_new_table; int tcs_insert_new_table; TYPE_3__* tcs_private; } ;
typedef TYPE_2__ TransitionCaptureState ;
struct TYPE_11__ {scalar_t__ query_depth; scalar_t__ maxquerydepth; } ;
struct TYPE_10__ {int * new_tuplestore; int * old_tuplestore; } ;
typedef int ResourceOwner ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int CmdType ;
typedef TYPE_3__ AfterTriggersTableData ;


 int FUNC_0 () ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 TYPE_4__ VAR_4 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int) ;
 void* FUNC_5 (int,int,int ) ;
 int VAR_5 ;

TransitionCaptureState *
FUNC_6(TriggerDesc *VAR_6, Oid VAR_7, CmdType VAR_8)
{
 TransitionCaptureState *VAR_9;
 bool VAR_10,
    VAR_11;
 AfterTriggersTableData *VAR_12;
 MemoryContext VAR_13;
 ResourceOwner VAR_14;

 if (VAR_6 == ((void*)0))
  return ((void*)0);


 switch (VAR_8)
 {
  case 129:
   VAR_10 = 0;
   VAR_11 = VAR_6->trig_insert_new_table;
   break;
  case 128:
   VAR_10 = VAR_6->trig_update_old_table;
   VAR_11 = VAR_6->trig_update_new_table;
   break;
  case 130:
   VAR_10 = VAR_6->trig_delete_old_table;
   VAR_11 = 0;
   break;
  default:
   FUNC_3(VAR_3, "unexpected CmdType: %d", (int) VAR_8);
   VAR_10 = VAR_11 = 0;
   break;
 }
 if (!VAR_10 && !VAR_11)
  return ((void*)0);


 if (VAR_4.query_depth < 0)
  FUNC_3(VAR_3, "MakeTransitionCaptureState() called outside of query");


 if (VAR_4.query_depth >= VAR_4.maxquerydepth)
  FUNC_0();
 VAR_12 = FUNC_1(VAR_7, VAR_8);


 VAR_13 = FUNC_2(VAR_0);
 VAR_14 = VAR_2;
 VAR_2 = VAR_1;

 if (VAR_10 && VAR_12->old_tuplestore == ((void*)0))
  VAR_12->old_tuplestore = FUNC_5(0, 0, VAR_5);
 if (VAR_11 && VAR_12->new_tuplestore == ((void*)0))
  VAR_12->new_tuplestore = FUNC_5(0, 0, VAR_5);

 VAR_2 = VAR_14;
 FUNC_2(VAR_13);


 VAR_9 = (TransitionCaptureState *) FUNC_4(sizeof(TransitionCaptureState));
 VAR_9->tcs_delete_old_table = VAR_6->trig_delete_old_table;
 VAR_9->tcs_update_old_table = VAR_6->trig_update_old_table;
 VAR_9->tcs_update_new_table = VAR_6->trig_update_new_table;
 VAR_9->tcs_insert_new_table = VAR_6->trig_insert_new_table;
 VAR_9->tcs_private = VAR_12;

 return VAR_9;
}
