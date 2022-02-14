
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int pcm_rec; } ;
struct snd_cs46xx {TYPE_1__ capt; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,int *,int ) ;
 struct snd_cs46xx* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_cs46xx *VAR_2 = FUNC_1(VAR_1);
 return FUNC_0(VAR_1, &VAR_2->capt.pcm_rec,
       VAR_0);
}
