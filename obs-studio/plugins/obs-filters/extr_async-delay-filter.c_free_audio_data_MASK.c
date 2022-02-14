
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_audio_data {int dummy; } ;
struct TYPE_2__ {scalar_t__ size; } ;
struct async_delay_data {TYPE_1__ audio_frames; } ;


 int FUNC_0 (TYPE_1__*,struct obs_audio_data*,int) ;
 int FUNC_1 (struct obs_audio_data*) ;

__attribute__((used)) static void FUNC_2(struct async_delay_data *VAR_0)
{
 while (VAR_0->audio_frames.size) {
  struct obs_audio_data VAR_1;

  FUNC_0(&VAR_0->audio_frames, &VAR_1,
        sizeof(struct obs_audio_data));
  FUNC_1(&VAR_1);
 }
}
