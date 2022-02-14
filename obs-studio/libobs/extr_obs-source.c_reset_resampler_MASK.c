
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resample_info {scalar_t__ format; scalar_t__ samples_per_sec; scalar_t__ speakers; } ;
struct obs_source_audio {scalar_t__ format; scalar_t__ samples_per_sec; scalar_t__ speakers; } ;
struct audio_output_info {scalar_t__ format; scalar_t__ samples_per_sec; scalar_t__ speakers; } ;
struct TYPE_9__ {scalar_t__ format; scalar_t__ samples_per_sec; scalar_t__ speakers; } ;
struct TYPE_7__ {int audio_failed; int * resampler; TYPE_5__ sample_info; scalar_t__ resample_offset; } ;
typedef TYPE_2__ obs_source_t ;
struct TYPE_6__ {int audio; } ;
struct TYPE_8__ {TYPE_1__ audio; } ;


 int VAR_0 ;
 struct audio_output_info* FUNC_0 (int ) ;
 int * FUNC_1 (struct resample_info*,TYPE_5__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 TYPE_4__* VAR_1 ;

__attribute__((used)) static inline void FUNC_4(obs_source_t *VAR_2,
       const struct obs_source_audio *VAR_3)
{
 const struct audio_output_info *VAR_4;
 struct resample_info VAR_5;

 VAR_4 = FUNC_0(VAR_1->audio.audio);

 VAR_5.format = VAR_4->format;
 VAR_5.samples_per_sec = VAR_4->samples_per_sec;
 VAR_5.speakers = VAR_4->speakers;

 VAR_2->sample_info.format = VAR_3->format;
 VAR_2->sample_info.samples_per_sec = VAR_3->samples_per_sec;
 VAR_2->sample_info.speakers = VAR_3->speakers;

 FUNC_2(VAR_2->resampler);
 VAR_2->resampler = ((void*)0);
 VAR_2->resample_offset = 0;

 if (VAR_2->sample_info.samples_per_sec == VAR_4->samples_per_sec &&
     VAR_2->sample_info.format == VAR_4->format &&
     VAR_2->sample_info.speakers == VAR_4->speakers) {
  VAR_2->audio_failed = 0;
  return;
 }

 VAR_2->resampler =
  FUNC_1(&VAR_5, &VAR_2->sample_info);

 VAR_2->audio_failed = VAR_2->resampler == ((void*)0);
 if (VAR_2->resampler == ((void*)0))
  FUNC_3(VAR_0, "creation of resampler failed");
}
