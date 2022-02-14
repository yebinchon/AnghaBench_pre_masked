
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_20__ {int xact_wrote_changes; int context; scalar_t__ skip_empty_xacts; } ;
typedef TYPE_5__ TestDecodingData ;
struct TYPE_23__ {int relname; scalar_t__ relrewrite; } ;
struct TYPE_22__ {int out; TYPE_5__* output_plugin_private; } ;
struct TYPE_18__ {TYPE_2__* oldtuple; TYPE_1__* newtuple; } ;
struct TYPE_19__ {TYPE_3__ tp; } ;
struct TYPE_21__ {int action; TYPE_4__ data; } ;
struct TYPE_17__ {int tuple; } ;
struct TYPE_16__ {int tuple; } ;
typedef int ReorderBufferTXN ;
typedef TYPE_6__ ReorderBufferChange ;
typedef int Relation ;
typedef int MemoryContext ;
typedef TYPE_7__ LogicalDecodingContext ;
typedef TYPE_8__* Form_pg_class ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_7__*,int) ;
 int FUNC_5 (TYPE_7__*,int) ;



 int FUNC_6 (int ) ;
 TYPE_8__* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_7__*,TYPE_5__*,int *,int) ;
 char* FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ,int *,int) ;

__attribute__((used)) static void
FUNC_17(LogicalDecodingContext *VAR_0, ReorderBufferTXN *VAR_1,
     Relation VAR_2, ReorderBufferChange *VAR_3)
{
 TestDecodingData *VAR_4;
 Form_pg_class VAR_5;
 TupleDesc VAR_6;
 MemoryContext VAR_7;

 VAR_4 = VAR_0->output_plugin_private;


 if (VAR_4->skip_empty_xacts && !VAR_4->xact_wrote_changes)
 {
  FUNC_14(VAR_0, VAR_4, VAR_1, 0);
 }
 VAR_4->xact_wrote_changes = 1;

 VAR_5 = FUNC_7(VAR_2);
 VAR_6 = FUNC_6(VAR_2);


 VAR_7 = FUNC_2(VAR_4->context);

 FUNC_4(VAR_0, 1);

 FUNC_10(VAR_0->out, "table ");
 FUNC_10(VAR_0->out,
         FUNC_15(
               FUNC_11(
                   FUNC_13(FUNC_8(VAR_2))),
               VAR_5->relrewrite ?
               FUNC_12(VAR_5->relrewrite) :
               FUNC_3(VAR_5->relname)));
 FUNC_9(VAR_0->out, ':');

 switch (VAR_3->action)
 {
  case 129:
   FUNC_10(VAR_0->out, " INSERT:");
   if (VAR_3->data.tp.newtuple == ((void*)0))
    FUNC_10(VAR_0->out, " (no-tuple-data)");
   else
    FUNC_16(VAR_0->out, VAR_6,
         &VAR_3->data.tp.newtuple->tuple,
         0);
   break;
  case 128:
   FUNC_10(VAR_0->out, " UPDATE:");
   if (VAR_3->data.tp.oldtuple != ((void*)0))
   {
    FUNC_10(VAR_0->out, " old-key:");
    FUNC_16(VAR_0->out, VAR_6,
         &VAR_3->data.tp.oldtuple->tuple,
         1);
    FUNC_10(VAR_0->out, " new-tuple:");
   }

   if (VAR_3->data.tp.newtuple == ((void*)0))
    FUNC_10(VAR_0->out, " (no-tuple-data)");
   else
    FUNC_16(VAR_0->out, VAR_6,
         &VAR_3->data.tp.newtuple->tuple,
         0);
   break;
  case 130:
   FUNC_10(VAR_0->out, " DELETE:");


   if (VAR_3->data.tp.oldtuple == ((void*)0))
    FUNC_10(VAR_0->out, " (no-tuple-data)");

   else
    FUNC_16(VAR_0->out, VAR_6,
         &VAR_3->data.tp.oldtuple->tuple,
         1);
   break;
  default:
   FUNC_0(0);
 }

 FUNC_2(VAR_7);
 FUNC_1(VAR_4->context);

 FUNC_5(VAR_0, 1);
}
