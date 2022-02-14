
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_core_audio {float user_volume; int audio; void* monitoring_device_id; void* monitoring_device_name; int monitoring_mutex; } ;
struct audio_output_info {int dummy; } ;
typedef int pthread_mutexattr_t ;
struct TYPE_2__ {struct obs_core_audio audio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct audio_output_info*) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (char*) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static bool FUNC_7(struct audio_output_info *VAR_5)
{
 struct obs_core_audio *VAR_6 = &VAR_4->audio;
 int VAR_7;

 pthread_mutexattr_t VAR_8;

 FUNC_4(&VAR_6->monitoring_mutex);

 if (FUNC_5(&VAR_8) != 0)
  return 0;
 if (FUNC_6(&VAR_8, VAR_3) != 0)
  return 0;
 if (FUNC_3(&VAR_6->monitoring_mutex, &VAR_8) != 0)
  return 0;

 VAR_6->user_volume = 1.0f;

 VAR_6->monitoring_device_name = FUNC_2("Default");
 VAR_6->monitoring_device_id = FUNC_2("default");

 VAR_7 = FUNC_0(&VAR_6->audio, VAR_5);
 if (VAR_7 == VAR_1)
  return 1;
 else if (VAR_7 == VAR_0)
  FUNC_1(VAR_2, "Invalid audio parameters specified");
 else
  FUNC_1(VAR_2, "Could not open audio output");

 return 0;
}
