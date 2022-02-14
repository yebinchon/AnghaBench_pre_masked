
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct record_opts {scalar_t__ sample_user_regs; int branch_stack; scalar_t__ user_callchains; scalar_t__ kernel_callchains; } ;
struct perf_event_attr {int exclude_callchain_user; int exclude_callchain_kernel; int branch_sample_type; int sample_stack_user; int sample_regs_user; scalar_t__ exclude_user; int sample_max_stack; } ;
struct TYPE_2__ {struct perf_event_attr attr; } ;
struct evsel {TYPE_1__ core; } ;
struct callchain_param {scalar_t__ record_mode; int dump_size; int max_stack; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct evsel*) ;
 int FUNC_1 (struct evsel*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct evsel *VAR_12,
        struct record_opts *VAR_13,
        struct callchain_param *VAR_14)
{
 bool VAR_15 = FUNC_0(VAR_12);
 struct perf_event_attr *VAR_16 = &VAR_12->core.attr;

 FUNC_1(VAR_12, VAR_1);

 VAR_16->sample_max_stack = VAR_14->max_stack;

 if (VAR_13->kernel_callchains)
  VAR_16->exclude_callchain_user = 1;
 if (VAR_13->user_callchains)
  VAR_16->exclude_callchain_kernel = 1;
 if (VAR_14->record_mode == VAR_3) {
  if (!VAR_13->branch_stack) {
   if (VAR_16->exclude_user) {
    FUNC_3("LBR callstack option is only available "
        "to get user callchain information. "
        "Falling back to framepointers.\n");
   } else {
    FUNC_1(VAR_12, VAR_0);
    VAR_16->branch_sample_type = VAR_9 |
       VAR_6 |
       VAR_7 |
       VAR_8;
   }
  } else
    FUNC_3("Cannot use LBR callstack with branch stack. "
        "Falling back to framepointers.\n");
 }

 if (VAR_14->record_mode == VAR_2) {
  if (!VAR_15) {
   FUNC_1(VAR_12, VAR_10);
   FUNC_1(VAR_12, VAR_11);
   if (VAR_13->sample_user_regs && VAR_4 != VAR_5) {
    VAR_16->sample_regs_user |= VAR_4;
    FUNC_3("WARNING: The use of --call-graph=dwarf may require all the user registers, "
        "specifying a subset with --user-regs may render DWARF unwinding unreliable, "
        "so the minimal registers set (IP, SP) is explicitly forced.\n");
   } else {
    VAR_16->sample_regs_user |= VAR_5;
   }
   VAR_16->sample_stack_user = VAR_14->dump_size;
   VAR_16->exclude_callchain_user = 1;
  } else {
   FUNC_2("Cannot use DWARF unwind for function trace event,"
    " falling back to framepointers.\n");
  }
 }

 if (VAR_15) {
  FUNC_2("Disabling user space callchains for function trace event.\n");
  VAR_16->exclude_callchain_user = 1;
 }
}
