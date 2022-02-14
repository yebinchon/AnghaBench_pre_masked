
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef int XLogPageReadCB ;
typedef int TransactionId ;
struct TYPE_15__ {int vacuumFlags; } ;
struct TYPE_14__ {int message; int commit; int apply_truncate; int apply_change; int begin; TYPE_3__* private_data; } ;
struct TYPE_13__ {int fast_forward; int * output_plugin_options; int update_progress; int write; int prepare_write; int out; TYPE_7__* reorder; int snapshot_builder; int reader; TYPE_2__* slot; int callbacks; int context; } ;
struct TYPE_11__ {int plugin; } ;
struct TYPE_12__ {TYPE_1__ data; } ;
typedef TYPE_2__ ReplicationSlot ;
typedef int MemoryContext ;
typedef int LogicalOutputPluginWriterWrite ;
typedef int LogicalOutputPluginWriterUpdateProgress ;
typedef int LogicalOutputPluginWriterPrepareWrite ;
typedef TYPE_3__ LogicalDecodingContext ;
typedef int List ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_7__*,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 TYPE_9__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_7__* FUNC_8 () ;
 int FUNC_9 (int ,int *,int ,TYPE_3__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int VAR_12 ;
 TYPE_3__* FUNC_14 (int) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static LogicalDecodingContext *
FUNC_15(List *VAR_15,
        XLogRecPtr VAR_16,
        TransactionId VAR_17,
        bool VAR_18,
        bool VAR_19,
        XLogPageReadCB VAR_20,
        LogicalOutputPluginWriterPrepareWrite VAR_21,
        LogicalOutputPluginWriterWrite VAR_22,
        LogicalOutputPluginWriterUpdateProgress VAR_23)
{
 ReplicationSlot *VAR_24;
 MemoryContext VAR_25,
    VAR_26;
 LogicalDecodingContext *VAR_27;


 VAR_24 = VAR_6;

 VAR_25 = FUNC_0(VAR_1,
         "Logical decoding context",
         VAR_0);
 VAR_26 = FUNC_6(VAR_25);
 VAR_27 = FUNC_14(sizeof(LogicalDecodingContext));

 VAR_27->context = VAR_25;





 if (!VAR_19)
  FUNC_5(&VAR_27->callbacks, FUNC_7(VAR_24->data.plugin));
 if (!FUNC_2())
 {
  FUNC_3(VAR_8, VAR_4);
  VAR_5->vacuumFlags |= VAR_7;
  FUNC_4(VAR_8);
 }

 VAR_27->slot = VAR_24;

 VAR_27->reader = FUNC_9(VAR_14, ((void*)0), VAR_20, VAR_27);
 if (!VAR_27->reader)
  FUNC_10(VAR_3,
    (FUNC_11(VAR_2),
     FUNC_12("out of memory")));

 VAR_27->reorder = FUNC_8();
 VAR_27->snapshot_builder =
  FUNC_1(VAR_27->reorder, VAR_17, VAR_16,
        VAR_18);

 VAR_27->reorder->private_data = VAR_27;


 VAR_27->reorder->begin = VAR_9;
 VAR_27->reorder->apply_change = VAR_10;
 VAR_27->reorder->apply_truncate = VAR_13;
 VAR_27->reorder->commit = VAR_11;
 VAR_27->reorder->message = VAR_12;

 VAR_27->out = FUNC_13();
 VAR_27->prepare_write = VAR_21;
 VAR_27->write = VAR_22;
 VAR_27->update_progress = VAR_23;

 VAR_27->output_plugin_options = VAR_15;

 VAR_27->fast_forward = VAR_19;

 FUNC_6(VAR_26);

 return VAR_27;
}
