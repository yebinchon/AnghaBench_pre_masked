
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_encoder {size_t planes; int * audio_input_buffer; } ;
struct audio_data {scalar_t__* data; } ;


 int FUNC_0 (int *,scalar_t__,size_t) ;

__attribute__((used)) static inline void FUNC_1(struct obs_encoder *VAR_0,
       struct audio_data *VAR_1, size_t VAR_2,
       size_t VAR_3)
{
 VAR_2 -= VAR_3;


 if (VAR_2)
  for (size_t VAR_4 = 0; VAR_4 < VAR_0->planes; VAR_4++)
   FUNC_0(&VAR_0->audio_input_buffer[VAR_4],
         VAR_1->data[VAR_4] + VAR_3, VAR_2);
}
