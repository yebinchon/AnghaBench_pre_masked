
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_card* card; } ;
struct snd_soc_card {int dapm; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct snd_soc_card*,char*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_pcm_runtime *VAR_2)
{
 struct snd_soc_card *VAR_3 = VAR_2->card;
 struct device_node *VAR_4 = VAR_3->dev->of_node;
 int VAR_5;


 FUNC_3(&VAR_3->dapm, VAR_0,
      FUNC_0(VAR_0));

 if (VAR_4) {
  VAR_5 = FUNC_4(VAR_3, "ti,audio-routing");
  if (VAR_5)
   return VAR_5;
 } else {

  FUNC_1(&VAR_3->dapm, VAR_1,
     FUNC_0(VAR_1));
 }


 FUNC_2(&VAR_3->dapm, "MONO_LOUT");
 FUNC_2(&VAR_3->dapm, "HPLCOM");
 FUNC_2(&VAR_3->dapm, "HPRCOM");

 return 0;
}
