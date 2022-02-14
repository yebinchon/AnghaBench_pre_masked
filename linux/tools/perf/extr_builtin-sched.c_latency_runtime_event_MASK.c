
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef void* u32 ;
struct work_atoms {int dummy; } ;
struct thread {int dummy; } ;
struct perf_sched {int cmp_pid; int atom_root; } ;
struct perf_sample {int cpu; void* time; } ;
struct machine {int dummy; } ;
struct evsel {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct work_atoms*,void* const,void*) ;
 scalar_t__ FUNC_2 (struct work_atoms*,char,void*) ;
 struct thread* FUNC_3 (struct machine*,int,void* const) ;
 void* FUNC_4 (struct evsel*,struct perf_sample*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct thread*) ;
 scalar_t__ FUNC_7 (struct perf_sched*,struct thread*) ;
 struct work_atoms* FUNC_8 (int *,struct thread*,int *) ;

__attribute__((used)) static int FUNC_9(struct perf_sched *VAR_1,
     struct evsel *VAR_2,
     struct perf_sample *VAR_3,
     struct machine *VAR_4)
{
 const u32 VAR_5 = FUNC_4(VAR_2, VAR_3, "pid");
 const u64 VAR_6 = FUNC_4(VAR_2, VAR_3, "runtime");
 struct thread *VAR_7 = FUNC_3(VAR_4, -1, VAR_5);
 struct work_atoms *VAR_8 = FUNC_8(&VAR_1->atom_root, VAR_7, &VAR_1->cmp_pid);
 u64 VAR_9 = VAR_3->time;
 int VAR_10 = VAR_3->cpu, VAR_11 = -1;

 if (VAR_7 == ((void*)0))
  return -1;

 FUNC_0(VAR_10 >= VAR_0 || VAR_10 < 0);
 if (!VAR_8) {
  if (FUNC_7(VAR_1, VAR_7))
   goto out_put;
  VAR_8 = FUNC_8(&VAR_1->atom_root, VAR_7, &VAR_1->cmp_pid);
  if (!VAR_8) {
   FUNC_5("in-event: Internal tree error");
   goto out_put;
  }
  if (FUNC_2(VAR_8, 'R', VAR_9))
   goto out_put;
 }

 FUNC_1(VAR_8, VAR_6, VAR_9);
 VAR_11 = 0;
out_put:
 FUNC_6(VAR_7);
 return VAR_11;
}
