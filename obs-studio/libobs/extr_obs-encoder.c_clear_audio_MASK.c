
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_encoder {size_t planes; int * audio_input_buffer; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct obs_encoder *VAR_0)
{
 for (size_t VAR_1 = 0; VAR_1 < VAR_0->planes; VAR_1++)
  FUNC_0(&VAR_0->audio_input_buffer[VAR_1]);
}
