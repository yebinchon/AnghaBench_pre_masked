
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ transition_start_time; scalar_t__ transition_duration; } ;
typedef TYPE_1__ obs_source_t ;



__attribute__((used)) static float FUNC_0(obs_source_t *VAR_0, uint64_t VAR_1)
{
 uint64_t VAR_2;

 if (VAR_1 <= VAR_0->transition_start_time)
  return 0.0f;

 VAR_2 = VAR_0->transition_duration;
 VAR_1 -= VAR_0->transition_start_time;
 if (VAR_1 >= VAR_2 || VAR_2 == 0)
  return 1.0f;

 return (float)((long double)VAR_1 / (long double)VAR_2);
}
