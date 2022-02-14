
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sugov_policy {int limits_changed; int need_freq_update; scalar_t__ last_freq_update_time; scalar_t__ freq_update_delay_ns; TYPE_1__* policy; } ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {scalar_t__ fast_switch_enabled; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct sugov_policy *VAR_0, u64 VAR_1)
{
 s64 VAR_2;
 if (VAR_0->policy->fast_switch_enabled &&
     !FUNC_0(VAR_0->policy))
  return 0;

 if (FUNC_1(VAR_0->limits_changed)) {
  VAR_0->limits_changed = 0;
  VAR_0->need_freq_update = 1;
  return 1;
 }

 VAR_2 = VAR_1 - VAR_0->last_freq_update_time;

 return VAR_2 >= VAR_0->freq_update_delay_ns;
}
