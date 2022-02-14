
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_delay_data {int audio_frames; int video_frames; int audio_output; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct async_delay_data *VAR_1 = VAR_0;

 FUNC_2(&VAR_1->audio_output);
 FUNC_1(&VAR_1->video_frames);
 FUNC_1(&VAR_1->audio_frames);
 FUNC_0(VAR_0);
}
