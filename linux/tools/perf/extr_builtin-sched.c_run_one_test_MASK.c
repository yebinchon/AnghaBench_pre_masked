
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_sched {int sum_runtime; int nr_runs; int sum_fluct; int run_avg; int replay_repeat; double nr_sleep_corrections; scalar_t__ runavg_parent_cpu_usage; scalar_t__ parent_cpu_usage; scalar_t__ runavg_cpu_usage; scalar_t__ cpu_usage; } ;


 double VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct perf_sched*) ;

__attribute__((used)) static void FUNC_3(struct perf_sched *VAR_1)
{
 u64 VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_2 = FUNC_0();
 FUNC_2(VAR_1);
 VAR_3 = FUNC_0();

 VAR_4 = VAR_3 - VAR_2;
 VAR_1->sum_runtime += VAR_4;
 VAR_1->nr_runs++;

 VAR_5 = VAR_1->sum_runtime / VAR_1->nr_runs;
 if (VAR_4 < VAR_5)
  VAR_6 = VAR_5 - VAR_4;
 else
  VAR_6 = VAR_4 - VAR_5;
 VAR_1->sum_fluct += VAR_6;
 if (!VAR_1->run_avg)
  VAR_1->run_avg = VAR_4;
 VAR_1->run_avg = (VAR_1->run_avg * (VAR_1->replay_repeat - 1) + VAR_4) / VAR_1->replay_repeat;

 FUNC_1("#%-3ld: %0.3f, ", VAR_1->nr_runs, (double)VAR_4 / VAR_0);

 FUNC_1("ravg: %0.2f, ", (double)VAR_1->run_avg / VAR_0);

 FUNC_1("cpu: %0.2f / %0.2f",
  (double)VAR_1->cpu_usage / VAR_0, (double)VAR_1->runavg_cpu_usage / VAR_0);
 FUNC_1("\n");

 if (VAR_1->nr_sleep_corrections)
  FUNC_1(" (%ld sleep corrections)\n", VAR_1->nr_sleep_corrections);
 VAR_1->nr_sleep_corrections = 0;
}
