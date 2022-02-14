
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_output {int * audio_encoders; } ;
typedef int encoded_callback_t ;


 size_t FUNC_0 (struct obs_output*) ;
 int FUNC_1 (int ,int ,struct obs_output*) ;

__attribute__((used)) static inline void FUNC_2(struct obs_output *VAR_0,
     encoded_callback_t VAR_1)
{
 size_t VAR_2 = FUNC_0(VAR_0);

 for (size_t VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  FUNC_1(VAR_0->audio_encoders[VAR_3], VAR_1,
      VAR_0);
 }
}
