
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct perf_session {struct evlist* evlist; } ;
struct perf_event_attr {int size; int sample_type; int sample_period; void* config; int type; int read_format; int sample_id_all; int exclude_guest; int exclude_host; int exclude_hv; int exclude_kernel; int exclude_user; } ;
struct TYPE_6__ {scalar_t__ period_type; int period; scalar_t__ pwr_events; scalar_t__ ptwrites; scalar_t__ transactions; scalar_t__ instructions; scalar_t__ last_branch; scalar_t__ callchain; scalar_t__ branches; } ;
struct intel_pt {int sample_branches; int branches_sample_type; int branches_id; int sample_instructions; int instructions_sample_type; int instructions_id; int sample_transactions; int transactions_sample_type; int transactions_id; int sample_ptwrites; int ptwrites_sample_type; int ptwrites_id; int sample_pwr_events; int pwr_events_sample_type; int cbr_id; int mwait_id; int pwre_id; int exstop_id; int pwrx_id; TYPE_3__ synth_opts; int per_cpu_mmaps; scalar_t__ timeless_decoding; } ;
struct TYPE_4__ {int sample_type; int config; int read_format; int sample_id_all; int exclude_guest; int exclude_host; int exclude_hv; int exclude_kernel; int exclude_user; } ;
struct TYPE_5__ {int* id; TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
struct evlist {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 struct evsel* FUNC_0 (struct intel_pt*,struct evlist*) ;
 int FUNC_1 (struct intel_pt*,int) ;
 int FUNC_2 (struct evlist*,int,char*) ;
 int FUNC_3 (struct perf_session*,char*,struct perf_event_attr*,int) ;
 int FUNC_4 (struct perf_event_attr*,int ,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct intel_pt *VAR_21,
     struct perf_session *VAR_22)
{
 struct evlist *VAR_23 = VAR_22->evlist;
 struct evsel *VAR_24 = FUNC_0(VAR_21, VAR_23);
 struct perf_event_attr VAR_25;
 u64 VAR_26;
 int VAR_27;

 if (!VAR_24) {
  FUNC_5("There are no selected events with Intel Processor Trace data\n");
  return 0;
 }

 FUNC_4(&VAR_25, 0, sizeof(struct perf_event_attr));
 VAR_25.size = sizeof(struct perf_event_attr);
 VAR_25.type = VAR_19;
 VAR_25.sample_type = VAR_24->core.attr.sample_type & VAR_8;
 VAR_25.sample_type |= VAR_7 | VAR_11 |
       VAR_9;
 if (VAR_21->timeless_decoding)
  VAR_25.sample_type &= ~(u64)VAR_12;
 else
  VAR_25.sample_type |= VAR_12;
 if (!VAR_21->per_cpu_mmaps)
  VAR_25.sample_type &= ~(u64)VAR_6;
 VAR_25.exclude_user = VAR_24->core.attr.exclude_user;
 VAR_25.exclude_kernel = VAR_24->core.attr.exclude_kernel;
 VAR_25.exclude_hv = VAR_24->core.attr.exclude_hv;
 VAR_25.exclude_host = VAR_24->core.attr.exclude_host;
 VAR_25.exclude_guest = VAR_24->core.attr.exclude_guest;
 VAR_25.sample_id_all = VAR_24->core.attr.sample_id_all;
 VAR_25.read_format = VAR_24->core.attr.read_format;

 VAR_26 = VAR_24->core.id[0] + 1000000000;
 if (!VAR_26)
  VAR_26 = 1;

 if (VAR_21->synth_opts.branches) {
  VAR_25.config = VAR_0;
  VAR_25.sample_period = 1;
  VAR_25.sample_type |= VAR_3;
  VAR_27 = FUNC_3(VAR_22, "branches", &VAR_25, VAR_26);
  if (VAR_27)
   return VAR_27;
  VAR_21->sample_branches = 1;
  VAR_21->branches_sample_type = VAR_25.sample_type;
  VAR_21->branches_id = VAR_26;
  VAR_26 += 1;
  VAR_25.sample_type &= ~(u64)VAR_3;
 }

 if (VAR_21->synth_opts.callchain)
  VAR_25.sample_type |= VAR_5;
 if (VAR_21->synth_opts.last_branch)
  VAR_25.sample_type |= VAR_4;

 if (VAR_21->synth_opts.instructions) {
  VAR_25.config = VAR_1;
  if (VAR_21->synth_opts.period_type == VAR_2)
   VAR_25.sample_period =
    FUNC_1(VAR_21, VAR_21->synth_opts.period);
  else
   VAR_25.sample_period = VAR_21->synth_opts.period;
  VAR_27 = FUNC_3(VAR_22, "instructions", &VAR_25, VAR_26);
  if (VAR_27)
   return VAR_27;
  VAR_21->sample_instructions = 1;
  VAR_21->instructions_sample_type = VAR_25.sample_type;
  VAR_21->instructions_id = VAR_26;
  VAR_26 += 1;
 }

 VAR_25.sample_type &= ~(u64)VAR_9;
 VAR_25.sample_period = 1;

 if (VAR_21->synth_opts.transactions) {
  VAR_25.config = VAR_1;
  VAR_27 = FUNC_3(VAR_22, "transactions", &VAR_25, VAR_26);
  if (VAR_27)
   return VAR_27;
  VAR_21->sample_transactions = 1;
  VAR_21->transactions_sample_type = VAR_25.sample_type;
  VAR_21->transactions_id = VAR_26;
  FUNC_2(VAR_23, VAR_26, "transactions");
  VAR_26 += 1;
 }

 VAR_25.type = VAR_20;
 VAR_25.sample_type |= VAR_10;

 if (VAR_21->synth_opts.ptwrites) {
  VAR_25.config = VAR_16;
  VAR_27 = FUNC_3(VAR_22, "ptwrite", &VAR_25, VAR_26);
  if (VAR_27)
   return VAR_27;
  VAR_21->sample_ptwrites = 1;
  VAR_21->ptwrites_sample_type = VAR_25.sample_type;
  VAR_21->ptwrites_id = VAR_26;
  FUNC_2(VAR_23, VAR_26, "ptwrite");
  VAR_26 += 1;
 }

 if (VAR_21->synth_opts.pwr_events) {
  VAR_21->sample_pwr_events = 1;
  VAR_21->pwr_events_sample_type = VAR_25.sample_type;

  VAR_25.config = VAR_13;
  VAR_27 = FUNC_3(VAR_22, "cbr", &VAR_25, VAR_26);
  if (VAR_27)
   return VAR_27;
  VAR_21->cbr_id = VAR_26;
  FUNC_2(VAR_23, VAR_26, "cbr");
  VAR_26 += 1;
 }

 if (VAR_21->synth_opts.pwr_events && (VAR_24->core.attr.config & 0x10)) {
  VAR_25.config = VAR_15;
  VAR_27 = FUNC_3(VAR_22, "mwait", &VAR_25, VAR_26);
  if (VAR_27)
   return VAR_27;
  VAR_21->mwait_id = VAR_26;
  FUNC_2(VAR_23, VAR_26, "mwait");
  VAR_26 += 1;

  VAR_25.config = VAR_17;
  VAR_27 = FUNC_3(VAR_22, "pwre", &VAR_25, VAR_26);
  if (VAR_27)
   return VAR_27;
  VAR_21->pwre_id = VAR_26;
  FUNC_2(VAR_23, VAR_26, "pwre");
  VAR_26 += 1;

  VAR_25.config = VAR_14;
  VAR_27 = FUNC_3(VAR_22, "exstop", &VAR_25, VAR_26);
  if (VAR_27)
   return VAR_27;
  VAR_21->exstop_id = VAR_26;
  FUNC_2(VAR_23, VAR_26, "exstop");
  VAR_26 += 1;

  VAR_25.config = VAR_18;
  VAR_27 = FUNC_3(VAR_22, "pwrx", &VAR_25, VAR_26);
  if (VAR_27)
   return VAR_27;
  VAR_21->pwrx_id = VAR_26;
  FUNC_2(VAR_23, VAR_26, "pwrx");
  VAR_26 += 1;
 }

 return 0;
}
