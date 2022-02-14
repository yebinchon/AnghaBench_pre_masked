
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef float (* obs_transition_audio_mix_callback_t ) (void*,float) ;
struct TYPE_5__ {void* data; } ;
struct TYPE_6__ {TYPE_1__ context; } ;
typedef TYPE_2__ obs_source_t ;


 float FUNC_0 (TYPE_2__*,size_t,size_t,int ) ;

__attribute__((used)) static inline void FUNC_1(obs_source_t *VAR_0, float *VAR_1, float *VAR_2,
        size_t VAR_3, size_t VAR_4, uint64_t VAR_5,
        obs_transition_audio_mix_callback_t VAR_6)
{
 void *VAR_7 = VAR_0->context.data;

 for (size_t VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  float VAR_9 = FUNC_0(VAR_0, VAR_4, VAR_8, VAR_5);
  VAR_1[VAR_8] += VAR_2[VAR_8] * VAR_6(VAR_7, VAR_9);
 }
}
