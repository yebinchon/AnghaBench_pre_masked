
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct obs_source_audio_mix {TYPE_1__* output; } ;
typedef int obs_source_t ;
struct TYPE_2__ {float** data; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (float*,float*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,struct obs_source_audio_mix*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static inline bool FUNC_5(obs_source_t *VAR_3, uint64_t *VAR_4,
        struct obs_source_audio_mix *VAR_5,
        uint32_t VAR_6, size_t VAR_7,
        size_t VAR_8)
{
 struct obs_source_audio_mix VAR_9;
 uint64_t VAR_10;

 if (FUNC_2(VAR_3))
  return 0;

 VAR_10 = FUNC_4(VAR_3);
 if (!VAR_10)
  return 0;

 FUNC_3(VAR_3, &VAR_9);
 for (size_t VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if ((VAR_6 & (1 << VAR_11)) == 0)
   continue;

  for (size_t VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
   float *VAR_13 = VAR_5->output[VAR_11].data[VAR_12];
   float *VAR_14 = VAR_9.output[VAR_11].data[VAR_12];

   FUNC_1(VAR_13, VAR_14,
          VAR_0 * VAR_1 *
           sizeof(float));
  }
 }

 *VAR_4 = VAR_10;

 FUNC_0(VAR_8);
 return 1;
}
