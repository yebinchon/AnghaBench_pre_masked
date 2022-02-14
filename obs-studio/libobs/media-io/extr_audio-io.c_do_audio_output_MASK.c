
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct audio_output {size_t planes; int input_mutex; struct audio_mix* mixes; } ;
struct TYPE_2__ {size_t num; struct audio_input* array; } ;
struct audio_mix {scalar_t__* buffer; TYPE_1__ inputs; } ;
struct audio_input {int param; int (* callback ) (int ,size_t,struct audio_data*) ;} ;
struct audio_data {int timestamp; int frames; int ** data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct audio_input*,struct audio_data*) ;
 int FUNC_3 (int ,size_t,struct audio_data*) ;

__attribute__((used)) static inline void FUNC_4(struct audio_output *VAR_0, size_t VAR_1,
       uint64_t VAR_2, uint32_t VAR_3)
{
 struct audio_mix *VAR_4 = &VAR_0->mixes[VAR_1];
 struct audio_data VAR_5;

 FUNC_0(&VAR_0->input_mutex);

 for (size_t VAR_6 = VAR_4->inputs.num; VAR_6 > 0; VAR_6--) {
  struct audio_input *VAR_7 = VAR_4->inputs.array + (VAR_6 - 1);

  for (size_t VAR_8 = 0; VAR_8 < VAR_0->planes; VAR_8++)
   VAR_5.data[VAR_8] = (uint8_t *)VAR_4->buffer[VAR_8];
  VAR_5.frames = VAR_3;
  VAR_5.timestamp = VAR_2;

  if (FUNC_2(VAR_7, &VAR_5))
   VAR_7->callback(VAR_7->param, VAR_1, &VAR_5);
 }

 FUNC_1(&VAR_0->input_mutex);
}
