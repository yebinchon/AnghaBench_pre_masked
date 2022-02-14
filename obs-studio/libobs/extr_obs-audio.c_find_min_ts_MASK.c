
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct obs_source {scalar_t__ audio_ts; scalar_t__ next_audio_source; int audio_pending; } ;
struct obs_core_data {struct obs_source* first_audio_source; } ;
typedef struct obs_source obs_source_t ;


 char const* FUNC_0 (struct obs_source*) ;

__attribute__((used)) static inline const char *FUNC_1(struct obs_core_data *VAR_0,
          uint64_t *VAR_1)
{
 obs_source_t *VAR_2 = ((void*)0);
 struct obs_source *VAR_3 = VAR_0->first_audio_source;
 while (VAR_3) {
  if (!VAR_3->audio_pending && VAR_3->audio_ts &&
      VAR_3->audio_ts < *VAR_1) {
   *VAR_1 = VAR_3->audio_ts;
   VAR_2 = VAR_3;
  }

  VAR_3 = (struct obs_source *)VAR_3->next_audio_source;
 }
 return VAR_2 ? FUNC_0(VAR_2) : ((void*)0);
}
