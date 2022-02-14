
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct video_output_info {int dummy; } ;
struct obs_video_info {scalar_t__ gpu_conversion; int scale_type; int output_height; int output_width; int base_height; int base_width; } ;
struct obs_core_video {int thread_initialized; struct obs_video_info ovi; int video_thread; int gpu_encoder_mutex; int graphics; int video; int scale_type; scalar_t__ gpu_conversion; int output_height; int output_width; int base_height; int base_width; } ;
typedef int pthread_mutexattr_t ;
struct TYPE_3__ {struct obs_core_video video; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct video_output_info*,struct obs_video_info*) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct obs_video_info*) ;
 int FUNC_5 (struct obs_video_info*) ;
 int FUNC_6 (int *,int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int FUNC_10 (struct obs_core_video*,struct obs_video_info*) ;
 int FUNC_11 (int *,struct video_output_info*) ;

__attribute__((used)) static int FUNC_12(struct obs_video_info *VAR_9)
{
 struct obs_core_video *VAR_10 = &VAR_7->video;
 struct video_output_info VAR_11;
 pthread_mutexattr_t VAR_12;
 int VAR_13;

 FUNC_3(&VAR_11, VAR_9);
 VAR_10->base_width = VAR_9->base_width;
 VAR_10->base_height = VAR_9->base_height;
 VAR_10->output_width = VAR_9->output_width;
 VAR_10->output_height = VAR_9->output_height;
 VAR_10->gpu_conversion = VAR_9->gpu_conversion;
 VAR_10->scale_type = VAR_9->scale_type;

 FUNC_10(VAR_10, VAR_9);

 VAR_13 = FUNC_11(&VAR_10->video, &VAR_11);

 if (VAR_13 != VAR_6) {
  if (VAR_13 == VAR_5) {
   FUNC_0(VAR_0, "Invalid video parameters specified");
   return VAR_2;
  } else {
   FUNC_0(VAR_0, "Could not open video output");
  }
  return VAR_1;
 }

 FUNC_1(VAR_10->graphics);

 if (VAR_9->gpu_conversion && !FUNC_4(VAR_9))
  return VAR_1;
 if (!FUNC_5(VAR_9))
  return VAR_1;

 FUNC_2();

 if (FUNC_8(&VAR_12) != 0)
  return VAR_1;
 if (FUNC_9(&VAR_12, VAR_4) != 0)
  return VAR_1;
 if (FUNC_7(&VAR_10->gpu_encoder_mutex, ((void*)0)) < 0)
  return VAR_1;

 VAR_13 = FUNC_6(&VAR_10->video_thread, ((void*)0),
       VAR_8, VAR_7);
 if (VAR_13 != 0)
  return VAR_1;

 VAR_10->thread_initialized = 1;
 VAR_10->ovi = *VAR_9;
 return VAR_3;
}
