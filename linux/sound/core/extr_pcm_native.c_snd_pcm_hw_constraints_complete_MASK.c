
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int info; int rates; scalar_t__ buffer_bytes_max; int period_bytes_min; scalar_t__ periods_max; int periods_min; scalar_t__ period_bytes_max; scalar_t__ rate_max; int rate_min; scalar_t__ channels_max; int channels_min; int formats; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_bytes; struct snd_pcm_substream hw; } ;
struct snd_pcm_hardware {int info; int rates; scalar_t__ buffer_bytes_max; int period_bytes_min; scalar_t__ periods_max; int periods_min; scalar_t__ period_bytes_max; scalar_t__ rate_max; int rate_min; scalar_t__ channels_max; int channels_min; int formats; struct snd_pcm_runtime* runtime; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int ) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int ,scalar_t__) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ,int ,int ,struct snd_pcm_substream*,int ,int) ;
 int VAR_20 ;
 int VAR_21 ;

int FUNC_6(struct snd_pcm_substream *VAR_22)
{
 struct snd_pcm_runtime *VAR_23 = VAR_22->runtime;
 struct snd_pcm_hardware *VAR_24 = &VAR_23->hw;
 int VAR_25;
 unsigned int VAR_26 = 0;

        if (VAR_24->info & VAR_15)
  VAR_26 |= 1 << VAR_3;
        if (VAR_24->info & VAR_16)
  VAR_26 |= 1 << VAR_4;
 if (FUNC_0(VAR_22)) {
  if (VAR_24->info & VAR_15)
   VAR_26 |= 1 << VAR_1;
  if (VAR_24->info & VAR_16)
   VAR_26 |= 1 << VAR_2;
  if (VAR_24->info & VAR_14)
   VAR_26 |= 1 << VAR_0;
 }
 VAR_25 = FUNC_2(VAR_23, VAR_5, VAR_26);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_25 = FUNC_3(VAR_23, VAR_8, VAR_24->formats);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_25 = FUNC_2(VAR_23, VAR_13, 1 << VAR_19);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_25 = FUNC_4(VAR_23, VAR_7,
        VAR_24->channels_min, VAR_24->channels_max);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_25 = FUNC_4(VAR_23, VAR_12,
        VAR_24->rate_min, VAR_24->rate_max);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_25 = FUNC_4(VAR_23, VAR_10,
        VAR_24->period_bytes_min, VAR_24->period_bytes_max);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_25 = FUNC_4(VAR_23, VAR_9,
        VAR_24->periods_min, VAR_24->periods_max);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_25 = FUNC_4(VAR_23, VAR_6,
        VAR_24->period_bytes_min, VAR_24->buffer_bytes_max);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_25 = FUNC_5(VAR_23, 0, VAR_6,
      VAR_20, VAR_22,
      VAR_6, -1);
 if (VAR_25 < 0)
  return VAR_25;


 if (VAR_23->dma_bytes) {
  VAR_25 = FUNC_4(VAR_23, VAR_6, 0, VAR_23->dma_bytes);
  if (VAR_25 < 0)
   return VAR_25;
 }

 if (!(VAR_24->rates & (VAR_18 | VAR_17))) {
  VAR_25 = FUNC_5(VAR_23, 0, VAR_12,
       VAR_21, VAR_24,
       VAR_12, -1);
  if (VAR_25 < 0)
   return VAR_25;
 }


 FUNC_1(VAR_23, VAR_11);

 return 0;
}
