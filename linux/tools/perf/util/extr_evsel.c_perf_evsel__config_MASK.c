
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int per_thread; scalar_t__ default_per_cpu; } ;
struct record_opts {scalar_t__ user_freq; scalar_t__ user_interval; int sample_user_regs; scalar_t__ initial_delay; scalar_t__ period; scalar_t__ period_set; int ignore_missing_thread; scalar_t__ all_kernel; scalar_t__ all_user; int clockid; scalar_t__ use_clockid; TYPE_2__ target; scalar_t__ running_time; scalar_t__ sample_transaction; scalar_t__ record_switch_events; scalar_t__ record_namespaces; int no_bpf_event; scalar_t__ sample_weight; scalar_t__ branch_stack; scalar_t__ no_buffering; scalar_t__ sample_phys_addr; scalar_t__ sample_address; scalar_t__ raw_samples; scalar_t__ sample_time_set; int no_inherit; scalar_t__ sample_time; scalar_t__ sample_cpu; scalar_t__ sample_intr_regs; scalar_t__ inherit_stat; scalar_t__ no_samples; scalar_t__ default_interval; scalar_t__ freq; scalar_t__ overwrite; } ;
struct perf_event_attr {int sample_id_all; int inherit; int write_backward; int read_format; int freq; int inherit_stat; int mmap_data; int exclude_callchain_user; int sample_regs_user; int wakeup_events; int task; int mmap; int mmap2; int comm; int ksymbol; int bpf_event; int namespaces; int context_switch; int disabled; int enable_on_exec; int use_clockid; int precise_ip; int exclude_kernel; int exclude_user; int clockid; scalar_t__ branch_sample_type; scalar_t__ watermark; scalar_t__ sample_regs_intr; scalar_t__ sample_freq; int sample_type; scalar_t__ sample_period; } ;
struct TYPE_5__ {int nr_members; struct perf_event_attr attr; scalar_t__ own_cpus; } ;
struct evsel {int tracking; int ignore_missing_thread; TYPE_1__ core; scalar_t__ unit; scalar_t__ precise_max; scalar_t__ immediate; int no_aux_samples; scalar_t__ sample_read; struct evsel* leader; } ;
struct callchain_param {scalar_t__ enabled; } ;
struct TYPE_7__ {int bpf; int ksymbol; int mmap2; scalar_t__ sample_id_all; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct evsel*,struct record_opts*,int) ;
 int VAR_21 ;
 scalar_t__ FUNC_1 (struct evsel*) ;
 int FUNC_2 (struct evsel*,struct record_opts*,struct callchain_param*) ;
 scalar_t__ FUNC_3 (struct evsel*) ;
 scalar_t__ FUNC_4 (struct evsel*) ;
 int FUNC_5 (struct evsel*,int ) ;
 int FUNC_6 (struct evsel*,int ) ;
 int FUNC_7 (struct evsel*,int) ;
 TYPE_4__ VAR_22 ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;

void FUNC_10(struct evsel *VAR_23, struct record_opts *VAR_24,
   struct callchain_param *VAR_25)
{
 struct evsel *VAR_26 = VAR_23->leader;
 struct perf_event_attr *VAR_27 = &VAR_23->core.attr;
 int VAR_28 = VAR_23->tracking;
 bool VAR_29 = VAR_24->target.default_per_cpu && !VAR_24->target.per_thread;

 VAR_27->sample_id_all = VAR_22.sample_id_all ? 0 : 1;
 VAR_27->inherit = !VAR_24->no_inherit;
 VAR_27->write_backward = VAR_24->overwrite ? 1 : 0;

 FUNC_6(VAR_23, VAR_4);
 FUNC_6(VAR_23, VAR_15);

 if (VAR_23->sample_read) {
  FUNC_6(VAR_23, VAR_12);





  FUNC_7(VAR_23, 0);





  if (VAR_26->core.nr_members > 1) {
   VAR_27->read_format |= VAR_5;
   VAR_27->inherit = 0;
  }
 }





 if (!VAR_27->sample_period || (VAR_24->user_freq != VAR_18 ||
         VAR_24->user_interval != VAR_19)) {
  if (VAR_24->freq) {
   FUNC_6(VAR_23, VAR_9);
   VAR_27->freq = 1;
   VAR_27->sample_freq = VAR_24->freq;
  } else {
   VAR_27->sample_period = VAR_24->default_interval;
  }
 }





 if ((VAR_26 != VAR_23) && VAR_26->sample_read) {
  VAR_27->freq = 0;
  VAR_27->sample_freq = 0;
  VAR_27->sample_period = 0;
  VAR_27->write_backward = 0;







  VAR_27->sample_type = VAR_26->core.attr.sample_type;
 }

 if (VAR_24->no_samples)
  VAR_27->sample_freq = 0;

 if (VAR_24->inherit_stat) {
  VAR_23->core.attr.read_format |=
   VAR_7 |
   VAR_8 |
   VAR_6;
  VAR_27->inherit_stat = 1;
 }

 if (VAR_24->sample_address) {
  FUNC_6(VAR_23, VAR_0);
  VAR_27->mmap_data = VAR_28;
 }






 if (FUNC_3(VAR_23))
  VAR_23->core.attr.exclude_callchain_user = 1;

 if (VAR_25 && VAR_25->enabled && !VAR_23->no_aux_samples)
  FUNC_2(VAR_23, VAR_24, VAR_25);

 if (VAR_24->sample_intr_regs) {
  VAR_27->sample_regs_intr = VAR_24->sample_intr_regs;
  FUNC_6(VAR_23, VAR_13);
 }

 if (VAR_24->sample_user_regs) {
  VAR_27->sample_regs_user |= VAR_24->sample_user_regs;
  FUNC_6(VAR_23, VAR_14);
 }

 if (FUNC_8(&VAR_24->target) || VAR_24->sample_cpu)
  FUNC_6(VAR_23, VAR_2);




 if (VAR_24->sample_time &&
     (!VAR_22.sample_id_all &&
     (!VAR_24->no_inherit || FUNC_8(&VAR_24->target) || VAR_29 ||
      VAR_24->sample_time_set)))
  FUNC_6(VAR_23, VAR_16);

 if (VAR_24->raw_samples && !VAR_23->no_aux_samples) {
  FUNC_6(VAR_23, VAR_16);
  FUNC_6(VAR_23, VAR_11);
  FUNC_6(VAR_23, VAR_2);
 }

 if (VAR_24->sample_address)
  FUNC_6(VAR_23, VAR_3);

 if (VAR_24->sample_phys_addr)
  FUNC_6(VAR_23, VAR_10);

 if (VAR_24->no_buffering) {
  VAR_27->watermark = 0;
  VAR_27->wakeup_events = 1;
 }
 if (VAR_24->branch_stack && !VAR_23->no_aux_samples) {
  FUNC_6(VAR_23, VAR_1);
  VAR_27->branch_sample_type = VAR_24->branch_stack;
 }

 if (VAR_24->sample_weight)
  FUNC_6(VAR_23, VAR_20);

 VAR_27->task = VAR_28;
 VAR_27->mmap = VAR_28;
 VAR_27->mmap2 = VAR_28 && !VAR_22.mmap2;
 VAR_27->comm = VAR_28;
 VAR_27->ksymbol = VAR_28 && !VAR_22.ksymbol;
 VAR_27->bpf_event = VAR_28 && !VAR_24->no_bpf_event && !VAR_22.bpf;

 if (VAR_24->record_namespaces)
  VAR_27->namespaces = VAR_28;

 if (VAR_24->record_switch_events)
  VAR_27->context_switch = VAR_28;

 if (VAR_24->sample_transaction)
  FUNC_6(VAR_23, VAR_17);

 if (VAR_24->running_time) {
  VAR_23->core.attr.read_format |=
   VAR_7 |
   VAR_8;
 }







 if (FUNC_4(VAR_23))
  VAR_27->disabled = 1;





 if (FUNC_9(&VAR_24->target) && FUNC_4(VAR_23) &&
  !VAR_24->initial_delay)
  VAR_27->enable_on_exec = 1;

 if (VAR_23->immediate) {
  VAR_27->disabled = 0;
  VAR_27->enable_on_exec = 0;
 }

 VAR_21 = VAR_24->clockid;
 if (VAR_24->use_clockid) {
  VAR_27->use_clockid = 1;
  VAR_27->clockid = VAR_24->clockid;
 }

 if (VAR_23->precise_max)
  VAR_27->precise_ip = 3;

 if (VAR_24->all_user) {
  VAR_27->exclude_kernel = 1;
  VAR_27->exclude_user = 0;
 }

 if (VAR_24->all_kernel) {
  VAR_27->exclude_kernel = 0;
  VAR_27->exclude_user = 1;
 }

 if (VAR_23->core.own_cpus || VAR_23->unit)
  VAR_23->core.attr.read_format |= VAR_6;





 FUNC_0(VAR_23, VAR_24, VAR_28);

 VAR_23->ignore_missing_thread = VAR_24->ignore_missing_thread;


 if (VAR_24->period_set) {
  if (VAR_24->period)
   FUNC_6(VAR_23, VAR_9);
  else
   FUNC_5(VAR_23, VAR_9);
 }






 if (VAR_24->initial_delay && FUNC_1(VAR_23))
  FUNC_5(VAR_23, VAR_1);
}
