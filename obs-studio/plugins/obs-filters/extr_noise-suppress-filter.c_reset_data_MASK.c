
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noise_suppress_data {size_t channels; int info_buffer; int * output_buffers; int * input_buffers; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct noise_suppress_data *VAR_0)
{
 for (size_t VAR_1 = 0; VAR_1 < VAR_0->channels; VAR_1++) {
  FUNC_0(&VAR_0->input_buffers[VAR_1]);
  FUNC_0(&VAR_0->output_buffers[VAR_1]);
 }

 FUNC_0(&VAR_0->info_buffer);
}
