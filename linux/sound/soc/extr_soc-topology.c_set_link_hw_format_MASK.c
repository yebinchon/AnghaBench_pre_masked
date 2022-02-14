
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_tplg_link_config {scalar_t__ default_hw_config_id; struct snd_soc_tplg_hw_config* hw_config; int num_hw_configs; } ;
struct snd_soc_tplg_hw_config {scalar_t__ id; int clock_gated; unsigned char invert_bclk; unsigned char invert_fsync; scalar_t__ bclk_master; scalar_t__ fsync_master; int fmt; } ;
struct snd_soc_dai_link {int dai_fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;


 scalar_t__ VAR_12 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct snd_soc_dai_link *VAR_13,
   struct snd_soc_tplg_link_config *VAR_14)
{
 struct snd_soc_tplg_hw_config *VAR_15;
 unsigned char VAR_16, VAR_17;
 unsigned char VAR_18, VAR_19;
 int VAR_20;

 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_14->num_hw_configs); VAR_20++) {
  VAR_15 = &VAR_14->hw_config[VAR_20];
  if (VAR_15->id != VAR_14->default_hw_config_id)
   continue;

  VAR_13->dai_fmt = FUNC_0(VAR_15->fmt) &
   VAR_5;


  switch (VAR_15->clock_gated) {
  case 128:
   VAR_13->dai_fmt |= VAR_6;
   break;

  case 129:
   VAR_13->dai_fmt |= VAR_4;
   break;

  default:

   break;
  }


  VAR_18 = VAR_15->invert_bclk;
  VAR_19 = VAR_15->invert_fsync;
  if (!VAR_18 && !VAR_19)
   VAR_13->dai_fmt |= VAR_10;
  else if (!VAR_18 && VAR_19)
   VAR_13->dai_fmt |= VAR_9;
  else if (VAR_18 && !VAR_19)
   VAR_13->dai_fmt |= VAR_8;
  else
   VAR_13->dai_fmt |= VAR_7;


  VAR_16 = (VAR_15->bclk_master ==
          VAR_11);
  VAR_17 = (VAR_15->fsync_master ==
    VAR_12);
  if (VAR_16 && VAR_17)
   VAR_13->dai_fmt |= VAR_0;
  else if (!VAR_16 && VAR_17)
   VAR_13->dai_fmt |= VAR_2;
  else if (VAR_16 && !VAR_17)
   VAR_13->dai_fmt |= VAR_1;
  else
   VAR_13->dai_fmt |= VAR_3;
 }
}
