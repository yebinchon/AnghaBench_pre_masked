
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct obs_source_audio {int frames; int speakers; int timestamp; int format; scalar_t__ samples_per_sec; int const** data; int member_0; } ;
struct audio_output_data {scalar_t__* data; } ;
struct TYPE_7__ {int data; } ;
struct TYPE_6__ {int (* audio_mix ) (int ,int *,struct audio_output_data*,size_t,size_t) ;} ;
struct TYPE_8__ {TYPE_2__ context; TYPE_1__ info; scalar_t__* audio_mix_buf; } ;
typedef TYPE_3__ obs_source_t ;
typedef enum speaker_layout { ____Placeholder_speaker_layout } speaker_layout ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (TYPE_3__*,struct obs_source_audio*) ;
 int FUNC_2 (int ,int *,struct audio_output_data*,size_t,size_t) ;

__attribute__((used)) static void FUNC_3(obs_source_t *VAR_2, size_t VAR_3,
    size_t VAR_4)
{
 struct audio_output_data VAR_5;
 struct obs_source_audio VAR_6 = {0};
 bool VAR_7;
 uint64_t VAR_8;

 for (size_t VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_5.data[VAR_9] = VAR_2->audio_mix_buf[VAR_9];
 }

 FUNC_0(VAR_2->audio_mix_buf[0], 0,
        sizeof(float) * VAR_1 * VAR_3);

 VAR_7 = VAR_2->info.audio_mix(VAR_2->context.data, &VAR_8, &VAR_5,
      VAR_3, VAR_4);

 if (!VAR_7)
  return;

 for (size_t VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  VAR_6.data[VAR_10] = (const uint8_t *)VAR_5.data[VAR_10];

 VAR_6.samples_per_sec = (uint32_t)VAR_4;
 VAR_6.frames = VAR_1;
 VAR_6.format = VAR_0;
 VAR_6.speakers = (enum speaker_layout)VAR_3;
 VAR_6.timestamp = VAR_8;

 FUNC_1(VAR_2, &VAR_6);
}
