
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_output {int audio; int * audio_encoders; } ;


 size_t FUNC_0 (struct obs_output const*) ;

__attribute__((used)) static inline bool FUNC_1(const struct obs_output *VAR_0, bool VAR_1)
{
 if (VAR_1) {
  size_t VAR_2 = FUNC_0(VAR_0);
  if (!VAR_2)
   return 0;

  for (size_t VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
   if (!VAR_0->audio_encoders[VAR_3]) {
    return 0;
   }
  }
 } else {
  if (!VAR_0->audio)
   return 0;
 }

 return 1;
}
