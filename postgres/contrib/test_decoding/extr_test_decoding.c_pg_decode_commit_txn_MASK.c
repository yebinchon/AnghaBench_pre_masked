
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_8__ {scalar_t__ include_timestamp; scalar_t__ include_xids; int xact_wrote_changes; scalar_t__ skip_empty_xacts; } ;
typedef TYPE_1__ TestDecodingData ;
struct TYPE_10__ {int out; TYPE_1__* output_plugin_private; } ;
struct TYPE_9__ {int commit_time; int xid; } ;
typedef TYPE_2__ ReorderBufferTXN ;
typedef TYPE_3__ LogicalDecodingContext ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(LogicalDecodingContext *VAR_0, ReorderBufferTXN *VAR_1,
      XLogRecPtr VAR_2)
{
 TestDecodingData *VAR_3 = VAR_0->output_plugin_private;

 if (VAR_3->skip_empty_xacts && !VAR_3->xact_wrote_changes)
  return;

 FUNC_0(VAR_0, 1);
 if (VAR_3->include_xids)
  FUNC_2(VAR_0->out, "COMMIT %u", VAR_1->xid);
 else
  FUNC_3(VAR_0->out, "COMMIT");

 if (VAR_3->include_timestamp)
  FUNC_2(VAR_0->out, " (at %s)",
       FUNC_4(VAR_1->commit_time));

 FUNC_1(VAR_0, 1);
}
