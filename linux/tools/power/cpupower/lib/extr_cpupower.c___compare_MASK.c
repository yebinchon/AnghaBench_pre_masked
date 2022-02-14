
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuid_core_info {scalar_t__ pkg; scalar_t__ core; scalar_t__ cpu; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 struct cpuid_core_info *VAR_2 = (struct cpuid_core_info *)VAR_0;
 struct cpuid_core_info *VAR_3 = (struct cpuid_core_info *)VAR_1;
 if (VAR_2->pkg < VAR_3->pkg)
  return -1;
 else if (VAR_2->pkg > VAR_3->pkg)
  return 1;
 else if (VAR_2->core < VAR_3->core)
  return -1;
 else if (VAR_2->core > VAR_3->core)
  return 1;
 else if (VAR_2->cpu < VAR_3->cpu)
  return -1;
 else if (VAR_2->cpu > VAR_3->cpu)
  return 1;
 else
  return 0;
}
