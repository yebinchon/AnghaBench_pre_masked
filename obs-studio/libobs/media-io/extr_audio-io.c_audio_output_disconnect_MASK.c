
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ array; } ;
struct audio_mix {TYPE_2__ inputs; } ;
struct TYPE_5__ {int input_mutex; struct audio_mix* mixes; } ;
typedef TYPE_1__ audio_t ;
typedef int audio_output_callback_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (TYPE_1__*,size_t,int ,void*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(audio_t *VAR_2, size_t VAR_3,
        audio_output_callback_t VAR_4, void *VAR_5)
{
 if (!VAR_2 || VAR_3 >= VAR_1)
  return;

 FUNC_3(&VAR_2->input_mutex);

 size_t VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 != VAR_0) {
  struct audio_mix *VAR_7 = &VAR_2->mixes[VAR_3];
  FUNC_1(VAR_7->inputs.array + VAR_6);
  FUNC_2(VAR_7->inputs, VAR_6);
 }

 FUNC_4(&VAR_2->input_mutex);
}
