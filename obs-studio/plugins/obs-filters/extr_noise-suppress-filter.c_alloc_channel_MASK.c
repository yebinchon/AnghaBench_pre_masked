
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct noise_suppress_data {int * output_buffers; int * input_buffers; int * states; } ;


 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct noise_suppress_data *VAR_0,
     uint32_t VAR_1, size_t VAR_2,
     size_t VAR_3)
{
 VAR_0->states[VAR_2] =
  FUNC_1((int)VAR_3, VAR_1);

 FUNC_0(&VAR_0->input_buffers[VAR_2], VAR_3 * sizeof(float));
 FUNC_0(&VAR_0->output_buffers[VAR_2], VAR_3 * sizeof(float));
}
