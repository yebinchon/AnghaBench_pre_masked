
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {struct device* dev; } ;
struct device {int dummy; } ;
struct da7219_pdata {char** dai_clk_names; int mic_amp_in_sel; int micbias_lvl; int wakeup_source; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char const*) ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,char*,char*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*,char const**) ;
 scalar_t__ FUNC_5 (struct device*,char*,char**,int ) ;
 scalar_t__ FUNC_6 (struct device*,char*,int *) ;
 struct da7219_pdata* FUNC_7 (struct device*,int,int ) ;

__attribute__((used)) static struct da7219_pdata *FUNC_8(struct snd_soc_component *VAR_6)
{
 struct device *VAR_7 = VAR_6->dev;
 struct da7219_pdata *VAR_8;
 const char *VAR_9;
 u32 VAR_10;

 VAR_8 = FUNC_7(VAR_7, sizeof(*VAR_8), VAR_5);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->wakeup_source = FUNC_3(VAR_7, "wakeup-source");

 VAR_8->dai_clk_names[VAR_2] = "da7219-dai-wclk";
 VAR_8->dai_clk_names[VAR_0] = "da7219-dai-bclk";
 if (FUNC_5(VAR_7, "clock-output-names",
           VAR_8->dai_clk_names,
           VAR_1) < 0)
  FUNC_2(VAR_7, "Using default DAI clk names: %s, %s\n",
    VAR_8->dai_clk_names[VAR_2],
    VAR_8->dai_clk_names[VAR_0]);

 if (FUNC_6(VAR_7, "dlg,micbias-lvl", &VAR_10) >= 0)
  VAR_8->micbias_lvl = FUNC_1(VAR_7, VAR_10);
 else
  VAR_8->micbias_lvl = VAR_3;

 if (!FUNC_4(VAR_7, "dlg,mic-amp-in-sel", &VAR_9))
  VAR_8->mic_amp_in_sel = FUNC_0(VAR_7, VAR_9);
 else
  VAR_8->mic_amp_in_sel = VAR_4;

 return VAR_8;
}
