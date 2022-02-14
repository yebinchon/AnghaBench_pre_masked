
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct audio_data {int frames; scalar_t__ timestamp; int * data; } ;
struct TYPE_9__ {scalar_t__ audio_ts; scalar_t__ last_audio_input_buf_size; TYPE_6__* audio_input_buf; } ;
typedef TYPE_2__ obs_source_t ;
typedef int audio_t ;
struct TYPE_11__ {scalar_t__ size; } ;
struct TYPE_8__ {int * audio; } ;
struct TYPE_10__ {TYPE_1__ audio; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,unsigned long,unsigned long,unsigned long,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_6__*,size_t,int ,size_t) ;
 int FUNC_3 (TYPE_6__*,int *,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;
 TYPE_5__* VAR_2 ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(obs_source_t *VAR_3,
          const struct audio_data *VAR_4)
{
 audio_t *VAR_5 = VAR_2->audio.audio;
 size_t VAR_6;
 size_t VAR_7 = FUNC_0(VAR_5);
 size_t VAR_8 = VAR_4->frames * sizeof(float);

 if (!VAR_3->audio_ts || VAR_4->timestamp < VAR_3->audio_ts)
  FUNC_5(VAR_3, VAR_4->timestamp);

 VAR_6 =
  FUNC_4(VAR_5, VAR_4->timestamp - VAR_3->audio_ts) *
  sizeof(float);
 if ((VAR_6 + VAR_8) > VAR_1)
  return;

 for (size_t VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  FUNC_2(&VAR_3->audio_input_buf[VAR_9], VAR_6,
    VAR_4->data[VAR_9], VAR_8);
  FUNC_3(&VAR_3->audio_input_buf[VAR_9], ((void*)0),
       VAR_3->audio_input_buf[VAR_9].size -
        (VAR_6 + VAR_8));
 }

 VAR_3->last_audio_input_buf_size = 0;
}
