
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct perf_sample {int cpu; int addr; int cpumode; } ;
struct addr_location {int addr; scalar_t__ map; int * sym; int cpu; } ;


 int * FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct thread*,int ,int ,struct addr_location*) ;

void FUNC_2(struct thread *VAR_0, struct addr_location *VAR_1,
       struct perf_sample *VAR_2)
{
 FUNC_1(VAR_0, VAR_2->cpumode, VAR_2->addr, VAR_1);

 VAR_1->cpu = VAR_2->cpu;
 VAR_1->sym = ((void*)0);

 if (VAR_1->map)
  VAR_1->sym = FUNC_0(VAR_1->map, VAR_1->addr);
}
