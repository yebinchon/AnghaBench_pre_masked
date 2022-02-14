
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_read_values {int threads_max; void* value; void* tid; void* pid; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (void*,int) ;

__attribute__((used)) static int FUNC_3(struct perf_read_values *VAR_1)
{
 int VAR_2 = VAR_1->threads_max * 2;
 void *VAR_3 = FUNC_2(VAR_1->pid, VAR_2 * sizeof(*VAR_1->pid)),
      *VAR_4 = FUNC_2(VAR_1->tid, VAR_2 * sizeof(*VAR_1->tid)),
      *VAR_5 = FUNC_2(VAR_1->value, VAR_2 * sizeof(*VAR_1->value));

 if (!VAR_3 || !VAR_4 || !VAR_5)
  goto out_err;

 VAR_1->threads_max = VAR_2;
 VAR_1->pid = VAR_3;
 VAR_1->tid = VAR_4;
 VAR_1->value = VAR_5;
 return 0;
out_err:
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 FUNC_1("failed to enlarge read_values threads arrays");
 return -VAR_0;
}
