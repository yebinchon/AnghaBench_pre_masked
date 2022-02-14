
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pkg_data {int gfx_rc6_ms; scalar_t__* counter; int rapl_dram_perf_status; int rapl_pkg_perf_status; int energy_dram; int energy_gfx; int energy_cores; int energy_pkg; int gfx_mhz; int pkg_temp_c; scalar_t__ sys_lpi; scalar_t__ cpu_lpi; scalar_t__ pc10; scalar_t__ pc9; scalar_t__ pc8; scalar_t__ pc7; scalar_t__ pc6; scalar_t__ pc3; scalar_t__ pc2; scalar_t__ pkg_both_core_gfxe_c0; scalar_t__ pkg_any_gfxe_c0; scalar_t__ pkg_any_core_c0; scalar_t__ pkg_wtd_core_c0; } ;
struct msr_counter {scalar_t__ format; struct msr_counter* next; } ;
struct TYPE_2__ {struct msr_counter* pp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 TYPE_1__ VAR_8 ;

int
FUNC_2(struct pkg_data *VAR_9, struct pkg_data *VAR_10)
{
 int VAR_11;
 struct msr_counter *VAR_12;


 if (FUNC_1(VAR_6))
  VAR_10->pkg_wtd_core_c0 = VAR_9->pkg_wtd_core_c0 - VAR_10->pkg_wtd_core_c0;
 if (FUNC_1(VAR_0))
  VAR_10->pkg_any_core_c0 = VAR_9->pkg_any_core_c0 - VAR_10->pkg_any_core_c0;
 if (FUNC_1(VAR_2))
  VAR_10->pkg_any_gfxe_c0 = VAR_9->pkg_any_gfxe_c0 - VAR_10->pkg_any_gfxe_c0;
 if (FUNC_1(VAR_1))
  VAR_10->pkg_both_core_gfxe_c0 = VAR_9->pkg_both_core_gfxe_c0 - VAR_10->pkg_both_core_gfxe_c0;

 VAR_10->pc2 = VAR_9->pc2 - VAR_10->pc2;
 if (FUNC_1(VAR_3))
  VAR_10->pc3 = VAR_9->pc3 - VAR_10->pc3;
 if (FUNC_1(VAR_4))
  VAR_10->pc6 = VAR_9->pc6 - VAR_10->pc6;
 if (FUNC_1(VAR_5))
  VAR_10->pc7 = VAR_9->pc7 - VAR_10->pc7;
 VAR_10->pc8 = VAR_9->pc8 - VAR_10->pc8;
 VAR_10->pc9 = VAR_9->pc9 - VAR_10->pc9;
 VAR_10->pc10 = VAR_9->pc10 - VAR_10->pc10;
 VAR_10->cpu_lpi = VAR_9->cpu_lpi - VAR_10->cpu_lpi;
 VAR_10->sys_lpi = VAR_9->sys_lpi - VAR_10->sys_lpi;
 VAR_10->pkg_temp_c = VAR_9->pkg_temp_c;


 if (VAR_10->gfx_rc6_ms > VAR_9->gfx_rc6_ms)
  VAR_10->gfx_rc6_ms = -1;
 else
  VAR_10->gfx_rc6_ms = VAR_9->gfx_rc6_ms - VAR_10->gfx_rc6_ms;

 VAR_10->gfx_mhz = VAR_9->gfx_mhz;

 FUNC_0(VAR_9->energy_pkg, VAR_10->energy_pkg);
 FUNC_0(VAR_9->energy_cores, VAR_10->energy_cores);
 FUNC_0(VAR_9->energy_gfx, VAR_10->energy_gfx);
 FUNC_0(VAR_9->energy_dram, VAR_10->energy_dram);
 FUNC_0(VAR_9->rapl_pkg_perf_status, VAR_10->rapl_pkg_perf_status);
 FUNC_0(VAR_9->rapl_dram_perf_status, VAR_10->rapl_dram_perf_status);

 for (VAR_11 = 0, VAR_12 = VAR_8.pp; VAR_12; VAR_11++, VAR_12 = VAR_12->next) {
  if (VAR_12->format == VAR_7)
   VAR_10->counter[VAR_11] = VAR_9->counter[VAR_11];
  else
   VAR_10->counter[VAR_11] = VAR_9->counter[VAR_11] - VAR_10->counter[VAR_11];
 }

 return 0;
}
