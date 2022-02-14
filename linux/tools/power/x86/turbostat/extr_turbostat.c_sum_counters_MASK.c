
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tv_sec; } ;
struct thread_data {int flags; scalar_t__* counter; scalar_t__ smi_count; scalar_t__ irq_count; scalar_t__ c1; scalar_t__ mperf; scalar_t__ aperf; scalar_t__ tsc; int tv_end; TYPE_1__ tv_begin; int x2apic_id; int apic_id; } ;
struct pkg_data {scalar_t__* counter; scalar_t__ rapl_dram_perf_status; scalar_t__ rapl_pkg_perf_status; int pkg_temp_c; int gfx_mhz; int gfx_rc6_ms; scalar_t__ energy_gfx; scalar_t__ energy_cores; scalar_t__ energy_dram; scalar_t__ energy_pkg; int sys_lpi; int cpu_lpi; scalar_t__ pc10; scalar_t__ pc9; scalar_t__ pc8; scalar_t__ pc7; scalar_t__ pc6; scalar_t__ pc3; scalar_t__ pc2; scalar_t__ pkg_both_core_gfxe_c0; scalar_t__ pkg_any_gfxe_c0; scalar_t__ pkg_any_core_c0; scalar_t__ pkg_wtd_core_c0; } ;
struct msr_counter {scalar_t__ format; struct msr_counter* next; } ;
struct core_data {scalar_t__* counter; scalar_t__ core_energy; int core_temp_c; scalar_t__ mc6_us; scalar_t__ c7; scalar_t__ c6; scalar_t__ c3; } ;
struct TYPE_10__ {int * counter; int rapl_dram_perf_status; int rapl_pkg_perf_status; void* pkg_temp_c; int gfx_mhz; int gfx_rc6_ms; int energy_gfx; int energy_cores; int energy_dram; int energy_pkg; int sys_lpi; int cpu_lpi; int pc10; int pc9; int pc8; int pc7; int pc6; int pc3; int pc2; int pkg_both_core_gfxe_c0; int pkg_any_gfxe_c0; int pkg_any_core_c0; int pkg_wtd_core_c0; } ;
struct TYPE_9__ {int * counter; int core_energy; void* core_temp_c; int mc6_us; int c7; int c6; int c3; } ;
struct TYPE_8__ {int * counter; int smi_count; int irq_count; int c1; int mperf; int aperf; int tsc; int tv_end; TYPE_1__ tv_begin; int x2apic_id; int apic_id; } ;
struct TYPE_12__ {TYPE_4__ packages; TYPE_3__ cores; TYPE_2__ threads; } ;
struct TYPE_11__ {struct msr_counter* pp; struct msr_counter* cp; struct msr_counter* tp; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_11 ;
 void* FUNC_1 (void*,int ) ;
 TYPE_6__ VAR_12 ;
 TYPE_5__ VAR_13 ;

int FUNC_2(struct thread_data *VAR_14, struct core_data *VAR_15,
 struct pkg_data *VAR_16)
{
 int VAR_17;
 struct msr_counter *VAR_18;


 if (FUNC_0(VAR_0))
  VAR_12.threads.apic_id = VAR_14->apic_id;
 if (FUNC_0(VAR_8))
  VAR_12.threads.x2apic_id = VAR_14->x2apic_id;


 if (VAR_12.threads.tv_begin.tv_sec == 0)
  VAR_12.threads.tv_begin = VAR_14->tv_begin;


 VAR_12.threads.tv_end = VAR_14->tv_end;

 VAR_12.threads.tsc += VAR_14->tsc;
 VAR_12.threads.aperf += VAR_14->aperf;
 VAR_12.threads.mperf += VAR_14->mperf;
 VAR_12.threads.c1 += VAR_14->c1;

 VAR_12.threads.irq_count += VAR_14->irq_count;
 VAR_12.threads.smi_count += VAR_14->smi_count;

 for (VAR_17 = 0, VAR_18 = VAR_13.tp; VAR_18; VAR_17++, VAR_18 = VAR_18->next) {
  if (VAR_18->format == VAR_11)
   continue;
  VAR_12.threads.counter[VAR_17] += VAR_14->counter[VAR_17];
 }


 if (!(VAR_14->flags & VAR_10))
  return 0;

 VAR_12.cores.c3 += VAR_15->c3;
 VAR_12.cores.c6 += VAR_15->c6;
 VAR_12.cores.c7 += VAR_15->c7;
 VAR_12.cores.mc6_us += VAR_15->mc6_us;

 VAR_12.cores.core_temp_c = FUNC_1(VAR_12.cores.core_temp_c, VAR_15->core_temp_c);

 VAR_12.cores.core_energy += VAR_15->core_energy;

 for (VAR_17 = 0, VAR_18 = VAR_13.cp; VAR_18; VAR_17++, VAR_18 = VAR_18->next) {
  if (VAR_18->format == VAR_11)
   continue;
  VAR_12.cores.counter[VAR_17] += VAR_15->counter[VAR_17];
 }


 if (!(VAR_14->flags & VAR_9))
  return 0;

 if (FUNC_0(VAR_7))
  VAR_12.packages.pkg_wtd_core_c0 += VAR_16->pkg_wtd_core_c0;
 if (FUNC_0(VAR_1))
  VAR_12.packages.pkg_any_core_c0 += VAR_16->pkg_any_core_c0;
 if (FUNC_0(VAR_3))
  VAR_12.packages.pkg_any_gfxe_c0 += VAR_16->pkg_any_gfxe_c0;
 if (FUNC_0(VAR_2))
  VAR_12.packages.pkg_both_core_gfxe_c0 += VAR_16->pkg_both_core_gfxe_c0;

 VAR_12.packages.pc2 += VAR_16->pc2;
 if (FUNC_0(VAR_4))
  VAR_12.packages.pc3 += VAR_16->pc3;
 if (FUNC_0(VAR_5))
  VAR_12.packages.pc6 += VAR_16->pc6;
 if (FUNC_0(VAR_6))
  VAR_12.packages.pc7 += VAR_16->pc7;
 VAR_12.packages.pc8 += VAR_16->pc8;
 VAR_12.packages.pc9 += VAR_16->pc9;
 VAR_12.packages.pc10 += VAR_16->pc10;

 VAR_12.packages.cpu_lpi = VAR_16->cpu_lpi;
 VAR_12.packages.sys_lpi = VAR_16->sys_lpi;

 VAR_12.packages.energy_pkg += VAR_16->energy_pkg;
 VAR_12.packages.energy_dram += VAR_16->energy_dram;
 VAR_12.packages.energy_cores += VAR_16->energy_cores;
 VAR_12.packages.energy_gfx += VAR_16->energy_gfx;

 VAR_12.packages.gfx_rc6_ms = VAR_16->gfx_rc6_ms;
 VAR_12.packages.gfx_mhz = VAR_16->gfx_mhz;

 VAR_12.packages.pkg_temp_c = FUNC_1(VAR_12.packages.pkg_temp_c, VAR_16->pkg_temp_c);

 VAR_12.packages.rapl_pkg_perf_status += VAR_16->rapl_pkg_perf_status;
 VAR_12.packages.rapl_dram_perf_status += VAR_16->rapl_dram_perf_status;

 for (VAR_17 = 0, VAR_18 = VAR_13.pp; VAR_18; VAR_17++, VAR_18 = VAR_18->next) {
  if (VAR_18->format == VAR_11)
   continue;
  VAR_12.packages.counter[VAR_17] += VAR_16->counter[VAR_17];
 }
 return 0;
}
