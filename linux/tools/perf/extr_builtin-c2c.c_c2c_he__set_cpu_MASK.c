
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {unsigned int cpu; } ;
struct c2c_hist_entry {int cpuset; } ;


 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct c2c_hist_entry *VAR_0,
       struct perf_sample *VAR_1)
{
 if (FUNC_0(VAR_1->cpu == (unsigned int) -1,
        "WARNING: no sample cpu value"))
  return;

 FUNC_1(VAR_1->cpu, VAR_0->cpuset);
}
