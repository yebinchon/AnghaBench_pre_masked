
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct audio_output_info {int speakers; int format; int samples_per_sec; } ;
struct audio_convert_info {scalar_t__ format; scalar_t__ speakers; scalar_t__ samples_per_sec; int member_2; int member_1; int member_0; } ;
struct TYPE_4__ {int pause; scalar_t__ video_start_ts; scalar_t__ audio_start_ts; int audio_size; scalar_t__ total_audio_frames; int planes; scalar_t__ sample_rate; scalar_t__ audio_conversion_set; struct audio_convert_info audio_conversion; scalar_t__ audio; } ;
typedef TYPE_1__ obs_output_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct audio_output_info* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(obs_output_t *VAR_2)
{
 FUNC_1(VAR_2);

 if (VAR_2->audio) {
  const struct audio_output_info *VAR_3 =
   FUNC_0(VAR_2->audio);
  struct audio_convert_info VAR_4 = VAR_2->audio_conversion;
  struct audio_convert_info VAR_5 = {
   VAR_3->samples_per_sec,
   VAR_3->format,
   VAR_3->speakers,
  };

  if (VAR_2->audio_conversion_set) {
   if (VAR_4.samples_per_sec)
    VAR_5.samples_per_sec = VAR_4.samples_per_sec;
   if (VAR_4.format != VAR_0)
    VAR_5.format = VAR_4.format;
   if (VAR_4.speakers != VAR_1)
    VAR_5.speakers = VAR_4.speakers;
  }

  VAR_2->sample_rate = VAR_5.samples_per_sec;
  VAR_2->planes = FUNC_2(VAR_5.format, VAR_5.speakers);
  VAR_2->total_audio_frames = 0;
  VAR_2->audio_size =
   FUNC_3(VAR_5.format, VAR_5.speakers, 1);
 }

 VAR_2->audio_start_ts = 0;
 VAR_2->video_start_ts = 0;

 FUNC_4(&VAR_2->pause);
}
