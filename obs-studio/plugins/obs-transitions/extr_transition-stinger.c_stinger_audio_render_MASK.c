
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct stinger_info {int media_source; int mix_b; int mix_a; int source; } ;
struct obs_source_audio_mix {TYPE_1__* output; } ;
struct TYPE_2__ {float** data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct obs_source_audio_mix*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__*,struct obs_source_audio_mix*,int,size_t,size_t,int ,int ) ;

__attribute__((used)) static bool FUNC_4(void *VAR_2, uint64_t *VAR_3,
     struct obs_source_audio_mix *VAR_4,
     uint32_t VAR_5, size_t VAR_6,
     size_t VAR_7)
{
 struct stinger_info *VAR_8 = VAR_2;
 uint64_t VAR_9 = 0;

 if (!FUNC_0(VAR_8->media_source)) {
  VAR_9 = FUNC_2(VAR_8->media_source);
  if (!VAR_9)
   return 0;
 }

 bool VAR_10 = FUNC_3(VAR_8->source, VAR_3, VAR_4,
         VAR_5, VAR_6,
         VAR_7, VAR_8->mix_a,
         VAR_8->mix_b);
 if (!VAR_9)
  return VAR_10;

 if (!*VAR_3 || VAR_9 < *VAR_3)
  *VAR_3 = VAR_9;

 struct obs_source_audio_mix VAR_11;
 FUNC_1(VAR_8->media_source, &VAR_11);

 for (size_t VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  if ((VAR_5 & (1 << VAR_12)) == 0)
   continue;

  for (size_t VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
   register float *VAR_14 = VAR_4->output[VAR_12].data[VAR_13];
   register float *VAR_15 = VAR_11.output[VAR_12].data[VAR_13];
   register float *VAR_16 = VAR_15 + VAR_0;

   while (VAR_15 < VAR_16)
    *(VAR_14++) += *(VAR_15++);
  }
 }

 return 1;
}
