
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noise_suppress_data {size_t channels; float** copy_buffers; int frames; int * output_buffers; scalar_t__** segment_buffers; int * states; int suppress_level; int * input_buffers; } ;
typedef scalar_t__ spx_int16_t ;


 int VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 int FUNC_0 (int *,float*,int) ;
 int FUNC_1 (int *,float*,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,scalar_t__*) ;

__attribute__((used)) static inline void FUNC_4(struct noise_suppress_data *VAR_3)
{

 for (size_t VAR_4 = 0; VAR_4 < VAR_3->channels; VAR_4++)
  FUNC_0(&VAR_3->input_buffers[VAR_4], VAR_3->copy_buffers[VAR_4],
        VAR_3->frames * sizeof(float));


 for (size_t VAR_5 = 0; VAR_5 < VAR_3->channels; VAR_5++)
  FUNC_2(VAR_3->states[VAR_5],
         VAR_0,
         &VAR_3->suppress_level);


 for (size_t VAR_6 = 0; VAR_6 < VAR_3->channels; VAR_6++)
  for (size_t VAR_7 = 0; VAR_7 < VAR_3->frames; VAR_7++) {
   float VAR_8 = VAR_3->copy_buffers[VAR_6][VAR_7];
   if (VAR_8 > 1.0f)
    VAR_8 = 1.0f;
   else if (VAR_8 < -1.0f)
    VAR_8 = -1.0f;
   VAR_3->segment_buffers[VAR_6][VAR_7] =
    (spx_int16_t)(VAR_8 * VAR_2);
  }


 for (size_t VAR_9 = 0; VAR_9 < VAR_3->channels; VAR_9++)
  FUNC_3(VAR_3->states[VAR_9], VAR_3->segment_buffers[VAR_9]);


 for (size_t VAR_10 = 0; VAR_10 < VAR_3->channels; VAR_10++)
  for (size_t VAR_11 = 0; VAR_11 < VAR_3->frames; VAR_11++)
   VAR_3->copy_buffers[VAR_10][VAR_11] =
    (float)VAR_3->segment_buffers[VAR_10][VAR_11] / VAR_1;


 for (size_t VAR_12 = 0; VAR_12 < VAR_3->channels; VAR_12++)
  FUNC_1(&VAR_3->output_buffers[VAR_12], VAR_3->copy_buffers[VAR_12],
        VAR_3->frames * sizeof(float));
}
