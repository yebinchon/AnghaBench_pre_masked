
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ audio_ts; int audio_pending; } ;
typedef TYPE_1__ obs_source_t ;



__attribute__((used)) static inline uint64_t FUNC_0(obs_source_t *VAR_0[2])
{
 uint64_t VAR_1 = 0;

 for (size_t VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  if (VAR_0[VAR_2] && !VAR_0[VAR_2]->audio_pending) {
   if (!VAR_1 || VAR_0[VAR_2]->audio_ts < VAR_1)
    VAR_1 = VAR_0[VAR_2]->audio_ts;
  }
 }

 return VAR_1;
}
