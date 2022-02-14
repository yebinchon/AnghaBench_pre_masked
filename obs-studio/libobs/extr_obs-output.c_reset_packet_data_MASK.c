
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int received_audio; int received_video; scalar_t__* audio_offsets; scalar_t__ video_offset; scalar_t__ highest_video_ts; scalar_t__ highest_audio_ts; } ;
typedef TYPE_1__ obs_output_t ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(obs_output_t *VAR_1)
{
 VAR_1->received_audio = 0;
 VAR_1->received_video = 0;
 VAR_1->highest_audio_ts = 0;
 VAR_1->highest_video_ts = 0;
 VAR_1->video_offset = 0;

 for (size_t VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->audio_offsets[VAR_2] = 0;

 FUNC_0(VAR_1);
}
