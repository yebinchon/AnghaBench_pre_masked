
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_component {TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct da7218_priv {scalar_t__ dev_id; } ;
struct da7218_pdata {int hp_diff_single_supply; struct da7218_hpldet_pdata* hpldet_pdata; void* dmic2_clk_rate; void* dmic2_samplephase; void* dmic2_data_sel; void* dmic1_clk_rate; void* dmic1_samplephase; void* dmic1_data_sel; void* mic2_amp_in_sel; void* mic1_amp_in_sel; void* micbias2_lvl; void* micbias1_lvl; } ;
struct da7218_hpldet_pdata {int comp_inv; int hyst; int discharge; int jack_thr; int jack_debounce; int jack_rate; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (struct snd_soc_component*,int ) ;
 void* FUNC_1 (struct snd_soc_component*,char const*) ;
 void* FUNC_2 (struct snd_soc_component*,char const*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ) ;
 void* FUNC_6 (struct snd_soc_component*,char const*) ;
 void* FUNC_7 (struct snd_soc_component*,int ) ;
 void* FUNC_8 (TYPE_1__*,int,int ) ;
 struct device_node* FUNC_9 (struct device_node*,char*) ;
 int FUNC_10 (struct device_node*) ;
 scalar_t__ FUNC_11 (struct device_node*,char*) ;
 int FUNC_12 (struct device_node*,char*,char const**) ;
 scalar_t__ FUNC_13 (struct device_node*,char*,int *) ;
 struct da7218_priv* FUNC_14 (struct snd_soc_component*) ;

__attribute__((used)) static struct da7218_pdata *FUNC_15(struct snd_soc_component *VAR_11)
{
 struct da7218_priv *VAR_12 = FUNC_14(VAR_11);
 struct device_node *VAR_13 = VAR_11->dev->of_node;
 struct device_node *VAR_14;
 struct da7218_pdata *VAR_15;
 struct da7218_hpldet_pdata *VAR_16;
 const char *VAR_17;
 u32 VAR_18;

 VAR_15 = FUNC_8(VAR_11->dev, sizeof(*VAR_15), VAR_10);
 if (!VAR_15)
  return ((void*)0);

 if (FUNC_13(VAR_13, "dlg,micbias1-lvl-millivolt", &VAR_18) >= 0)
  VAR_15->micbias1_lvl = FUNC_7(VAR_11, VAR_18);
 else
  VAR_15->micbias1_lvl = VAR_8;

 if (FUNC_13(VAR_13, "dlg,micbias2-lvl-millivolt", &VAR_18) >= 0)
  VAR_15->micbias2_lvl = FUNC_7(VAR_11, VAR_18);
 else
  VAR_15->micbias2_lvl = VAR_8;

 if (!FUNC_12(VAR_13, "dlg,mic1-amp-in-sel", &VAR_17))
  VAR_15->mic1_amp_in_sel =
   FUNC_6(VAR_11, VAR_17);
 else
  VAR_15->mic1_amp_in_sel = VAR_9;

 if (!FUNC_12(VAR_13, "dlg,mic2-amp-in-sel", &VAR_17))
  VAR_15->mic2_amp_in_sel =
   FUNC_6(VAR_11, VAR_17);
 else
  VAR_15->mic2_amp_in_sel = VAR_9;

 if (!FUNC_12(VAR_13, "dlg,dmic1-data-sel", &VAR_17))
  VAR_15->dmic1_data_sel = FUNC_1(VAR_11, VAR_17);
 else
  VAR_15->dmic1_data_sel = VAR_3;

 if (!FUNC_12(VAR_13, "dlg,dmic1-samplephase", &VAR_17))
  VAR_15->dmic1_samplephase =
   FUNC_2(VAR_11, VAR_17);
 else
  VAR_15->dmic1_samplephase = VAR_4;

 if (FUNC_13(VAR_13, "dlg,dmic1-clkrate-hz", &VAR_18) >= 0)
  VAR_15->dmic1_clk_rate = FUNC_0(VAR_11, VAR_18);
 else
  VAR_15->dmic1_clk_rate = VAR_2;

 if (!FUNC_12(VAR_13, "dlg,dmic2-data-sel", &VAR_17))
  VAR_15->dmic2_data_sel = FUNC_1(VAR_11, VAR_17);
 else
  VAR_15->dmic2_data_sel = VAR_3;

 if (!FUNC_12(VAR_13, "dlg,dmic2-samplephase", &VAR_17))
  VAR_15->dmic2_samplephase =
   FUNC_2(VAR_11, VAR_17);
 else
  VAR_15->dmic2_samplephase = VAR_4;

 if (FUNC_13(VAR_13, "dlg,dmic2-clkrate-hz", &VAR_18) >= 0)
  VAR_15->dmic2_clk_rate = FUNC_0(VAR_11, VAR_18);
 else
  VAR_15->dmic2_clk_rate = VAR_2;

 if (VAR_12->dev_id == VAR_0) {
  if (FUNC_11(VAR_13, "dlg,hp-diff-single-supply"))
   VAR_15->hp_diff_single_supply = 1;
 }

 if (VAR_12->dev_id == VAR_1) {
  VAR_14 = FUNC_9(VAR_13, "da7218_hpldet");
  if (!VAR_14)
   return VAR_15;

  VAR_16 = FUNC_8(VAR_11->dev, sizeof(*VAR_16),
         VAR_10);
  if (!VAR_16) {
   FUNC_10(VAR_14);
   return VAR_15;
  }
  VAR_15->hpldet_pdata = VAR_16;

  if (FUNC_13(VAR_14, "dlg,jack-rate-us",
      &VAR_18) >= 0)
   VAR_16->jack_rate =
    FUNC_4(VAR_11, VAR_18);
  else
   VAR_16->jack_rate = VAR_6;

  if (FUNC_13(VAR_14, "dlg,jack-debounce",
      &VAR_18) >= 0)
   VAR_16->jack_debounce =
    FUNC_3(VAR_11, VAR_18);
  else
   VAR_16->jack_debounce =
    VAR_5;

  if (FUNC_13(VAR_14, "dlg,jack-threshold-pct",
      &VAR_18) >= 0)
   VAR_16->jack_thr =
    FUNC_5(VAR_11, VAR_18);
  else
   VAR_16->jack_thr = VAR_7;

  if (FUNC_11(VAR_14, "dlg,comp-inv"))
   VAR_16->comp_inv = 1;

  if (FUNC_11(VAR_14, "dlg,hyst"))
   VAR_16->hyst = 1;

  if (FUNC_11(VAR_14, "dlg,discharge"))
   VAR_16->discharge = 1;

  FUNC_10(VAR_14);
 }

 return VAR_15;
}
