
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*,char*,int,int *,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int *,int) ;
 int FUNC_4 (struct snd_soc_component*,int *,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_pcm_runtime *VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_8->codec_dai->component;


 FUNC_1(VAR_8->card, "Headphone", VAR_1,
         &VAR_4, VAR_5, FUNC_0(VAR_5));
 FUNC_3(VAR_9, VAR_3, &VAR_4, VAR_1);


 FUNC_1(VAR_8->card, "Microphone",
         VAR_2 | VAR_0, &VAR_6,
         VAR_7, FUNC_0(VAR_7));
 FUNC_4(VAR_9, &VAR_6, VAR_2,
          VAR_0);

 FUNC_2(&VAR_8->card->dapm, "Mic Bias");

 return 0;
}
