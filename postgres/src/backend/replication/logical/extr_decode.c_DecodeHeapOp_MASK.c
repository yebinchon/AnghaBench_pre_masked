
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_15__ {int origptr; int record; } ;
typedef TYPE_1__ XLogRecordBuffer ;
typedef int TransactionId ;
struct TYPE_16__ {int reorder; scalar_t__ fast_forward; int * snapshot_builder; } ;
typedef int SnapBuild ;
typedef TYPE_2__ LogicalDecodingContext ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int ) ;






 int VAR_2 ;


 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_13(LogicalDecodingContext *VAR_3, XLogRecordBuffer *VAR_4)
{
 uint8 VAR_5 = FUNC_10(VAR_4->record) & VAR_2;
 TransactionId VAR_6 = FUNC_11(VAR_4->record);
 SnapBuild *VAR_7 = VAR_3->snapshot_builder;

 FUNC_5(VAR_3->reorder, VAR_6, VAR_4->origptr);





 if (FUNC_7(VAR_7) < VAR_1 ||
  VAR_3->fast_forward)
  return;

 switch (VAR_5)
 {
  case 131:
   if (FUNC_8(VAR_7, VAR_6, VAR_4->origptr))
    FUNC_1(VAR_3, VAR_4);
   break;






  case 133:
  case 128:
   if (FUNC_8(VAR_7, VAR_6, VAR_4->origptr))
    FUNC_4(VAR_3, VAR_4);
   break;

  case 134:
   if (FUNC_8(VAR_7, VAR_6, VAR_4->origptr))
    FUNC_0(VAR_3, VAR_4);
   break;

  case 129:
   if (FUNC_8(VAR_7, VAR_6, VAR_4->origptr))
    FUNC_3(VAR_3, VAR_4);
   break;

  case 132:
   if (!FUNC_9(VAR_6))
    break;

   FUNC_8(VAR_7, VAR_6, VAR_4->origptr);
   FUNC_6(VAR_3->reorder, VAR_6, VAR_4->origptr);
   break;

  case 135:
   if (FUNC_8(VAR_7, VAR_6, VAR_4->origptr))
    FUNC_2(VAR_3, VAR_4);
   break;

  case 130:

   break;

  default:
   FUNC_12(VAR_0, "unexpected RM_HEAP_ID record type: %u", VAR_5);
   break;
 }
}
