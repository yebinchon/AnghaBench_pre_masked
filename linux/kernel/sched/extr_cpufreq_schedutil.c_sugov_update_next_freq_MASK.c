
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sugov_policy {unsigned int next_freq; int last_freq_update_time; } ;



__attribute__((used)) static bool FUNC_0(struct sugov_policy *VAR_0, u64 VAR_1,
       unsigned int VAR_2)
{
 if (VAR_0->next_freq == VAR_2)
  return 0;

 VAR_0->next_freq = VAR_2;
 VAR_0->last_freq_update_time = VAR_1;

 return 1;
}
