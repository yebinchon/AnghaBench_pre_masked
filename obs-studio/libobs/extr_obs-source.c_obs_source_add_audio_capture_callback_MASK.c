
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct audio_cb_info {void* member_1; int member_0; } ;
struct TYPE_4__ {int audio_cb_mutex; int audio_cb_list; } ;
typedef TYPE_1__ obs_source_t ;
typedef int obs_source_audio_capture_t ;


 int FUNC_0 (int ,struct audio_cb_info*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(obs_source_t *VAR_0,
        obs_source_audio_capture_t VAR_1,
        void *VAR_2)
{
 struct audio_cb_info VAR_3 = {VAR_1, VAR_2};

 if (!FUNC_1(VAR_0, "obs_source_add_audio_capture_callback"))
  return;

 FUNC_2(&VAR_0->audio_cb_mutex);
 FUNC_0(VAR_0->audio_cb_list, &VAR_3);
 FUNC_3(&VAR_0->audio_cb_mutex);
}
