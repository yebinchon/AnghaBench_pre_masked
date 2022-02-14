
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_card* card; } ;
struct snd_soc_card {int dapm; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_pcm_runtime *VAR_0)
{
 struct snd_soc_card *VAR_1 = VAR_0->card;


 FUNC_0(&VAR_1->dapm, "GSM Line Out");
 FUNC_0(&VAR_1->dapm, "GSM Line In");
 FUNC_0(&VAR_1->dapm, "Headset Mic");
 FUNC_0(&VAR_1->dapm, "Handset Mic");
 FUNC_0(&VAR_1->dapm, "Stereo Out");
 FUNC_0(&VAR_1->dapm, "Handset Spk");


 FUNC_1(&VAR_1->dapm, "GSM Line Out");
 FUNC_1(&VAR_1->dapm, "GSM Line In");
 FUNC_1(&VAR_1->dapm, "Headset Mic");
 FUNC_1(&VAR_1->dapm, "Handset Mic");
 FUNC_1(&VAR_1->dapm, "Stereo Out");
 FUNC_1(&VAR_1->dapm, "Handset Spk");

 return 0;
}
