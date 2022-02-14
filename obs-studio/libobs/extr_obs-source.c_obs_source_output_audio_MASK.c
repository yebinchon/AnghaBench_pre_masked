
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct obs_source_audio {int dummy; } ;
struct obs_audio_data {int timestamp; int frames; int * data; } ;
struct audio_data {int timestamp; int frames; int * data; } ;
struct TYPE_7__ {int filter_mutex; int audio_mutex; int audio_data; } ;
typedef TYPE_1__ obs_source_t ;


 int VAR_0 ;
 struct obs_audio_data* FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (struct obs_source_audio const*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,struct obs_source_audio const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,struct audio_data*) ;

void FUNC_7(obs_source_t *VAR_1,
        const struct obs_source_audio *VAR_2)
{
 struct obs_audio_data *VAR_3;

 if (!FUNC_2(VAR_1, "obs_source_output_audio"))
  return;
 if (!FUNC_1(VAR_2, "obs_source_output_audio"))
  return;

 FUNC_3(VAR_1, VAR_2);

 FUNC_4(&VAR_1->filter_mutex);
 VAR_3 = FUNC_0(VAR_1, &VAR_1->audio_data);

 if (VAR_3) {
  struct audio_data VAR_4;

  for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   VAR_4.data[VAR_5] = VAR_3->data[VAR_5];

  VAR_4.frames = VAR_3->frames;
  VAR_4.timestamp = VAR_3->timestamp;

  FUNC_4(&VAR_1->audio_mutex);
  FUNC_6(VAR_1, &VAR_4);
  FUNC_5(&VAR_1->audio_mutex);
 }

 FUNC_5(&VAR_1->filter_mutex);
}
