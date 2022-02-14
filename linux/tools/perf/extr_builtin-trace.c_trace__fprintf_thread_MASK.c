
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace {double nr_events; scalar_t__ sched; } ;
struct thread_trace {double nr_events; double pfmaj; double pfmin; double runtime_ms; } ;
struct thread {int tid; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (char,int *) ;
 char* FUNC_2 (struct thread*) ;
 scalar_t__ FUNC_3 (struct thread_trace*,struct trace*,int *) ;
 struct thread_trace* FUNC_4 (struct thread*) ;

__attribute__((used)) static size_t FUNC_5(FILE *VAR_1, struct thread *VAR_2, struct trace *VAR_3)
{
 size_t VAR_4 = 0;
 struct thread_trace *VAR_5 = FUNC_4(VAR_2);
 double VAR_6;

 if (VAR_5 == ((void*)0))
  return 0;

 VAR_6 = (double)VAR_5->nr_events / VAR_3->nr_events * 100.0;

 VAR_4 += FUNC_0(VAR_1, " %s (%d), ", FUNC_2(VAR_2), VAR_2->tid);
 VAR_4 += FUNC_0(VAR_1, "%lu events, ", VAR_5->nr_events);
 VAR_4 += FUNC_0(VAR_1, "%.1f%%", VAR_6);
 if (VAR_5->pfmaj)
  VAR_4 += FUNC_0(VAR_1, ", %lu majfaults", VAR_5->pfmaj);
 if (VAR_5->pfmin)
  VAR_4 += FUNC_0(VAR_1, ", %lu minfaults", VAR_5->pfmin);
 if (VAR_3->sched)
  VAR_4 += FUNC_0(VAR_1, ", %.3f msec\n", VAR_5->runtime_ms);
 else if (FUNC_1('\n', VAR_1) != VAR_0)
  ++VAR_4;

 VAR_4 += FUNC_3(VAR_5, VAR_3, VAR_1);

 return VAR_4;
}
