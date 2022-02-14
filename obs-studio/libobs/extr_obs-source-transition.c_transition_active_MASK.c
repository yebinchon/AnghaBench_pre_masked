
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ transitioning_video; scalar_t__ transitioning_audio; } ;
typedef TYPE_1__ obs_source_t ;



__attribute__((used)) static inline bool FUNC_0(obs_source_t *VAR_0)
{
 return VAR_0->transitioning_audio ||
        VAR_0->transitioning_video;
}
