
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source {float** audio_mix_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 float* FUNC_0 (size_t) ;

__attribute__((used)) static void FUNC_1(struct obs_source *VAR_2)
{
 size_t VAR_3 = sizeof(float) * VAR_0 * VAR_1;
 float *VAR_4 = FUNC_0(VAR_3);

 for (size_t VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_2->audio_mix_buf[VAR_5] = VAR_4 + VAR_0 * VAR_5;
 }
}
