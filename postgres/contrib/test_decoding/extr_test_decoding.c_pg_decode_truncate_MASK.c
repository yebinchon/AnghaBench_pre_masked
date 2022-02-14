
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int xact_wrote_changes; int context; scalar_t__ skip_empty_xacts; } ;
typedef TYPE_4__ TestDecodingData ;
struct TYPE_21__ {int out; TYPE_4__* output_plugin_private; } ;
struct TYPE_20__ {TYPE_1__* rd_rel; } ;
struct TYPE_16__ {scalar_t__ cascade; scalar_t__ restart_seqs; } ;
struct TYPE_17__ {TYPE_2__ truncate; } ;
struct TYPE_19__ {TYPE_3__ data; } ;
struct TYPE_15__ {int relname; int relnamespace; } ;
typedef int ReorderBufferTXN ;
typedef TYPE_5__ ReorderBufferChange ;
typedef TYPE_6__* Relation ;
typedef int MemoryContext ;
typedef TYPE_7__ LogicalDecodingContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_7__*,int) ;
 int FUNC_4 (TYPE_7__*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_7__*,TYPE_4__*,int *,int) ;
 char* FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9(LogicalDecodingContext *VAR_0, ReorderBufferTXN *VAR_1,
       int VAR_2, Relation VAR_3[], ReorderBufferChange *VAR_4)
{
 TestDecodingData *VAR_5;
 MemoryContext VAR_6;
 int VAR_7;

 VAR_5 = VAR_0->output_plugin_private;


 if (VAR_5->skip_empty_xacts && !VAR_5->xact_wrote_changes)
 {
  FUNC_7(VAR_0, VAR_5, VAR_1, 0);
 }
 VAR_5->xact_wrote_changes = 1;


 VAR_6 = FUNC_1(VAR_5->context);

 FUNC_3(VAR_0, 1);

 FUNC_5(VAR_0->out, "table ");

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
 {
  if (VAR_7 > 0)
   FUNC_5(VAR_0->out, ", ");

  FUNC_5(VAR_0->out,
          FUNC_8(FUNC_6(VAR_3[VAR_7]->rd_rel->relnamespace),
                FUNC_2(VAR_3[VAR_7]->rd_rel->relname)));
 }

 FUNC_5(VAR_0->out, ": TRUNCATE:");

 if (VAR_4->data.truncate.restart_seqs
  || VAR_4->data.truncate.cascade)
 {
  if (VAR_4->data.truncate.restart_seqs)
   FUNC_5(VAR_0->out, " restart_seqs");
  if (VAR_4->data.truncate.cascade)
   FUNC_5(VAR_0->out, " cascade");
 }
 else
  FUNC_5(VAR_0->out, " (no-flags)");

 FUNC_1(VAR_6);
 FUNC_0(VAR_5->context);

 FUNC_4(VAR_0, 1);
}
