
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num; } ;
struct obs_core_video {int gpu_encoder_mutex; int gpu_encode_inactive; TYPE_2__ gpu_encoders; int video; int gpu_encoder_active; } ;
typedef int obs_encoder_t ;
struct TYPE_3__ {struct obs_core_video video; } ;


 int FUNC_0 (TYPE_2__,int **) ;
 int FUNC_1 (struct obs_core_video*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct obs_core_video*) ;
 int FUNC_9 (int ) ;

void FUNC_10(obs_encoder_t *VAR_1)
{
 struct obs_core_video *VAR_2 = &VAR_0->video;
 bool VAR_3 = 0;

 FUNC_4(&VAR_2->gpu_encoder_active);
 FUNC_9(VAR_2->video);

 FUNC_6(&VAR_2->gpu_encoder_mutex);
 FUNC_0(VAR_2->gpu_encoders, &VAR_1);
 if (!VAR_2->gpu_encoders.num)
  VAR_3 = 1;
 FUNC_7(&VAR_2->gpu_encoder_mutex);

 FUNC_5(VAR_2->gpu_encode_inactive);

 if (VAR_3) {
  FUNC_8(VAR_2);

  FUNC_2();
  FUNC_6(&VAR_2->gpu_encoder_mutex);
  FUNC_1(VAR_2);
  FUNC_7(&VAR_2->gpu_encoder_mutex);
  FUNC_3();
 }
}
