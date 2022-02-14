
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int xinfo; scalar_t__ nmsgs; int nsubxacts; scalar_t__ dbId; int * subxacts; int msgs; int origin_timestamp; int origin_lsn; int xact_time; } ;
typedef TYPE_3__ xl_xact_parsed_commit ;
struct TYPE_13__ {int endptr; int origptr; int record; } ;
typedef TYPE_4__ XLogRecordBuffer ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
typedef int TimestampTz ;
struct TYPE_14__ {int reorder; scalar_t__ fast_forward; TYPE_2__* slot; int snapshot_builder; } ;
struct TYPE_10__ {scalar_t__ database; } ;
struct TYPE_11__ {TYPE_1__ data; } ;
typedef int RepOriginId ;
typedef TYPE_5__ LogicalDecodingContext ;


 scalar_t__ FUNC_0 (TYPE_5__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,scalar_t__,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int,int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int VAR_2 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(LogicalDecodingContext *VAR_3, XLogRecordBuffer *VAR_4,
    xl_xact_parsed_commit *VAR_5, TransactionId VAR_6)
{
 XLogRecPtr VAR_7 = VAR_1;
 TimestampTz VAR_8 = VAR_5->xact_time;
 RepOriginId VAR_9 = FUNC_8(VAR_4->record);
 int VAR_10;

 if (VAR_5->xinfo & VAR_2)
 {
  VAR_7 = VAR_5->origin_lsn;
  VAR_8 = VAR_5->origin_timestamp;
 }






 if (VAR_5->nmsgs > 0)
 {
  if (!VAR_3->fast_forward)
   FUNC_1(VAR_3->reorder, VAR_6, VAR_4->origptr,
            VAR_5->nmsgs, VAR_5->msgs);
  FUNC_5(VAR_3->reorder, VAR_6, VAR_4->origptr);
 }

 FUNC_6(VAR_3->snapshot_builder, VAR_4->origptr, VAR_6,
        VAR_5->nsubxacts, VAR_5->subxacts);
 if (FUNC_7(VAR_3->snapshot_builder, VAR_4->origptr) ||
  (VAR_5->dbId != VAR_0 && VAR_5->dbId != VAR_3->slot->data.database) ||
  VAR_3->fast_forward || FUNC_0(VAR_3, VAR_9))
 {
  for (VAR_10 = 0; VAR_10 < VAR_5->nsubxacts; VAR_10++)
  {
   FUNC_4(VAR_3->reorder, VAR_5->subxacts[VAR_10], VAR_4->origptr);
  }
  FUNC_4(VAR_3->reorder, VAR_6, VAR_4->origptr);

  return;
 }


 for (VAR_10 = 0; VAR_10 < VAR_5->nsubxacts; VAR_10++)
 {
  FUNC_3(VAR_3->reorder, VAR_6, VAR_5->subxacts[VAR_10],
         VAR_4->origptr, VAR_4->endptr);
 }


 FUNC_2(VAR_3->reorder, VAR_6, VAR_4->origptr, VAR_4->endptr,
      VAR_8, VAR_9, VAR_7);
}
