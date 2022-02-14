
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int nsubxacts; int * subxacts; } ;
typedef TYPE_2__ xl_xact_parsed_abort ;
struct TYPE_10__ {TYPE_1__* record; } ;
typedef TYPE_3__ XLogRecordBuffer ;
typedef int TransactionId ;
struct TYPE_11__ {int reorder; } ;
struct TYPE_8__ {int EndRecPtr; } ;
typedef TYPE_4__ LogicalDecodingContext ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(LogicalDecodingContext *VAR_0, XLogRecordBuffer *VAR_1,
   xl_xact_parsed_abort *VAR_2, TransactionId VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->nsubxacts; VAR_4++)
 {
  FUNC_0(VAR_0->reorder, VAR_2->subxacts[VAR_4],
         VAR_1->record->EndRecPtr);
 }

 FUNC_0(VAR_0->reorder, VAR_3, VAR_1->record->EndRecPtr);
}
