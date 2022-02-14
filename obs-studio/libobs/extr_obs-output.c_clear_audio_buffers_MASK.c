
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** audio_buffer; } ;
typedef TYPE_1__ obs_output_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(obs_output_t *VAR_2)
{
 for (size_t VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  for (size_t VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   FUNC_0(&VAR_2->audio_buffer[VAR_3][VAR_4]);
  }
 }
}
