
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int transitioning_audio; int transitioning_video; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline bool FUNC_1(obs_source_t *VAR_0)
{
 VAR_0->transitioning_audio = 0;
 if (!VAR_0->transitioning_video) {
  FUNC_0(VAR_0);
  return 1;
 }

 return 0;
}
