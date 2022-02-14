
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int (* start ) (struct snd_pcm_substream*) ;int (* stop ) (struct snd_pcm_substream*) ;} ;


 int VAR_0 ;




 TYPE_1__* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 switch (VAR_2) {
 case 130:
 case 131:
  return FUNC_0(VAR_1)->start(VAR_1);
 case 129:
 case 128:
  return FUNC_0(VAR_1)->stop(VAR_1);
 }
 return -VAR_0;
}
