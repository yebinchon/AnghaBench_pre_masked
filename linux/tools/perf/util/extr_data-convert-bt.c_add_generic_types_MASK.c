
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int sample_type; } ;
struct TYPE_5__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
struct TYPE_6__ {int u64_hex; int u32; int u64; int s32; } ;
struct ctf_writer {TYPE_3__ data; } ;
struct bt_ctf_event_class {int dummy; } ;


 int FUNC_0 (struct bt_ctf_event_class*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct ctf_writer *VAR_10, struct evsel *VAR_11,
        struct bt_ctf_event_class *VAR_12)
{
 u64 VAR_13 = VAR_11->core.attr.sample_type;
 if (VAR_13 & VAR_4)
  do { FUNC_0("  field '%s'\n", "perf_ip"); if (FUNC_0(VAR_12, VAR_10->data.u64_hex, "perf_ip")) { FUNC_0("Failed to add field '%s';\n", "perf_ip"); return -1; } } while (0);

 if (VAR_13 & VAR_7) {
  do { FUNC_0("  field '%s'\n", "perf_tid"); if (FUNC_0(VAR_12, VAR_10->data.s32, "perf_tid")) { FUNC_0("Failed to add field '%s';\n", "perf_tid"); return -1; } } while (0);
  do { FUNC_0("  field '%s'\n", "perf_pid"); if (FUNC_0(VAR_12, VAR_10->data.s32, "perf_pid")) { FUNC_0("Failed to add field '%s';\n", "perf_pid"); return -1; } } while (0);
 }

 if ((VAR_13 & VAR_2) ||
     (VAR_13 & VAR_3))
  do { FUNC_0("  field '%s'\n", "perf_id"); if (FUNC_0(VAR_12, VAR_10->data.u64, "perf_id")) { FUNC_0("Failed to add field '%s';\n", "perf_id"); return -1; } } while (0);

 if (VAR_13 & VAR_6)
  do { FUNC_0("  field '%s'\n", "perf_stream_id"); if (FUNC_0(VAR_12, VAR_10->data.u64, "perf_stream_id")) { FUNC_0("Failed to add field '%s';\n", "perf_stream_id"); return -1; } } while (0);

 if (VAR_13 & VAR_5)
  do { FUNC_0("  field '%s'\n", "perf_period"); if (FUNC_0(VAR_12, VAR_10->data.u64, "perf_period")) { FUNC_0("Failed to add field '%s';\n", "perf_period"); return -1; } } while (0);

 if (VAR_13 & VAR_9)
  do { FUNC_0("  field '%s'\n", "perf_weight"); if (FUNC_0(VAR_12, VAR_10->data.u64, "perf_weight")) { FUNC_0("Failed to add field '%s';\n", "perf_weight"); return -1; } } while (0);

 if (VAR_13 & VAR_1)
  do { FUNC_0("  field '%s'\n", "perf_data_src"); if (FUNC_0(VAR_12, VAR_10->data.u64, "perf_data_src")) { FUNC_0("Failed to add field '%s';\n", "perf_data_src"); return -1; } } while (0);

 if (VAR_13 & VAR_8)
  do { FUNC_0("  field '%s'\n", "perf_transaction"); if (FUNC_0(VAR_12, VAR_10->data.u64, "perf_transaction")) { FUNC_0("Failed to add field '%s';\n", "perf_transaction"); return -1; } } while (0);

 if (VAR_13 & VAR_0) {
  do { FUNC_0("  field '%s'\n", "perf_callchain_size"); if (FUNC_0(VAR_12, VAR_10->data.u32, "perf_callchain_size")) { FUNC_0("Failed to add field '%s';\n", "perf_callchain_size"); return -1; } } while (0);
  do { FUNC_0("  field '%s'\n", "perf_callchain"); if (FUNC_0(VAR_12, FUNC_1( VAR_10->data.u64_hex, "perf_callchain_size"), "perf_callchain")) { FUNC_0("Failed to add field '%s';\n", "perf_callchain"); return -1; } } while (0);



 }


 return 0;
}
