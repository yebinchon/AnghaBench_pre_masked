
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int num_dapm_widgets; int dapm_widgets; struct device* dev; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct apq8016_sbc_data {struct apq8016_sbc_data* spkr_iomux; struct apq8016_sbc_data* mic_iomux; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct apq8016_sbc_data*) ;
 int FUNC_2 (struct apq8016_sbc_data*) ;
 int VAR_3 ;
 struct apq8016_sbc_data* FUNC_3 (struct snd_soc_card*) ;
 int FUNC_4 (struct device*,char*,int) ;
 void* FUNC_5 (struct device*,struct resource*) ;
 struct snd_soc_card* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,struct snd_soc_card*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,char*) ;
 int FUNC_9 (struct snd_soc_card*,struct apq8016_sbc_data*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct snd_soc_card *VAR_6;
 struct apq8016_sbc_data *VAR_7;
 struct resource *VAR_8;

 VAR_6 = FUNC_6(VAR_5, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->dev = VAR_5;
 VAR_6->dapm_widgets = VAR_3;
 VAR_6->num_dapm_widgets = FUNC_0(VAR_3);
 VAR_7 = FUNC_3(VAR_6);
 if (FUNC_1(VAR_7)) {
  FUNC_4(&VAR_4->dev, "Error resolving dai links: %ld\n",
   FUNC_2(VAR_7));
  return FUNC_2(VAR_7);
 }

 VAR_8 = FUNC_8(VAR_4, VAR_2, "mic-iomux");
 VAR_7->mic_iomux = FUNC_5(VAR_5, VAR_8);
 if (FUNC_1(VAR_7->mic_iomux))
  return FUNC_2(VAR_7->mic_iomux);

 VAR_8 = FUNC_8(VAR_4, VAR_2, "spkr-iomux");
 VAR_7->spkr_iomux = FUNC_5(VAR_5, VAR_8);
 if (FUNC_1(VAR_7->spkr_iomux))
  return FUNC_2(VAR_7->spkr_iomux);

 FUNC_9(VAR_6, VAR_7);

 return FUNC_7(&VAR_4->dev, VAR_6);
}
