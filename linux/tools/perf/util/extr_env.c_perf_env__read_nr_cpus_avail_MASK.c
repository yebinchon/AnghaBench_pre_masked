
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_env {scalar_t__ nr_cpus_avail; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct perf_env *VAR_1)
{
 if (VAR_1->nr_cpus_avail == 0)
  VAR_1->nr_cpus_avail = FUNC_0();

 return VAR_1->nr_cpus_avail ? 0 : -VAR_0;
}
