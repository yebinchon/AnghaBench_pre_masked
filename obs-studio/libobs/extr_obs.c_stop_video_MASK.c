
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_core_video {int thread_initialized; int video_thread; scalar_t__ video; } ;
struct TYPE_2__ {struct obs_core_video video; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,void**) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct obs_core_video *VAR_1 = &VAR_0->video;
 void *VAR_2;

 if (VAR_1->video) {
  FUNC_1(VAR_1->video);
  if (VAR_1->thread_initialized) {
   FUNC_0(VAR_1->video_thread, &VAR_2);
   VAR_1->thread_initialized = 0;
  }
 }
}
