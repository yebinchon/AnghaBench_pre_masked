
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
struct TYPE_5__ {int (* encoded_packet ) (int ,int *) ;} ;
struct obs_output {int interleaved_mutex; TYPE_3__ context; TYPE_2__ info; } ;
struct TYPE_4__ {size_t num; struct obs_output** array; } ;
struct obs_encoder {int initialized; int callbacks_mutex; int callbacks; int outputs_mutex; TYPE_1__ outputs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct obs_output*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct obs_encoder*,int) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct obs_encoder *VAR_0)
{
 if (VAR_0) {
  FUNC_2(&VAR_0->outputs_mutex);
  for (size_t VAR_1 = 0; VAR_1 < VAR_0->outputs.num; VAR_1++) {
   struct obs_output *VAR_2 = VAR_0->outputs.array[VAR_1];
   FUNC_1(VAR_2);

   FUNC_2(&VAR_2->interleaved_mutex);
   VAR_2->info.encoded_packet(VAR_2->context.data, ((void*)0));
   FUNC_3(&VAR_2->interleaved_mutex);
  }
  FUNC_3(&VAR_0->outputs_mutex);

  FUNC_2(&VAR_0->callbacks_mutex);
  FUNC_0(VAR_0->callbacks);
  FUNC_3(&VAR_0->callbacks_mutex);

  FUNC_4(VAR_0, 0);
  VAR_0->initialized = 0;
 }
}
