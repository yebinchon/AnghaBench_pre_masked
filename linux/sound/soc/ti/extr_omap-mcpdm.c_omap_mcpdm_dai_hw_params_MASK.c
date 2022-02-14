
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_dmaengine_dai_dma_data {int maxburst; } ;
struct omap_mcpdm {int* latency; int restart; TYPE_1__* config; } ;
struct TYPE_2__ {int threshold; int link_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct snd_dmaengine_dai_dma_data* FUNC_2 (struct snd_soc_dai*,struct snd_pcm_substream*) ;
 struct omap_mcpdm* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_5,
        struct snd_pcm_hw_params *VAR_6,
        struct snd_soc_dai *VAR_7)
{
 struct omap_mcpdm *VAR_8 = FUNC_3(VAR_7);
 int VAR_9 = VAR_5->stream;
 struct snd_dmaengine_dai_dma_data *VAR_10;
 u32 VAR_11;
 int VAR_12, VAR_13;
 int VAR_14 = 0;

 VAR_12 = FUNC_0(VAR_6);
 switch (VAR_12) {
 case 5:
  if (VAR_9 == VAR_2)

   return -VAR_0;
  VAR_14 |= 1 << 4;

 case 4:
  if (VAR_9 == VAR_2)

   return -VAR_0;
  VAR_14 |= 1 << 3;

 case 3:
  VAR_14 |= 1 << 2;

 case 2:
  VAR_14 |= 1 << 1;

 case 1:
  VAR_14 |= 1 << 0;
  break;
 default:

  return -VAR_0;
 }

 VAR_10 = FUNC_2(VAR_7, VAR_5);

 VAR_11 = VAR_8->config[VAR_9].threshold;

 if (VAR_9 == VAR_3) {
  VAR_14 <<= 3;


  if (!VAR_8->config[!VAR_9].link_mask)
   VAR_8->config[!VAR_9].link_mask = 0x3;

  VAR_10->maxburst =
    (VAR_1 - VAR_11) * VAR_12;
  VAR_13 = VAR_11;
 } else {

  if (!VAR_8->config[!VAR_9].link_mask)
   VAR_8->config[!VAR_9].link_mask = (0x3 << 3);

  VAR_10->maxburst = VAR_11 * VAR_12;
  VAR_13 = (VAR_1 - VAR_11);
 }





 VAR_8->latency[VAR_9] = VAR_13 * VAR_4 / FUNC_1(VAR_6);

 if (!VAR_8->latency[VAR_9])
  VAR_8->latency[VAR_9] = 10;


 if (VAR_8->config[VAR_9].link_mask &&
     VAR_8->config[VAR_9].link_mask != VAR_14)
  VAR_8->restart = 1;

 VAR_8->config[VAR_9].link_mask = VAR_14;

 return 0;
}
