
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int format; unsigned int samples_per_sec; int speakers; scalar_t__* data; } ;
struct vlc_source {TYPE_1__ audio; scalar_t__ audio_capacity; } ;
typedef enum speaker_layout { ____Placeholder_speaker_layout } speaker_layout ;
typedef enum audio_format { ____Placeholder_audio_format } audio_format ;


 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(void **VAR_0, char *VAR_1, unsigned *VAR_2,
       unsigned *VAR_3)
{
 struct vlc_source *VAR_4 = *VAR_0;
 enum audio_format VAR_5;

 VAR_5 = FUNC_1(VAR_1);
 if (*VAR_3 > 2)
  *VAR_3 = 2;


 if (VAR_4->audio.format == VAR_5 &&
     VAR_4->audio.samples_per_sec == *VAR_2 &&
     VAR_4->audio.speakers == (enum speaker_layout) * VAR_3)
  return 0;

 VAR_4->audio_capacity = 0;
 FUNC_0((void *)VAR_4->audio.data[0]);

 FUNC_2(&VAR_4->audio, 0, sizeof(VAR_4->audio));
 VAR_4->audio.speakers = (enum speaker_layout) * VAR_3;
 VAR_4->audio.samples_per_sec = *VAR_2;
 VAR_4->audio.format = VAR_5;
 return 0;
}
