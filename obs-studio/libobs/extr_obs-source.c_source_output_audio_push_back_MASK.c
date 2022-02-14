
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct audio_data {int frames; int * data; } ;
struct TYPE_7__ {scalar_t__ last_audio_input_buf_size; TYPE_5__* audio_input_buf; } ;
typedef TYPE_2__ obs_source_t ;
typedef int audio_t ;
struct TYPE_9__ {scalar_t__ size; } ;
struct TYPE_6__ {int * audio; } ;
struct TYPE_8__ {TYPE_1__ audio; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*,int ,size_t) ;
 TYPE_4__* VAR_1 ;

__attribute__((used)) static inline void FUNC_2(obs_source_t *VAR_2,
       const struct audio_data *VAR_3)
{
 audio_t *VAR_4 = VAR_1->audio.audio;
 size_t VAR_5 = FUNC_0(VAR_4);
 size_t VAR_6 = VAR_3->frames * sizeof(float);


 if ((VAR_2->audio_input_buf[0].size + VAR_6) > VAR_0)
  return;

 for (size_t VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  FUNC_1(&VAR_2->audio_input_buf[VAR_7], VAR_3->data[VAR_7],
        VAR_6);



 VAR_2->last_audio_input_buf_size = 0;
}
