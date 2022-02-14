
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int runtime; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {int pos; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_2(struct snd_pcm_substream *VAR_0)
{
 return FUNC_0(VAR_0->runtime, FUNC_1(VAR_0)->pos);
}
