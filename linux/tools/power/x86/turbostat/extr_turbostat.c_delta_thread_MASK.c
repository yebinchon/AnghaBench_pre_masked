
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_data {int tsc; int c1; scalar_t__ aperf; int mperf; int cpu_id; scalar_t__* counter; scalar_t__ smi_count; scalar_t__ irq_count; int tv_end; int tv_begin; int tv_delta; int x2apic_id; int apic_id; } ;
struct msr_counter {scalar_t__ format; struct msr_counter* next; } ;
struct core_data {int c3; int c6; int c7; } ;
struct TYPE_2__ {struct msr_counter* tp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__ VAR_10 ;
 int FUNC_4 (int *,int *,int *) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

int
FUNC_5(struct thread_data *VAR_13, struct thread_data *VAR_14,
 struct core_data *VAR_15)
{
 int VAR_16;
 struct msr_counter *VAR_17;


 if (FUNC_0(VAR_0))
  VAR_13->apic_id = VAR_14->apic_id;
 if (FUNC_0(VAR_6))
  VAR_13->x2apic_id = VAR_14->x2apic_id;







 FUNC_4(&VAR_13->tv_begin, &VAR_14->tv_begin, &VAR_14->tv_delta);
 VAR_14->tv_begin = VAR_13->tv_begin;
 VAR_14->tv_end = VAR_13->tv_end;

 VAR_14->tsc = VAR_13->tsc - VAR_14->tsc;


 if (VAR_14->tsc < (1000 * 1000))
  FUNC_1(-3, "Insanely slow TSC rate, TSC stops in idle?\n"
       "You can disable all c-states by booting with \"idle=poll\"\n"
       "or just the deep ones with \"processor.max_cstate=1\"");

 VAR_14->c1 = VAR_13->c1 - VAR_14->c1;

 if (FUNC_0(VAR_1) || FUNC_0(VAR_2) || FUNC_0(VAR_3) ||
     FUNC_3(VAR_1)) {
  if ((VAR_13->aperf > VAR_14->aperf) && (VAR_13->mperf > VAR_14->mperf)) {
   VAR_14->aperf = VAR_13->aperf - VAR_14->aperf;
   VAR_14->mperf = VAR_13->mperf - VAR_14->mperf;
  } else {
   return -1;
  }
 }


 if (VAR_12) {




 } else {





  if ((VAR_14->mperf + VAR_15->c3 + VAR_15->c6 + VAR_15->c7) > (VAR_14->tsc * VAR_11))
   VAR_14->c1 = 0;
  else {

   VAR_14->c1 = (VAR_14->tsc * VAR_11) - VAR_14->mperf - VAR_15->c3
    - VAR_15->c6 - VAR_15->c7;
  }
 }

 if (VAR_14->mperf == 0) {
  if (VAR_8 > 1)
   FUNC_2(VAR_9, "cpu%d MPERF 0!\n", VAR_14->cpu_id);
  VAR_14->mperf = 1;
 }

 if (FUNC_0(VAR_4))
  VAR_14->irq_count = VAR_13->irq_count - VAR_14->irq_count;

 if (FUNC_0(VAR_5))
  VAR_14->smi_count = VAR_13->smi_count - VAR_14->smi_count;

 for (VAR_16 = 0, VAR_17 = VAR_10.tp; VAR_17; VAR_16++, VAR_17 = VAR_17->next) {
  if (VAR_17->format == VAR_7)
   VAR_14->counter[VAR_16] = VAR_13->counter[VAR_16];
  else
   VAR_14->counter[VAR_16] = VAR_13->counter[VAR_16] - VAR_14->counter[VAR_16];
 }
 return 0;
}
