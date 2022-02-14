
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_cpumsf {int dummy; } ;
struct perf_sample {int time; int tid; int pid; int cpu; } ;


 int FUNC_0 (struct s390_cpumsf*,int,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct s390_cpumsf *VAR_0, struct perf_sample *VAR_1)
{
 return FUNC_0(VAR_0, 1, VAR_1->cpu,
           VAR_1->pid, VAR_1->tid, 0,
           VAR_1->time);
}
