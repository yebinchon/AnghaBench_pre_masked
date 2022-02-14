
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct obs_encoder {int wait_for_video; int init_mutex; struct obs_encoder* paired_encoder; int active; } ;
struct TYPE_4__ {struct obs_encoder* video_encoder; } ;
typedef TYPE_1__ obs_output_t ;


 struct obs_encoder* FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(obs_output_t *VAR_0, size_t VAR_1)
{
 struct obs_encoder *VAR_2 = VAR_0->video_encoder;
 struct obs_encoder *VAR_3 =
  FUNC_0(VAR_0, VAR_1);

 if (VAR_2 && VAR_3) {
  FUNC_1(&VAR_3->init_mutex);
  FUNC_1(&VAR_2->init_mutex);

  if (!VAR_3->active && !VAR_2->active &&
      !VAR_2->paired_encoder && !VAR_3->paired_encoder) {

   VAR_3->wait_for_video = 1;
   VAR_3->paired_encoder = VAR_2;
   VAR_2->paired_encoder = VAR_3;
  }

  FUNC_2(&VAR_2->init_mutex);
  FUNC_2(&VAR_3->init_mutex);
 }
}
