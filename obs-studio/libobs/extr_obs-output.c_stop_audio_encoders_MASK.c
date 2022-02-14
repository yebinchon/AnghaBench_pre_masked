
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * audio_encoders; } ;
typedef TYPE_1__ obs_output_t ;
typedef int encoded_callback_t ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_2(obs_output_t *VAR_0,
           encoded_callback_t VAR_1)
{
 size_t VAR_2 = FUNC_0(VAR_0);

 for (size_t VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  FUNC_1(VAR_0->audio_encoders[VAR_3], VAR_1,
     VAR_0);
 }
}
