
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source {float*** audio_output_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float* FUNC_0 (size_t) ;

__attribute__((used)) static void FUNC_1(struct obs_source *VAR_3)
{
 size_t VAR_4 = sizeof(float) * VAR_0 * VAR_1 *
        VAR_2;
 float *VAR_5 = FUNC_0(VAR_4);

 for (size_t VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  size_t VAR_7 = VAR_6 * VAR_0 * VAR_1;

  for (size_t VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   VAR_3->audio_output_buf[VAR_6][VAR_8] =
    VAR_5 + VAR_7 + VAR_0 * VAR_8;
  }
 }
}
