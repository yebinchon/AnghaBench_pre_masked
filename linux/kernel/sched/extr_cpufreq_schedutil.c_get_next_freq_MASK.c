
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sugov_policy {unsigned int cached_raw_freq; int need_freq_update; unsigned int next_freq; struct cpufreq_policy* policy; } ;
struct TYPE_2__ {unsigned int max_freq; } ;
struct cpufreq_policy {unsigned int cur; TYPE_1__ cpuinfo; } ;


 scalar_t__ FUNC_0 () ;
 unsigned int FUNC_1 (struct cpufreq_policy*,unsigned int) ;
 unsigned int FUNC_2 (unsigned long,unsigned int,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_3(struct sugov_policy *VAR_0,
      unsigned long VAR_1, unsigned long VAR_2)
{
 struct cpufreq_policy *VAR_3 = VAR_0->policy;
 unsigned int VAR_4 = FUNC_0() ?
    VAR_3->cpuinfo.max_freq : VAR_3->cur;

 VAR_4 = FUNC_2(VAR_1, VAR_4, VAR_2);

 if (VAR_4 == VAR_0->cached_raw_freq && !VAR_0->need_freq_update)
  return VAR_0->next_freq;

 VAR_0->need_freq_update = 0;
 VAR_0->cached_raw_freq = VAR_4;
 return FUNC_1(VAR_3, VAR_4);
}
