
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef int XLogPageReadCB ;
typedef void* TransactionId ;
struct TYPE_17__ {int receive_rewrites; } ;
struct TYPE_13__ {int * startup_cb; } ;
struct TYPE_16__ {TYPE_7__ options; TYPE_3__* reorder; TYPE_2__ callbacks; int context; } ;
struct TYPE_12__ {scalar_t__ database; void* catalog_xmin; int restart_lsn; int plugin; int name; } ;
struct TYPE_15__ {int mutex; void* effective_xmin; TYPE_1__ data; void* effective_catalog_xmin; } ;
struct TYPE_14__ {int output_rewrites; } ;
typedef TYPE_4__ ReplicationSlot ;
typedef int MemoryContext ;
typedef int LogicalOutputPluginWriterWrite ;
typedef int LogicalOutputPluginWriterUpdateProgress ;
typedef int LogicalOutputPluginWriterPrepareWrite ;
typedef TYPE_5__ LogicalDecodingContext ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;
 TYPE_4__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int VAR_9 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 TYPE_5__* FUNC_14 (int ,int ,void*,int,int,int ,int ,int ,int ) ;
 int FUNC_15 (int ,char*,int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 (TYPE_5__*,TYPE_7__*,int) ;

LogicalDecodingContext *
FUNC_22(char *VAR_10,
        List *VAR_11,
        bool VAR_12,
        XLogRecPtr VAR_13,
        XLogPageReadCB VAR_14,
        LogicalOutputPluginWriterPrepareWrite VAR_15,
        LogicalOutputPluginWriterWrite VAR_16,
        LogicalOutputPluginWriterUpdateProgress VAR_17)
{
 TransactionId VAR_18 = VAR_3;
 ReplicationSlot *VAR_19;
 LogicalDecodingContext *VAR_20;
 MemoryContext VAR_21;


 VAR_19 = VAR_6;


 if (VAR_19 == ((void*)0))
  FUNC_17(VAR_2, "cannot perform logical decoding without an acquired slot");

 if (VAR_10 == ((void*)0))
  FUNC_17(VAR_2, "cannot initialize logical decoding without a specified plugin");


 if (FUNC_11(VAR_19))
  FUNC_18(VAR_2,
    (FUNC_19(VAR_1),
     FUNC_20("cannot use physical replication slot for logical decoding")));

 if (VAR_19->data.database != VAR_5)
  FUNC_18(VAR_2,
    (FUNC_19(VAR_1),
     FUNC_20("replication slot \"%s\" was not created in this database",
      FUNC_6(VAR_19->data.name))));

 if (FUNC_2() &&
  FUNC_1() != VAR_3)
  FUNC_18(VAR_2,
    (FUNC_19(VAR_0),
     FUNC_20("cannot create logical replication slot in transaction that has performed writes")));


 FUNC_12(&VAR_19->mutex);
 FUNC_15(FUNC_6(VAR_19->data.plugin), VAR_10, VAR_7);
 FUNC_13(&VAR_19->mutex);

 if (FUNC_16(VAR_13))
  FUNC_8();
 else
 {
  FUNC_12(&VAR_19->mutex);
  VAR_19->data.restart_lsn = VAR_13;
  FUNC_13(&VAR_19->mutex);
 }
 FUNC_3(VAR_9, VAR_4);

 VAR_18 = FUNC_0(!VAR_12);

 FUNC_12(&VAR_19->mutex);
 VAR_19->effective_catalog_xmin = VAR_18;
 VAR_19->data.catalog_xmin = VAR_18;
 if (VAR_12)
  VAR_19->effective_xmin = VAR_18;
 FUNC_13(&VAR_19->mutex);

 FUNC_10(1);

 FUNC_4(VAR_9);

 FUNC_7();
 FUNC_9();

 VAR_20 = FUNC_14(VAR_8, VAR_13, VAR_18,
         VAR_12, 0,
         VAR_14, VAR_15, VAR_16,
         VAR_17);


 VAR_21 = FUNC_5(VAR_20->context);
 if (VAR_20->callbacks.startup_cb != ((void*)0))
  FUNC_21(VAR_20, &VAR_20->options, 1);
 FUNC_5(VAR_21);

 VAR_20->reorder->output_rewrites = VAR_20->options.receive_rewrites;

 return VAR_20;
}
