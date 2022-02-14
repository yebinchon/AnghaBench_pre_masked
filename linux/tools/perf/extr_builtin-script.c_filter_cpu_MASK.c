
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {int cpu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct perf_sample *VAR_2)
{
 if (VAR_1)
  return !FUNC_0(VAR_2->cpu, VAR_0);
 return 0;
}
