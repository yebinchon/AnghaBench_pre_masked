
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {char* name; void* num_dapm_routes; void* dapm_routes; void* num_dapm_widgets; void* dapm_widgets; struct device* dev; int dai_link; int num_links; } ;
struct device {int dummy; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 struct snd_soc_card* FUNC_1 (int ) ;
 int VAR_1 ;
 struct snd_soc_card* FUNC_2 (struct device*,int,int ) ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_3 (struct device*,int *) ;

__attribute__((used)) static struct snd_soc_card *FUNC_4(struct device *VAR_4)
{
 struct snd_soc_card *VAR_5;

 VAR_5 = FUNC_2(VAR_4, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_1(-VAR_0);

 VAR_5->dai_link = FUNC_3(VAR_4, &VAR_5->num_links);
 if (!VAR_5->dai_link)
  return FUNC_1(-VAR_0);

 VAR_5->dev = VAR_4;
 VAR_5->name = "sun4i-codec";
 VAR_5->dapm_widgets = VAR_3;
 VAR_5->num_dapm_widgets = FUNC_0(VAR_3);
 VAR_5->dapm_routes = VAR_2;
 VAR_5->num_dapm_routes = FUNC_0(VAR_2);

 return VAR_5;
}
