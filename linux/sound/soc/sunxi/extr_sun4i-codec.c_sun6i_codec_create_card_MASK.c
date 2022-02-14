
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {char* name; int fully_routed; int num_dapm_widgets; int dapm_widgets; struct device* dev; int dai_link; int num_links; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct snd_soc_card* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct device*,char*,int) ;
 struct snd_soc_card* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct snd_soc_card*,char*) ;
 int FUNC_5 (struct device*,int *) ;
 int VAR_2 ;

__attribute__((used)) static struct snd_soc_card *FUNC_6(struct device *VAR_3)
{
 struct snd_soc_card *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_3, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_1(-VAR_0);

 VAR_4->dai_link = FUNC_5(VAR_3, &VAR_4->num_links);
 if (!VAR_4->dai_link)
  return FUNC_1(-VAR_0);

 VAR_4->dev = VAR_3;
 VAR_4->name = "A31 Audio Codec";
 VAR_4->dapm_widgets = VAR_2;
 VAR_4->num_dapm_widgets = FUNC_0(VAR_2);
 VAR_4->fully_routed = 1;

 VAR_5 = FUNC_4(VAR_4, "allwinner,audio-routing");
 if (VAR_5)
  FUNC_2(VAR_3, "failed to parse audio-routing: %d\n", VAR_5);

 return VAR_4;
}
