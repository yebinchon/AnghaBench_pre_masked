
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {struct snd_soc_card* dai_link; struct snd_soc_card* card; struct device* dev; int num_dapm_widgets; int dapm_widgets; } ;
struct sdm845_snd_data {struct sdm845_snd_data* dai_link; struct sdm845_snd_data* card; struct device* dev; int num_dapm_widgets; int dapm_widgets; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,struct snd_soc_card*) ;
 int FUNC_3 (struct snd_soc_card*) ;
 struct snd_soc_card* FUNC_4 (int,int ) ;
 int FUNC_5 (struct snd_soc_card*) ;
 int FUNC_6 (struct snd_soc_card*) ;
 int VAR_2 ;
 int FUNC_7 (struct snd_soc_card*,struct snd_soc_card*) ;
 int FUNC_8 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3)
{
 struct snd_soc_card *VAR_4;
 struct sdm845_snd_data *VAR_5;
 struct device *VAR_6 = &VAR_3->dev;
 int VAR_7;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;


 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  VAR_7 = -VAR_0;
  goto data_alloc_fail;
 }

 VAR_4->dapm_widgets = VAR_2;
 VAR_4->num_dapm_widgets = FUNC_0(VAR_2);
 VAR_4->dev = VAR_6;
 FUNC_2(VAR_6, VAR_4);
 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7) {
  FUNC_1(VAR_6, "Error parsing OF data\n");
  goto parse_dt_fail;
 }

 VAR_5->card = VAR_4;
 FUNC_7(VAR_4, VAR_5);

 FUNC_6(VAR_4);
 VAR_7 = FUNC_8(VAR_4);
 if (VAR_7) {
  FUNC_1(VAR_6, "Sound card registration failed\n");
  goto register_card_fail;
 }
 return VAR_7;

register_card_fail:
 FUNC_3(VAR_4->dai_link);
parse_dt_fail:
 FUNC_3(VAR_5);
data_alloc_fail:
 FUNC_3(VAR_4);
 return VAR_7;
}
