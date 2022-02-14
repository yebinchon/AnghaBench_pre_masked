
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_4__ {int xcnt_space; int includes_all_transactions; void* xip; scalar_t__ xcnt; } ;
struct TYPE_5__ {int building_full_snapshot; int start_decoding_at; int initial_xmin_horizon; TYPE_1__ committed; int * reorder; int context; int state; } ;
typedef TYPE_2__ SnapBuild ;
typedef int ReorderBuffer ;
typedef int MemoryContext ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 void* FUNC_2 (int) ;

SnapBuild *
FUNC_3(ReorderBuffer *VAR_3,
      TransactionId VAR_4,
      XLogRecPtr VAR_5,
      bool VAR_6)
{
 MemoryContext VAR_7;
 MemoryContext VAR_8;
 SnapBuild *VAR_9;


 VAR_7 = FUNC_0(VAR_1,
         "snapshot builder context",
         VAR_0);
 VAR_8 = FUNC_1(VAR_7);

 VAR_9 = FUNC_2(sizeof(SnapBuild));

 VAR_9->state = VAR_2;
 VAR_9->context = VAR_7;
 VAR_9->reorder = VAR_3;


 VAR_9->committed.xcnt = 0;
 VAR_9->committed.xcnt_space = 128;
 VAR_9->committed.xip =
  FUNC_2(VAR_9->committed.xcnt_space * sizeof(TransactionId));
 VAR_9->committed.includes_all_transactions = 1;

 VAR_9->initial_xmin_horizon = VAR_4;
 VAR_9->start_decoding_at = VAR_5;
 VAR_9->building_full_snapshot = VAR_6;

 FUNC_1(VAR_8);

 return VAR_9;
}
