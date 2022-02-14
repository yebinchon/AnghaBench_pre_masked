
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


struct thread_data {int dummy; } ;
struct pkg_data {int dummy; } ;
struct msr_counter {scalar_t__ format; scalar_t__ type; struct msr_counter* next; } ;
struct core_data {int dummy; } ;
struct TYPE_11__ {int pkg_wtd_core_c0; int pkg_any_core_c0; int pkg_any_gfxe_c0; int pkg_both_core_gfxe_c0; int pc2; int pc3; int pc6; int pc7; int pc8; int pc9; int pc10; int* counter; } ;
struct TYPE_10__ {int c3; int c6; int c7; int mc6_us; int* counter; } ;
struct TYPE_9__ {int tsc; int aperf; int mperf; int c1; int irq_count; int* counter; int tv_delta; } ;
struct TYPE_12__ {TYPE_5__ packages; TYPE_4__ cores; TYPE_3__ threads; } ;
struct TYPE_8__ {struct msr_counter* pp; struct msr_counter* cp; struct msr_counter* tp; } ;
struct TYPE_7__ {int num_cpus; int num_cores; int num_packages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_8 ;
 TYPE_6__ VAR_9 ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*,TYPE_5__*) ;
 int FUNC_2 (int ,struct thread_data*,struct core_data*,struct pkg_data*) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;
 TYPE_1__ VAR_13 ;
 int VAR_14 ;

void FUNC_3(struct thread_data *VAR_15, struct core_data *VAR_16,
 struct pkg_data *VAR_17)
{
 int VAR_18;
 struct msr_counter *VAR_19;

 FUNC_1(&VAR_9.threads, &VAR_9.cores, &VAR_9.packages);

 FUNC_2(VAR_10, VAR_15, VAR_16, VAR_17);


 VAR_9.threads.tv_delta = VAR_14;

 VAR_9.threads.tsc /= VAR_13.num_cpus;
 VAR_9.threads.aperf /= VAR_13.num_cpus;
 VAR_9.threads.mperf /= VAR_13.num_cpus;
 VAR_9.threads.c1 /= VAR_13.num_cpus;

 if (VAR_9.threads.irq_count > 9999999)
  VAR_11 = 1;

 VAR_9.cores.c3 /= VAR_13.num_cores;
 VAR_9.cores.c6 /= VAR_13.num_cores;
 VAR_9.cores.c7 /= VAR_13.num_cores;
 VAR_9.cores.mc6_us /= VAR_13.num_cores;

 if (FUNC_0(VAR_6))
  VAR_9.packages.pkg_wtd_core_c0 /= VAR_13.num_packages;
 if (FUNC_0(VAR_0))
  VAR_9.packages.pkg_any_core_c0 /= VAR_13.num_packages;
 if (FUNC_0(VAR_2))
  VAR_9.packages.pkg_any_gfxe_c0 /= VAR_13.num_packages;
 if (FUNC_0(VAR_1))
  VAR_9.packages.pkg_both_core_gfxe_c0 /= VAR_13.num_packages;

 VAR_9.packages.pc2 /= VAR_13.num_packages;
 if (FUNC_0(VAR_3))
  VAR_9.packages.pc3 /= VAR_13.num_packages;
 if (FUNC_0(VAR_4))
  VAR_9.packages.pc6 /= VAR_13.num_packages;
 if (FUNC_0(VAR_5))
  VAR_9.packages.pc7 /= VAR_13.num_packages;

 VAR_9.packages.pc8 /= VAR_13.num_packages;
 VAR_9.packages.pc9 /= VAR_13.num_packages;
 VAR_9.packages.pc10 /= VAR_13.num_packages;

 for (VAR_18 = 0, VAR_19 = VAR_12.tp; VAR_19; VAR_18++, VAR_19 = VAR_19->next) {
  if (VAR_19->format == VAR_8)
   continue;
  if (VAR_19->type == VAR_7) {
   if (VAR_9.threads.counter[VAR_18] > 9999999)
    VAR_11 = 1;
   continue;
  }
  VAR_9.threads.counter[VAR_18] /= VAR_13.num_cpus;
 }
 for (VAR_18 = 0, VAR_19 = VAR_12.cp; VAR_19; VAR_18++, VAR_19 = VAR_19->next) {
  if (VAR_19->format == VAR_8)
   continue;
  if (VAR_19->type == VAR_7) {
   if (VAR_9.cores.counter[VAR_18] > 9999999)
    VAR_11 = 1;
  }
  VAR_9.cores.counter[VAR_18] /= VAR_13.num_cores;
 }
 for (VAR_18 = 0, VAR_19 = VAR_12.pp; VAR_19; VAR_18++, VAR_19 = VAR_19->next) {
  if (VAR_19->format == VAR_8)
   continue;
  if (VAR_19->type == VAR_7) {
   if (VAR_9.packages.counter[VAR_18] > 9999999)
    VAR_11 = 1;
  }
  VAR_9.packages.counter[VAR_18] /= VAR_13.num_packages;
 }
}
