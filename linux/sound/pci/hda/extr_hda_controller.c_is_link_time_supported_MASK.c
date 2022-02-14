
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int info; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct snd_pcm_audio_tstamp_config {scalar_t__ type_requested; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct snd_pcm_runtime *VAR_2,
    struct snd_pcm_audio_tstamp_config *VAR_3)
{
 if (VAR_2->hw.info & VAR_1)
  if (VAR_3->type_requested == VAR_0)
   return 1;

 return 0;
}
