
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_output {int initialized; int thread; int update_semaphore; int input_mutex; int data_mutex; scalar_t__ frame_time; int info; } ;
typedef struct video_output video_t ;
typedef scalar_t__ uint64_t ;
struct video_output_info {scalar_t__ fps_num; scalar_t__ fps_den; } ;
typedef int pthread_mutexattr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct video_output* FUNC_0 (int) ;
 int FUNC_1 (struct video_output*) ;
 int FUNC_2 (int *,struct video_output_info*,int) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int ,struct video_output*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (struct video_output_info*) ;
 int FUNC_9 (struct video_output*) ;
 int VAR_4 ;

int FUNC_10(video_t **VAR_5, struct video_output_info *VAR_6)
{
 struct video_output *VAR_7;
 pthread_mutexattr_t VAR_8;

 if (!FUNC_8(VAR_6))
  return VAR_2;

 VAR_7 = FUNC_0(sizeof(struct video_output));
 if (!VAR_7)
  goto fail;

 FUNC_2(&VAR_7->info, VAR_6, sizeof(struct video_output_info));
 VAR_7->frame_time = (uint64_t)(1000000000.0 * (double)VAR_6->fps_den /
         (double)VAR_6->fps_num);
 VAR_7->initialized = 0;

 if (FUNC_6(&VAR_8) != 0)
  goto fail;
 if (FUNC_7(&VAR_8, VAR_0) != 0)
  goto fail;
 if (FUNC_5(&VAR_7->data_mutex, &VAR_8) != 0)
  goto fail;
 if (FUNC_5(&VAR_7->input_mutex, &VAR_8) != 0)
  goto fail;
 if (FUNC_3(&VAR_7->update_semaphore, 0) != 0)
  goto fail;
 if (FUNC_4(&VAR_7->thread, ((void*)0), VAR_4, VAR_7) != 0)
  goto fail;

 FUNC_1(VAR_7);

 VAR_7->initialized = 1;
 *VAR_5 = VAR_7;
 return VAR_3;

fail:
 FUNC_9(VAR_7);
 return VAR_1;
}
