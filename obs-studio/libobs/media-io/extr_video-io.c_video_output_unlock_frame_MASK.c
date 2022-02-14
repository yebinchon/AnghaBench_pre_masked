
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data_mutex; int update_semaphore; int available_frames; } ;
typedef TYPE_1__ video_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(video_t *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_1(&VAR_0->data_mutex);

 VAR_0->available_frames--;
 FUNC_0(VAR_0->update_semaphore);

 FUNC_2(&VAR_0->data_mutex);
}
