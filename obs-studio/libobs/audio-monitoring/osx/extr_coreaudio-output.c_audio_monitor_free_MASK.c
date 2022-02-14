
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_monitor {int mutex; int new_data; int empty_buffers; int resampler; scalar_t__ queue; scalar_t__* buffers; scalar_t__ active; scalar_t__ source; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,int ,struct audio_monitor*) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct audio_monitor *VAR_1)
{
 if (VAR_1->source) {
  FUNC_5(
   VAR_1->source, VAR_0, VAR_1);
 }
 if (VAR_1->active) {
  FUNC_2(VAR_1->queue, 1);
 }
 for (size_t VAR_2 = 0; VAR_2 < 3; VAR_2++) {
  if (VAR_1->buffers[VAR_2]) {
   FUNC_1(VAR_1->queue,
          VAR_1->buffers[VAR_2]);
  }
 }
 if (VAR_1->queue) {
  FUNC_0(VAR_1->queue, 1);
 }

 FUNC_3(VAR_1->resampler);
 FUNC_4(&VAR_1->empty_buffers);
 FUNC_4(&VAR_1->new_data);
 FUNC_6(&VAR_1->mutex);
}
