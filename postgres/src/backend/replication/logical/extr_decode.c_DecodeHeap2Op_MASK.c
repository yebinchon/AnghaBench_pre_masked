
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xl_heap_new_cid ;
typedef int uint8 ;
struct TYPE_7__ {int origptr; int record; } ;
typedef TYPE_1__ XLogRecordBuffer ;
typedef int TransactionId ;
struct TYPE_8__ {scalar_t__ fast_forward; int reorder; int * snapshot_builder; } ;
typedef int SnapBuild ;
typedef TYPE_2__ LogicalDecodingContext ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_9(LogicalDecodingContext *VAR_3, XLogRecordBuffer *VAR_4)
{
 uint8 VAR_5 = FUNC_6(VAR_4->record) & VAR_2;
 TransactionId VAR_6 = FUNC_7(VAR_4->record);
 SnapBuild *VAR_7 = VAR_3->snapshot_builder;

 FUNC_1(VAR_3->reorder, VAR_6, VAR_4->origptr);





 if (FUNC_2(VAR_7) < VAR_1 ||
  VAR_3->fast_forward)
  return;

 switch (VAR_5)
 {
  case 131:
   if (!VAR_3->fast_forward &&
    FUNC_3(VAR_7, VAR_6, VAR_4->origptr))
    FUNC_0(VAR_3, VAR_4);
   break;
  case 130:
   {
    xl_heap_new_cid *VAR_8;

    VAR_8 = (xl_heap_new_cid *) FUNC_5(VAR_4->record);
    FUNC_4(VAR_7, VAR_6, VAR_4->origptr, VAR_8);

    break;
   }
  case 129:






   break;





  case 133:
  case 135:
  case 134:
  case 128:
  case 132:
   break;
  default:
   FUNC_8(VAR_0, "unexpected RM_HEAP2_ID record type: %u", VAR_5);
 }
}
