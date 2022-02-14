
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct obs_source_audio {scalar_t__ samples_per_sec; scalar_t__ format; scalar_t__ speakers; int timestamp; int frames; int const* const* data; } ;
typedef int output ;
struct TYPE_11__ {scalar_t__ samples_per_sec; scalar_t__ format; scalar_t__ speakers; } ;
struct TYPE_12__ {float balance; int flags; TYPE_2__ sample_info; int resample_offset; scalar_t__ resampler; scalar_t__ audio_failed; } ;
typedef TYPE_3__ obs_source_t ;
struct TYPE_10__ {int audio; } ;
struct TYPE_13__ {TYPE_1__ audio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int **,int *,int *,int const* const*,int ) ;
 int FUNC_2 (TYPE_3__*,int const* const*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int **,int ,int) ;
 TYPE_7__* VAR_4 ;
 int FUNC_5 (TYPE_3__*,int ,float,int ) ;
 int FUNC_6 (TYPE_3__*,struct obs_source_audio const*) ;

__attribute__((used)) static void FUNC_7(obs_source_t *VAR_5,
     const struct obs_source_audio *VAR_6)
{
 uint32_t VAR_7 = VAR_6->frames;
 bool VAR_8;

 if (VAR_5->sample_info.samples_per_sec != VAR_6->samples_per_sec ||
     VAR_5->sample_info.format != VAR_6->format ||
     VAR_5->sample_info.speakers != VAR_6->speakers)
  FUNC_6(VAR_5, VAR_6);

 if (VAR_5->audio_failed)
  return;

 if (VAR_5->resampler) {
  uint8_t *VAR_9[VAR_0];

  FUNC_4(VAR_9, 0, sizeof(VAR_9));

  FUNC_1(VAR_5->resampler, VAR_9, &VAR_7,
      &VAR_5->resample_offset, VAR_6->data,
      VAR_6->frames);

  FUNC_2(VAR_5, (const uint8_t *const *)VAR_9, VAR_7,
    VAR_6->timestamp);
 } else {
  FUNC_2(VAR_5, VAR_6->data, VAR_6->frames,
    VAR_6->timestamp);
 }

 VAR_8 = FUNC_0(VAR_4->audio.audio) == 1;

 if (!VAR_8 && VAR_5->sample_info.speakers == VAR_3 &&
     (VAR_5->balance > 0.51f || VAR_5->balance < 0.49f)) {
  FUNC_5(VAR_5, VAR_7, VAR_5->balance,
     VAR_1);
 }

 if (!VAR_8 && (VAR_5->flags & VAR_2) != 0)
  FUNC_3(VAR_5, VAR_7);
}
