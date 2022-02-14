
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* card; TYPE_1__* codec_dai; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_4__ {int dapm; } ;
struct TYPE_3__ {struct snd_soc_component* component; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_component*,int ,int ,int ,int ) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_pcm_runtime *VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_2->codec_dai->component;

 FUNC_1(&VAR_2->card->dapm, "LINEOUT");


 return FUNC_0(VAR_3, VAR_1, 0,
     VAR_0, 0);
}
