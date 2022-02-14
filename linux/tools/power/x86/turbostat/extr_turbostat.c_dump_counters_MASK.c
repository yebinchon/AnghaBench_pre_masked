
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_data {int cpu_id; int flags; int smi_count; int * counter; int irq_count; int c1; int mperf; int aperf; int tsc; } ;
struct pkg_data {int package_id; int energy_pkg; int energy_cores; int energy_gfx; int energy_dram; int rapl_pkg_perf_status; int rapl_dram_perf_status; int pkg_temp_c; int * counter; int sys_lpi; int cpu_lpi; int pc10; int pc9; int pc8; int pc7; int pc6; int pc3; int pc2; int pkg_both_core_gfxe_c0; int pkg_any_gfxe_c0; int pkg_any_core_c0; int pkg_wtd_core_c0; } ;
struct msr_counter {int msr_num; struct msr_counter* next; } ;
struct core_data {int core_id; int core_temp_c; int core_energy; int mc6_us; int * counter; int c7; int c6; int c3; } ;
struct TYPE_2__ {struct msr_counter* pp; struct msr_counter* cp; struct msr_counter* tp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,char*,...) ;
 TYPE_1__ VAR_6 ;

int FUNC_2(struct thread_data *VAR_7, struct core_data *VAR_8,
 struct pkg_data *VAR_9)
{
 int VAR_10;
 struct msr_counter *VAR_11;

 VAR_5 += FUNC_1(VAR_5, "t %p, c %p, p %p\n", VAR_7, VAR_8, VAR_9);

 if (VAR_7) {
  VAR_5 += FUNC_1(VAR_5, "CPU: %d flags 0x%x\n",
   VAR_7->cpu_id, VAR_7->flags);
  VAR_5 += FUNC_1(VAR_5, "TSC: %016llX\n", VAR_7->tsc);
  VAR_5 += FUNC_1(VAR_5, "aperf: %016llX\n", VAR_7->aperf);
  VAR_5 += FUNC_1(VAR_5, "mperf: %016llX\n", VAR_7->mperf);
  VAR_5 += FUNC_1(VAR_5, "c1: %016llX\n", VAR_7->c1);

  if (FUNC_0(VAR_0))
   VAR_5 += FUNC_1(VAR_5, "IRQ: %lld\n", VAR_7->irq_count);
  if (FUNC_0(VAR_4))
   VAR_5 += FUNC_1(VAR_5, "SMI: %d\n", VAR_7->smi_count);

  for (VAR_10 = 0, VAR_11 = VAR_6.tp; VAR_11; VAR_10++, VAR_11 = VAR_11->next) {
   VAR_5 += FUNC_1(VAR_5, "tADDED [%d] msr0x%x: %08llX\n",
    VAR_10, VAR_11->msr_num, VAR_7->counter[VAR_10]);
  }
 }

 if (VAR_8) {
  VAR_5 += FUNC_1(VAR_5, "core: %d\n", VAR_8->core_id);
  VAR_5 += FUNC_1(VAR_5, "c3: %016llX\n", VAR_8->c3);
  VAR_5 += FUNC_1(VAR_5, "c6: %016llX\n", VAR_8->c6);
  VAR_5 += FUNC_1(VAR_5, "c7: %016llX\n", VAR_8->c7);
  VAR_5 += FUNC_1(VAR_5, "DTS: %dC\n", VAR_8->core_temp_c);
  VAR_5 += FUNC_1(VAR_5, "Joules: %0X\n", VAR_8->core_energy);

  for (VAR_10 = 0, VAR_11 = VAR_6.cp; VAR_11; VAR_10++, VAR_11 = VAR_11->next) {
   VAR_5 += FUNC_1(VAR_5, "cADDED [%d] msr0x%x: %08llX\n",
    VAR_10, VAR_11->msr_num, VAR_8->counter[VAR_10]);
  }
  VAR_5 += FUNC_1(VAR_5, "mc6_us: %016llX\n", VAR_8->mc6_us);
 }

 if (VAR_9) {
  VAR_5 += FUNC_1(VAR_5, "package: %d\n", VAR_9->package_id);

  VAR_5 += FUNC_1(VAR_5, "Weighted cores: %016llX\n", VAR_9->pkg_wtd_core_c0);
  VAR_5 += FUNC_1(VAR_5, "Any cores: %016llX\n", VAR_9->pkg_any_core_c0);
  VAR_5 += FUNC_1(VAR_5, "Any GFX: %016llX\n", VAR_9->pkg_any_gfxe_c0);
  VAR_5 += FUNC_1(VAR_5, "CPU + GFX: %016llX\n", VAR_9->pkg_both_core_gfxe_c0);

  VAR_5 += FUNC_1(VAR_5, "pc2: %016llX\n", VAR_9->pc2);
  if (FUNC_0(VAR_1))
   VAR_5 += FUNC_1(VAR_5, "pc3: %016llX\n", VAR_9->pc3);
  if (FUNC_0(VAR_2))
   VAR_5 += FUNC_1(VAR_5, "pc6: %016llX\n", VAR_9->pc6);
  if (FUNC_0(VAR_3))
   VAR_5 += FUNC_1(VAR_5, "pc7: %016llX\n", VAR_9->pc7);
  VAR_5 += FUNC_1(VAR_5, "pc8: %016llX\n", VAR_9->pc8);
  VAR_5 += FUNC_1(VAR_5, "pc9: %016llX\n", VAR_9->pc9);
  VAR_5 += FUNC_1(VAR_5, "pc10: %016llX\n", VAR_9->pc10);
  VAR_5 += FUNC_1(VAR_5, "cpu_lpi: %016llX\n", VAR_9->cpu_lpi);
  VAR_5 += FUNC_1(VAR_5, "sys_lpi: %016llX\n", VAR_9->sys_lpi);
  VAR_5 += FUNC_1(VAR_5, "Joules PKG: %0X\n", VAR_9->energy_pkg);
  VAR_5 += FUNC_1(VAR_5, "Joules COR: %0X\n", VAR_9->energy_cores);
  VAR_5 += FUNC_1(VAR_5, "Joules GFX: %0X\n", VAR_9->energy_gfx);
  VAR_5 += FUNC_1(VAR_5, "Joules RAM: %0X\n", VAR_9->energy_dram);
  VAR_5 += FUNC_1(VAR_5, "Throttle PKG: %0X\n",
   VAR_9->rapl_pkg_perf_status);
  VAR_5 += FUNC_1(VAR_5, "Throttle RAM: %0X\n",
   VAR_9->rapl_dram_perf_status);
  VAR_5 += FUNC_1(VAR_5, "PTM: %dC\n", VAR_9->pkg_temp_c);

  for (VAR_10 = 0, VAR_11 = VAR_6.pp; VAR_11; VAR_10++, VAR_11 = VAR_11->next) {
   VAR_5 += FUNC_1(VAR_5, "pADDED [%d] msr0x%x: %08llX\n",
    VAR_10, VAR_11->msr_num, VAR_9->counter[VAR_10]);
  }
 }

 VAR_5 += FUNC_1(VAR_5, "\n");

 return 0;
}
