
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float*** audio_output_buf; } ;
typedef TYPE_1__ obs_source_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(obs_source_t *VAR_1, size_t VAR_2,
         size_t VAR_3, float *VAR_4)
{
 for (size_t VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  register float *VAR_6 = VAR_1->audio_output_buf[VAR_2][VAR_5];
  register float *VAR_7 = VAR_6 + VAR_0;
  register float *VAR_8 = VAR_4;

  while (VAR_6 < VAR_7)
   *(VAR_6++) *= *(VAR_8++);
 }
}
