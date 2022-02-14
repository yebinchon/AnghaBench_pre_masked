
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai_link; } ;
struct snd_soc_dai {int dev; scalar_t__ sample_bits; TYPE_1__* driver; scalar_t__ channels; scalar_t__ rate; } ;
struct snd_pcm_substream {int runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_4__ {scalar_t__ symmetric_samplebits; scalar_t__ symmetric_channels; scalar_t__ symmetric_rates; } ;
struct TYPE_3__ {scalar_t__ symmetric_samplebits; scalar_t__ symmetric_channels; scalar_t__ symmetric_rates; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3,
     struct snd_soc_dai *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_3->private_data;
 int VAR_6;

 if (VAR_4->rate && (VAR_4->driver->symmetric_rates ||
    VAR_5->dai_link->symmetric_rates)) {
  FUNC_0(VAR_4->dev, "ASoC: Symmetry forces %dHz rate\n",
    VAR_4->rate);

  VAR_6 = FUNC_2(VAR_3->runtime,
      VAR_1,
      VAR_4->rate);
  if (VAR_6 < 0) {
   FUNC_1(VAR_4->dev,
    "ASoC: Unable to apply rate constraint: %d\n",
    VAR_6);
   return VAR_6;
  }
 }

 if (VAR_4->channels && (VAR_4->driver->symmetric_channels ||
    VAR_5->dai_link->symmetric_channels)) {
  FUNC_0(VAR_4->dev, "ASoC: Symmetry forces %d channel(s)\n",
    VAR_4->channels);

  VAR_6 = FUNC_2(VAR_3->runtime,
      VAR_0,
      VAR_4->channels);
  if (VAR_6 < 0) {
   FUNC_1(VAR_4->dev,
    "ASoC: Unable to apply channel symmetry constraint: %d\n",
    VAR_6);
   return VAR_6;
  }
 }

 if (VAR_4->sample_bits && (VAR_4->driver->symmetric_samplebits ||
    VAR_5->dai_link->symmetric_samplebits)) {
  FUNC_0(VAR_4->dev, "ASoC: Symmetry forces %d sample bits\n",
    VAR_4->sample_bits);

  VAR_6 = FUNC_2(VAR_3->runtime,
      VAR_2,
      VAR_4->sample_bits);
  if (VAR_6 < 0) {
   FUNC_1(VAR_4->dev,
    "ASoC: Unable to apply sample bits symmetry constraint: %d\n",
    VAR_6);
   return VAR_6;
  }
 }

 return 0;
}
