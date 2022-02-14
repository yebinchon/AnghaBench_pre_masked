
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_6__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_5__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct thread_data {int flags; scalar_t__* counter; scalar_t__ smi_count; scalar_t__ irq_count; scalar_t__ c1; scalar_t__ mperf; scalar_t__ aperf; scalar_t__ tsc; TYPE_3__ tv_delta; TYPE_2__ tv_end; TYPE_1__ tv_begin; } ;
struct pkg_data {scalar_t__* counter; scalar_t__ gfx_mhz; scalar_t__ gfx_rc6_ms; scalar_t__ pkg_temp_c; scalar_t__ rapl_dram_perf_status; scalar_t__ rapl_pkg_perf_status; scalar_t__ energy_gfx; scalar_t__ energy_cores; scalar_t__ energy_dram; scalar_t__ energy_pkg; scalar_t__ sys_lpi; scalar_t__ cpu_lpi; scalar_t__ pc10; scalar_t__ pc9; scalar_t__ pc8; scalar_t__ pc7; scalar_t__ pc6; scalar_t__ pc3; scalar_t__ pc2; scalar_t__ pkg_both_core_gfxe_c0; scalar_t__ pkg_any_gfxe_c0; scalar_t__ pkg_any_core_c0; scalar_t__ pkg_wtd_core_c0; } ;
struct msr_counter {struct msr_counter* next; } ;
struct core_data {scalar_t__* counter; scalar_t__ core_energy; scalar_t__ core_temp_c; scalar_t__ mc6_us; scalar_t__ c7; scalar_t__ c6; scalar_t__ c3; } ;
struct TYPE_8__ {struct msr_counter* pp; struct msr_counter* cp; struct msr_counter* tp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_4__ VAR_5 ;

void FUNC_1(struct thread_data *VAR_6, struct core_data *VAR_7, struct pkg_data *VAR_8)
{
 int VAR_9;
 struct msr_counter *VAR_10;

 VAR_6->tv_begin.tv_sec = 0;
 VAR_6->tv_begin.tv_usec = 0;
 VAR_6->tv_end.tv_sec = 0;
 VAR_6->tv_end.tv_usec = 0;
 VAR_6->tv_delta.tv_sec = 0;
 VAR_6->tv_delta.tv_usec = 0;

 VAR_6->tsc = 0;
 VAR_6->aperf = 0;
 VAR_6->mperf = 0;
 VAR_6->c1 = 0;

 VAR_6->irq_count = 0;
 VAR_6->smi_count = 0;


 VAR_6->flags = VAR_4 | VAR_3;

 VAR_7->c3 = 0;
 VAR_7->c6 = 0;
 VAR_7->c7 = 0;
 VAR_7->mc6_us = 0;
 VAR_7->core_temp_c = 0;
 VAR_7->core_energy = 0;

 VAR_8->pkg_wtd_core_c0 = 0;
 VAR_8->pkg_any_core_c0 = 0;
 VAR_8->pkg_any_gfxe_c0 = 0;
 VAR_8->pkg_both_core_gfxe_c0 = 0;

 VAR_8->pc2 = 0;
 if (FUNC_0(VAR_0))
  VAR_8->pc3 = 0;
 if (FUNC_0(VAR_1))
  VAR_8->pc6 = 0;
 if (FUNC_0(VAR_2))
  VAR_8->pc7 = 0;
 VAR_8->pc8 = 0;
 VAR_8->pc9 = 0;
 VAR_8->pc10 = 0;
 VAR_8->cpu_lpi = 0;
 VAR_8->sys_lpi = 0;

 VAR_8->energy_pkg = 0;
 VAR_8->energy_dram = 0;
 VAR_8->energy_cores = 0;
 VAR_8->energy_gfx = 0;
 VAR_8->rapl_pkg_perf_status = 0;
 VAR_8->rapl_dram_perf_status = 0;
 VAR_8->pkg_temp_c = 0;

 VAR_8->gfx_rc6_ms = 0;
 VAR_8->gfx_mhz = 0;
 for (VAR_9 = 0, VAR_10 = VAR_5.tp; VAR_10; VAR_9++, VAR_10 = VAR_10->next)
  VAR_6->counter[VAR_9] = 0;

 for (VAR_9 = 0, VAR_10 = VAR_5.cp; VAR_10; VAR_9++, VAR_10 = VAR_10->next)
  VAR_7->counter[VAR_9] = 0;

 for (VAR_9 = 0, VAR_10 = VAR_5.pp; VAR_10; VAR_9++, VAR_10 = VAR_10->next)
  VAR_8->counter[VAR_9] = 0;
}
