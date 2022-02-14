
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_card* card; TYPE_1__* codec_dai; } ;
struct snd_soc_component {int dummy; } ;
struct snd_soc_card {int dummy; } ;
struct abe_twl6040 {scalar_t__ jack_detection; } ;
struct TYPE_2__ {struct snd_soc_component* component; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct snd_soc_pcm_runtime*,int ,int ) ;
 struct abe_twl6040* FUNC_4 (struct snd_soc_card*) ;
 int FUNC_5 (struct snd_soc_card*,char*,int ,int *,int ,int ) ;
 int FUNC_6 (struct snd_soc_component*,int ) ;
 int FUNC_7 (struct snd_soc_component*,int *,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_pcm_runtime *VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_4->codec_dai->component;
 struct snd_soc_card *VAR_6 = VAR_4->card;
 struct abe_twl6040 *VAR_7 = FUNC_4(VAR_6);
 int VAR_8;
 int VAR_9 = 0;





 VAR_8 = FUNC_6(VAR_5, VAR_1);
 FUNC_3(VAR_4, FUNC_1(VAR_8),
     FUNC_2(VAR_8));


 if (VAR_7->jack_detection) {
  VAR_9 = FUNC_5(VAR_4->card, "Headset Jack",
         VAR_0, &VAR_2,
         VAR_3,
         FUNC_0(VAR_3));
  if (VAR_9)
   return VAR_9;

  FUNC_7(VAR_5, &VAR_2, VAR_0);
 }

 return 0;
}
