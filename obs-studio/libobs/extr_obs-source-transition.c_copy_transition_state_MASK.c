
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct transition_state {int transitioning_audio; int transitioning_video; int * s; } ;
struct TYPE_3__ {int transitioning_audio; int transitioning_video; int * transition_sources; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(obs_source_t *VAR_0,
      struct transition_state *VAR_1)
{
 VAR_1->s[0] = VAR_0->transition_sources[0];
 VAR_1->s[1] = VAR_0->transition_sources[1];
 FUNC_0(VAR_1->s[0]);
 FUNC_0(VAR_1->s[1]);

 VAR_1->transitioning_video = VAR_0->transitioning_video;
 VAR_1->transitioning_audio = VAR_0->transitioning_audio;
}
