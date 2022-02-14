
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace {int output; scalar_t__ print_sample; } ;
struct thread {int dummy; } ;
struct perf_sample {int pid; int tid; int cpu; scalar_t__ time; } ;
struct evsel {int dummy; } ;


 double VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,char*,double,char*,int,int,int) ;
 char* FUNC_1 (struct evsel*) ;
 char* FUNC_2 (struct thread*) ;

__attribute__((used)) static int FUNC_3(struct trace *VAR_1, struct evsel *VAR_2,
     struct perf_sample *VAR_3, struct thread *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_1->print_sample) {
  double VAR_6 = (double)VAR_3->time / VAR_0;

  VAR_5 += FUNC_0(VAR_1->output, "%22s %10.3f %s %d/%d [%d]\n",
       FUNC_1(VAR_2), VAR_6,
       FUNC_2(VAR_4),
       VAR_3->pid, VAR_3->tid, VAR_3->cpu);
 }

 return VAR_5;
}
