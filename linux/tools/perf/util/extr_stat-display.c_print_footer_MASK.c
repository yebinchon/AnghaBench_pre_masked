
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ru_stime; int ru_utime; } ;
struct perf_stat_config {int run_count; scalar_t__ print_mixed_hw_group_error; scalar_t__ print_free_counters_hint; scalar_t__ walltime_run_table; int walltime_nsecs_stats; TYPE_1__ ru_data; scalar_t__ ru_display; int null_run; int * output; } ;
typedef int FILE ;


 double VAR_0 ;
 double FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (double) ;
 int FUNC_3 (struct perf_stat_config*,double,double) ;
 int FUNC_4 (struct perf_stat_config*,int *,int,double) ;
 double FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,int*) ;
 double FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct perf_stat_config *VAR_1)
{
 double VAR_2 = FUNC_0(VAR_1->walltime_nsecs_stats) / VAR_0;
 FILE *VAR_3 = VAR_1->output;
 int VAR_4;

 if (!VAR_1->null_run)
  FUNC_1(VAR_3, "\n");

 if (VAR_1->run_count == 1) {
  FUNC_1(VAR_3, " %17.9f seconds time elapsed", VAR_2);

  if (VAR_1->ru_display) {
   double VAR_5 = FUNC_7(&VAR_1->ru_data.ru_utime);
   double VAR_6 = FUNC_7(&VAR_1->ru_data.ru_stime);

   FUNC_1(VAR_3, "\n\n");
   FUNC_1(VAR_3, " %17.9f seconds user\n", VAR_5);
   FUNC_1(VAR_3, " %17.9f seconds sys\n", VAR_6);
  }
 } else {
  double VAR_7 = FUNC_5(VAR_1->walltime_nsecs_stats) / VAR_0;




  int VAR_8 = FUNC_2(VAR_7) + 2;

  if (VAR_1->walltime_run_table)
   FUNC_4(VAR_1, VAR_3, VAR_8, VAR_2);

  FUNC_1(VAR_3, " %17.*f +- %.*f seconds time elapsed",
   VAR_8, VAR_2, VAR_8, VAR_7);

  FUNC_3(VAR_1, VAR_7, VAR_2);
 }
 FUNC_1(VAR_3, "\n\n");

 if (VAR_1->print_free_counters_hint &&
     FUNC_6("kernel/nmi_watchdog", &VAR_4) >= 0 &&
     VAR_4 > 0)
  FUNC_1(VAR_3,
"Some events weren't counted. Try disabling the NMI watchdog:\n"
"	echo 0 > /proc/sys/kernel/nmi_watchdog\n"
"	perf stat ...\n"
"	echo 1 > /proc/sys/kernel/nmi_watchdog\n");

 if (VAR_1->print_mixed_hw_group_error)
  FUNC_1(VAR_3,
   "The events in group usually have to be from "
   "the same PMU. Try reorganizing the group.\n");
}
