
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct audio_monitor {int paused; int wait_size; int buffer_size; int mutex; int queue; TYPE_1__ empty_buffers; } ;
typedef int buf ;
typedef int AudioQueueRef ;
typedef int AudioQueueBufferRef ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (struct audio_monitor*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_0, AudioQueueRef VAR_1, AudioQueueBufferRef VAR_2)
{
 struct audio_monitor *VAR_3 = VAR_0;

 FUNC_4(&VAR_3->mutex);
 FUNC_2(&VAR_3->empty_buffers, &VAR_2, sizeof(VAR_2));
 while (VAR_3->empty_buffers.size > 0) {
  if (!FUNC_3(VAR_3)) {
   break;
  }
 }
 if (VAR_3->empty_buffers.size == sizeof(VAR_2) * 3) {
  VAR_3->paused = 1;
  VAR_3->wait_size = VAR_3->buffer_size * 3;
  FUNC_0(VAR_3->queue);
 }
 FUNC_5(&VAR_3->mutex);

 FUNC_1(VAR_1);
}
