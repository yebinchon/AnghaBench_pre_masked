
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * audio_encoders; } ;
typedef TYPE_1__ obs_output_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(obs_output_t *VAR_0,
          size_t VAR_1)
{
 for (size_t VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (!FUNC_0(VAR_0->audio_encoders[VAR_2])) {
   return 0;
  }
 }

 return 1;
}
