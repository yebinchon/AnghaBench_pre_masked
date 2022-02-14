
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sh_dac {TYPE_1__* pdata; int * substream; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int (* stop ) (TYPE_1__*) ;} ;


 int FUNC_0 (struct snd_sh_dac*) ;
 struct snd_sh_dac* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_sh_dac *VAR_1 = FUNC_1(VAR_0);

 VAR_1->substream = ((void*)0);

 FUNC_0(VAR_1);
 VAR_1->pdata->stop(VAR_1->pdata);

 return 0;
}
