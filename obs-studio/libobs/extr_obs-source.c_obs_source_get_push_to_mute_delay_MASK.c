
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int audio_mutex; int push_to_mute_delay; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

uint64_t FUNC_3(obs_source_t *VAR_0)
{
 uint64_t VAR_1;
 if (!FUNC_0(VAR_0, "obs_source_get_push_to_mute_delay"))
  return 0;

 FUNC_1(&VAR_0->audio_mutex);
 VAR_1 = VAR_0->push_to_mute_delay;
 FUNC_2(&VAR_0->audio_mutex);

 return VAR_1;
}
