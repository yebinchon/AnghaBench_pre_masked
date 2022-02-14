
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int audio_mutex; int push_to_talk_delay; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;

void FUNC_4(obs_source_t *VAR_0, uint64_t VAR_1)
{
 if (!FUNC_0(VAR_0, "obs_source_set_push_to_talk_delay"))
  return;

 FUNC_1(&VAR_0->audio_mutex);
 VAR_0->push_to_talk_delay = VAR_1;

 FUNC_3(VAR_0, "push_to_talk_delay", VAR_1);
 FUNC_2(&VAR_0->audio_mutex);
}
