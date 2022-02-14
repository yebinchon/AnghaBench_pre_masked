
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t max_probe_count; } ;
typedef TYPE_1__ profile_times_table ;



__attribute__((used)) static inline void FUNC_0(profile_times_table *VAR_0, size_t VAR_1)
{
 VAR_0->max_probe_count =
  VAR_0->max_probe_count < VAR_1 ? VAR_1 : VAR_0->max_probe_count;
}
