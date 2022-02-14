
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {scalar_t__ access; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_substream*,int ,int *,int ,int ,int ) ;
 int FUNC_1 (struct snd_pcm_substream*,int ,int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3,
          snd_pcm_uframes_t VAR_4, snd_pcm_uframes_t VAR_5)
{
 if (VAR_3->runtime->access == VAR_1 ||
     VAR_3->runtime->access == VAR_0)
  return FUNC_0(VAR_3, VAR_4, ((void*)0), 0, VAR_5,
     VAR_2);
 else
  return FUNC_1(VAR_3, VAR_4, ((void*)0), 0, VAR_5,
        VAR_2);
}
