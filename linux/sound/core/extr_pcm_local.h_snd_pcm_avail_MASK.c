
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; int runtime; } ;
typedef int snd_pcm_uframes_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline snd_pcm_uframes_t
FUNC_2(struct snd_pcm_substream *VAR_1)
{
 if (VAR_1->stream == VAR_0)
  return FUNC_1(VAR_1->runtime);
 else
  return FUNC_0(VAR_1->runtime);
}
