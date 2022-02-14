
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target {char* cpu_list; char* pid; char* tid; scalar_t__ system_wide; } ;
struct perf_stat_config {int run_count; int csv_output; int * output; } ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_0 ;
 int FUNC_2 (struct target*) ;

__attribute__((used)) static void FUNC_3(struct perf_stat_config *VAR_1,
    struct target *VAR_2,
    int VAR_3, const char **VAR_4)
{
 FILE *VAR_5 = VAR_1->output;
 int VAR_6;

 FUNC_0(VAR_0);

 if (!VAR_1->csv_output) {
  FUNC_1(VAR_5, "\n");
  FUNC_1(VAR_5, " Performance counter stats for ");
  if (VAR_2->system_wide)
   FUNC_1(VAR_5, "\'system wide");
  else if (VAR_2->cpu_list)
   FUNC_1(VAR_5, "\'CPU(s) %s", VAR_2->cpu_list);
  else if (!FUNC_2(VAR_2)) {
   FUNC_1(VAR_5, "\'%s", VAR_4 ? VAR_4[0] : "pipe");
   for (VAR_6 = 1; VAR_4 && (VAR_6 < VAR_3); VAR_6++)
    FUNC_1(VAR_5, " %s", VAR_4[VAR_6]);
  } else if (VAR_2->pid)
   FUNC_1(VAR_5, "process id \'%s", VAR_2->pid);
  else
   FUNC_1(VAR_5, "thread id \'%s", VAR_2->tid);

  FUNC_1(VAR_5, "\'");
  if (VAR_1->run_count > 1)
   FUNC_1(VAR_5, " (%d runs)", VAR_1->run_count);
  FUNC_1(VAR_5, ":\n\n");
 }
}
