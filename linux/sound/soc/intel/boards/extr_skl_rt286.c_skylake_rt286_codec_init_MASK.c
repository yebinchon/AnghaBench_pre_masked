
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


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct snd_soc_component*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,char*,int,int *,int ,int ) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_pcm_runtime *VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_4->codec_dai->component;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4->card, "Headset",
  VAR_1 | VAR_0,
  &VAR_2,
  VAR_3, FUNC_0(VAR_3));

 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_5, &VAR_2);

 FUNC_3(&VAR_4->card->dapm, "SoC DMIC");

 return 0;
}
