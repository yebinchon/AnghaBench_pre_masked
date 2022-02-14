
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ dbId; int prefix_size; int message; int message_size; scalar_t__ transactional; } ;
typedef TYPE_3__ xl_logical_message ;
typedef scalar_t__ uint8 ;
struct TYPE_12__ {int endptr; int origptr; int * record; } ;
typedef TYPE_4__ XLogRecordBuffer ;
typedef int XLogReaderState ;
typedef int TransactionId ;
struct TYPE_13__ {int reorder; TYPE_2__* slot; scalar_t__ fast_forward; int * snapshot_builder; } ;
struct TYPE_9__ {scalar_t__ database; } ;
struct TYPE_10__ {TYPE_1__ data; } ;
typedef int Snapshot ;
typedef int SnapBuild ;
typedef int RepOriginId ;
typedef TYPE_5__ LogicalDecodingContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,scalar_t__,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_12(LogicalDecodingContext *VAR_5, XLogRecordBuffer *VAR_6)
{
 SnapBuild *VAR_7 = VAR_5->snapshot_builder;
 XLogReaderState *VAR_8 = VAR_6->record;
 TransactionId VAR_9 = FUNC_10(VAR_8);
 uint8 VAR_10 = FUNC_8(VAR_8) & ~VAR_4;
 RepOriginId VAR_11 = FUNC_9(VAR_8);
 Snapshot VAR_12;
 xl_logical_message *VAR_13;

 if (VAR_10 != VAR_3)
  FUNC_11(VAR_0, "unexpected RM_LOGICALMSG_ID record type: %u", VAR_10);

 FUNC_1(VAR_5->reorder, FUNC_10(VAR_8), VAR_6->origptr);





 if (FUNC_3(VAR_7) < VAR_2 ||
  VAR_5->fast_forward)
  return;

 VAR_13 = (xl_logical_message *) FUNC_7(VAR_8);

 if (VAR_13->dbId != VAR_5->slot->data.database ||
  FUNC_0(VAR_5, VAR_11))
  return;

 if (VAR_13->transactional &&
  !FUNC_5(VAR_7, VAR_9, VAR_6->origptr))
  return;
 else if (!VAR_13->transactional &&
    (FUNC_3(VAR_7) != VAR_1 ||
     FUNC_6(VAR_7, VAR_6->origptr)))
  return;

 VAR_12 = FUNC_4(VAR_7, VAR_9);
 FUNC_2(VAR_5->reorder, VAR_9, VAR_12, VAR_6->endptr,
         VAR_13->transactional,
         VAR_13->message,

         VAR_13->message_size,
         VAR_13->message + VAR_13->prefix_size);
}
