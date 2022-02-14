
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_output {int connecting; int start_thread; scalar_t__ total_bytes; scalar_t__ video_start_ts; scalar_t__ audio_start_ts; int stopping; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int ,struct ffmpeg_output*) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_2(void *VAR_1)
{
 struct ffmpeg_output *VAR_2 = VAR_1;
 int VAR_3;

 if (VAR_2->connecting)
  return 0;

 FUNC_0(&VAR_2->stopping, 0);
 VAR_2->audio_start_ts = 0;
 VAR_2->video_start_ts = 0;
 VAR_2->total_bytes = 0;

 VAR_3 = FUNC_1(&VAR_2->start_thread, ((void*)0), VAR_0, VAR_2);
 return (VAR_2->connecting = (VAR_3 == 0));
}
