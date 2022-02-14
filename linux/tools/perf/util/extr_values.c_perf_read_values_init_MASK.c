
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_read_values {int threads_max; int counters_max; void* value; void* tid; void* pid; void* countername; void* counterrawid; scalar_t__ counters; scalar_t__ threads; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (void**) ;

int FUNC_4(struct perf_read_values *VAR_1)
{
 VAR_1->threads_max = 16;
 VAR_1->pid = FUNC_0(VAR_1->threads_max * sizeof(*VAR_1->pid));
 VAR_1->tid = FUNC_0(VAR_1->threads_max * sizeof(*VAR_1->tid));
 VAR_1->value = FUNC_2(VAR_1->threads_max * sizeof(*VAR_1->value));
 if (!VAR_1->pid || !VAR_1->tid || !VAR_1->value) {
  FUNC_1("failed to allocate read_values threads arrays");
  goto out_free_pid;
 }
 VAR_1->threads = 0;

 VAR_1->counters_max = 16;
 VAR_1->counterrawid = FUNC_0(VAR_1->counters_max
          * sizeof(*VAR_1->counterrawid));
 VAR_1->countername = FUNC_0(VAR_1->counters_max
         * sizeof(*VAR_1->countername));
 if (!VAR_1->counterrawid || !VAR_1->countername) {
  FUNC_1("failed to allocate read_values counters arrays");
  goto out_free_counter;
 }
 VAR_1->counters = 0;

 return 0;

out_free_counter:
 FUNC_3(&VAR_1->counterrawid);
 FUNC_3(&VAR_1->countername);
out_free_pid:
 FUNC_3(&VAR_1->pid);
 FUNC_3(&VAR_1->tid);
 FUNC_3(&VAR_1->value);
 return -VAR_0;
}
