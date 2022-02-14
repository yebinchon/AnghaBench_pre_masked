
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ time_delta; } ;
typedef TYPE_1__ profiler_time_entry ;
typedef scalar_t__ int64_t ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 int64_t VAR_2 = ((profiler_time_entry *)VAR_1)->time_delta -
         ((profiler_time_entry *)VAR_0)->time_delta;
 return VAR_2 < 0 ? -1 : (VAR_2 > 0 ? 1 : 0);
}
