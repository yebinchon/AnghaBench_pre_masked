
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct obs_source {int context; struct obs_source* next_audio_source; struct obs_source** prev_next_audio_source; } ;
struct TYPE_3__ {int first_source; int sources_mutex; int audio_sources_mutex; struct obs_source* first_audio_source; } ;
struct TYPE_4__ {TYPE_1__ data; } ;


 scalar_t__ FUNC_0 (struct obs_source*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct obs_source *VAR_1)
{
 if (FUNC_0(VAR_1)) {
  FUNC_2(&VAR_0->data.audio_sources_mutex);

  VAR_1->next_audio_source = VAR_0->data.first_audio_source;
  VAR_1->prev_next_audio_source = &VAR_0->data.first_audio_source;
  if (VAR_0->data.first_audio_source)
   VAR_0->data.first_audio_source->prev_next_audio_source =
    &VAR_1->next_audio_source;
  VAR_0->data.first_audio_source = VAR_1;

  FUNC_3(&VAR_0->data.audio_sources_mutex);
 }

 FUNC_1(&VAR_1->context, &VAR_0->data.sources_mutex,
    &VAR_0->data.first_source);
}
