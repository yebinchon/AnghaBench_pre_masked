
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_core_video {int gpu_encode_thread_initialized; int gpu_encode_thread; int gpu_encode_semaphore; int gpu_encode_stop; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct obs_core_video *VAR_0)
{
 if (VAR_0->gpu_encode_thread_initialized) {
  FUNC_0(&VAR_0->gpu_encode_stop, 1);
  FUNC_1(VAR_0->gpu_encode_semaphore);
  FUNC_2(VAR_0->gpu_encode_thread, ((void*)0));
  VAR_0->gpu_encode_thread_initialized = 0;
 }
}
