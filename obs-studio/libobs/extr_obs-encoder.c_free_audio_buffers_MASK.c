
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_encoder {int ** audio_output_buffer; int * audio_input_buffer; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct obs_encoder *VAR_1)
{
 for (size_t VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_1(&VAR_1->audio_input_buffer[VAR_2]);
  FUNC_0(VAR_1->audio_output_buffer[VAR_2]);
  VAR_1->audio_output_buffer[VAR_2] = ((void*)0);
 }
}
