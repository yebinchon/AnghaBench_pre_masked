
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct async_delay_data {scalar_t__ interval; int reset_audio; int reset_video; int video_delay_reached; int audio_delay_reached; int context; } ;
typedef int obs_data_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct async_delay_data*,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, obs_data_t *VAR_3)
{
 struct async_delay_data *VAR_4 = VAR_2;
 uint64_t VAR_5 =
  (uint64_t)FUNC_1(VAR_3, VAR_1) *
  VAR_0;

 if (VAR_5 < VAR_4->interval)
  FUNC_0(VAR_4, FUNC_2(VAR_4->context));

 VAR_4->reset_audio = 1;
 VAR_4->reset_video = 1;
 VAR_4->interval = VAR_5;
 VAR_4->video_delay_reached = 0;
 VAR_4->audio_delay_reached = 0;
}
