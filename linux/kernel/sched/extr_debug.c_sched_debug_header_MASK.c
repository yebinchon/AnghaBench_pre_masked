
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {int version; int release; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,...) ;
 TYPE_1__* FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int * VAR_1 ;
 scalar_t__ FUNC_11 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_12(struct seq_file *VAR_8)
{
 u64 VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12;

 FUNC_8(VAR_12);
 VAR_9 = FUNC_5(FUNC_4());
 VAR_10 = FUNC_9();
 VAR_11 = FUNC_6();
 FUNC_7(VAR_12);

 FUNC_2(VAR_8, "Sched Debug Version: v0.11, %s %.*s\n",
  FUNC_3()->release,
  (int)FUNC_11(FUNC_3()->version, " "),
  FUNC_3()->version);





 FUNC_2(VAR_8, "%-40s: %Ld.%06ld\n", "ktime", FUNC_0(VAR_9));
 FUNC_2(VAR_8, "%-40s: %Ld.%06ld\n", "sched_clk", FUNC_0(VAR_10));
 FUNC_2(VAR_8, "%-40s: %Ld.%06ld\n", "cpu_clk", FUNC_0(VAR_11));
 FUNC_2(VAR_8, "%-40s: %Ld\n", "jiffies", (long long)(VAR_0));






 FUNC_2(VAR_8, "\n");
 FUNC_2(VAR_8, "sysctl_sched\n");





 FUNC_2(VAR_8, "  .%-40s: %Ld.%06ld\n", "sysctl_sched_latency", FUNC_0(VAR_4));
 FUNC_2(VAR_8, "  .%-40s: %Ld.%06ld\n", "sysctl_sched_min_granularity", FUNC_0(VAR_5));
 FUNC_2(VAR_8, "  .%-40s: %Ld.%06ld\n", "sysctl_sched_wakeup_granularity", FUNC_0(VAR_7));
 FUNC_2(VAR_8, "  .%-40s: %Ld\n", "sysctl_sched_child_runs_first", (long long)(VAR_2));
 FUNC_2(VAR_8, "  .%-40s: %Ld\n", "sysctl_sched_features", (long long)(VAR_3));



 FUNC_2(VAR_8, "  .%-40s: %d (%s)\n",
  "sysctl_sched_tunable_scaling",
  VAR_6,
  VAR_1[VAR_6]);
 FUNC_2(VAR_8, "\n");
}
