
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {struct device* dev; } ;
struct device {int dummy; } ;
struct da7213_platform_data {int dmic_clk_rate; int dmic_samplephase; int dmic_data_sel; void* micbias2_lvl; void* micbias1_lvl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,char const*) ;
 int FUNC_2 (struct snd_soc_component*,char const*) ;
 void* FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct device*,char*,char const**) ;
 scalar_t__ FUNC_5 (struct device*,char*,int *) ;
 struct da7213_platform_data* FUNC_6 (struct device*,int,int ) ;

__attribute__((used)) static struct da7213_platform_data
 *FUNC_7(struct snd_soc_component *VAR_5)
{
 struct device *VAR_6 = VAR_5->dev;
 struct da7213_platform_data *VAR_7;
 const char *VAR_8;
 u32 VAR_9;

 VAR_7 = FUNC_6(VAR_5->dev, sizeof(*VAR_7), VAR_4);
 if (!VAR_7)
  return ((void*)0);

 if (FUNC_5(VAR_6, "dlg,micbias1-lvl", &VAR_9) >= 0)
  VAR_7->micbias1_lvl = FUNC_3(VAR_5, VAR_9);
 else
  VAR_7->micbias1_lvl = VAR_3;

 if (FUNC_5(VAR_6, "dlg,micbias2-lvl", &VAR_9) >= 0)
  VAR_7->micbias2_lvl = FUNC_3(VAR_5, VAR_9);
 else
  VAR_7->micbias2_lvl = VAR_3;

 if (!FUNC_4(VAR_6, "dlg,dmic-data-sel", &VAR_8))
  VAR_7->dmic_data_sel = FUNC_1(VAR_5, VAR_8);
 else
  VAR_7->dmic_data_sel = VAR_1;

 if (!FUNC_4(VAR_6, "dlg,dmic-samplephase", &VAR_8))
  VAR_7->dmic_samplephase =
   FUNC_2(VAR_5, VAR_8);
 else
  VAR_7->dmic_samplephase = VAR_2;

 if (FUNC_5(VAR_6, "dlg,dmic-clkrate", &VAR_9) >= 0)
  VAR_7->dmic_clk_rate = FUNC_0(VAR_5, VAR_9);
 else
  VAR_7->dmic_clk_rate = VAR_0;

 return VAR_7;
}
