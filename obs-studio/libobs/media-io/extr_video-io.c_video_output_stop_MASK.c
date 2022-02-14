
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int initialized; int stop; int thread; int update_semaphore; } ;
typedef TYPE_1__ video_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void**) ;

void FUNC_2(video_t *VAR_0)
{
 void *VAR_1;

 if (!VAR_0)
  return;

 if (VAR_0->initialized) {
  VAR_0->initialized = 0;
  VAR_0->stop = 1;
  FUNC_0(VAR_0->update_semaphore);
  FUNC_1(VAR_0->thread, &VAR_1);
 }
}
