
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noise_suppress_data {size_t channels; int output_data; int info_buffer; struct noise_suppress_data** copy_buffers; struct noise_suppress_data** segment_buffers; int * output_buffers; int * input_buffers; int * states; } ;


 int FUNC_0 (struct noise_suppress_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct noise_suppress_data *VAR_1 = VAR_0;

 for (size_t VAR_2 = 0; VAR_2 < VAR_1->channels; VAR_2++) {
  FUNC_3(VAR_1->states[VAR_2]);
  FUNC_1(&VAR_1->input_buffers[VAR_2]);
  FUNC_1(&VAR_1->output_buffers[VAR_2]);
 }

 FUNC_0(VAR_1->segment_buffers[0]);
 FUNC_0(VAR_1->copy_buffers[0]);
 FUNC_1(&VAR_1->info_buffer);
 FUNC_2(VAR_1->output_data);
 FUNC_0(VAR_1);
}
