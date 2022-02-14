
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct img_spdif_out {int clk_ref; int dev; } ;
typedef scalar_t__ snd_pcm_format_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 long FUNC_0 (long) ;
 long FUNC_1 (int ) ;
 long FUNC_2 (int ,long) ;
 int FUNC_3 (int ,long) ;
 int FUNC_4 (int ,char*,long,unsigned int,scalar_t__) ;
 int FUNC_5 (struct img_spdif_out*,int ) ;
 int FUNC_6 (struct img_spdif_out*,int ,int ) ;
 unsigned int FUNC_7 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_8 (struct snd_pcm_hw_params*) ;
 long FUNC_9 (struct snd_pcm_hw_params*) ;
 struct img_spdif_out* FUNC_10 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_4,
 struct snd_pcm_hw_params *VAR_5, struct snd_soc_dai *VAR_6)
{
 struct img_spdif_out *VAR_7 = FUNC_10(VAR_6);
 unsigned int VAR_8;
 long VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 u32 VAR_15;
 snd_pcm_format_t VAR_16;

 VAR_13 = FUNC_9(VAR_5);
 VAR_16 = FUNC_8(VAR_5);
 VAR_8 = FUNC_7(VAR_5);

 FUNC_4(VAR_7->dev, "hw_params rate %ld channels %u format %u\n",
   VAR_13, VAR_8, VAR_16);

 if (VAR_16 != VAR_3)
  return -VAR_0;

 if (VAR_8 != 2)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_7->clk_ref, VAR_13 * 256);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_10 = FUNC_2(VAR_7->clk_ref, VAR_13 * 384);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_11 = FUNC_0((VAR_9 / 256) - VAR_13);
 VAR_12 = FUNC_0((VAR_10 / 384) - VAR_13);


 if (VAR_11 > VAR_12)
  FUNC_3(VAR_7->clk_ref, VAR_10);
 else
  FUNC_3(VAR_7->clk_ref, VAR_9);






 VAR_14 = FUNC_1(VAR_7->clk_ref);

 VAR_11 = FUNC_0((VAR_14 / 256) - VAR_13);
 VAR_12 = FUNC_0((VAR_14 / 384) - VAR_13);

 VAR_15 = FUNC_5(VAR_7, VAR_1);
 if (VAR_11 <= VAR_12)
  VAR_15 &= ~VAR_2;
 else
  VAR_15 |= VAR_2;
 FUNC_6(VAR_7, VAR_15, VAR_1);

 return 0;
}
