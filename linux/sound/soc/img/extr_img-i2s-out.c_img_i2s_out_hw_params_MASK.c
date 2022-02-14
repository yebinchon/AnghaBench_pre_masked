
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct img_i2s_out {int max_i2s_chan; unsigned int active_channels; int clk_ref; } ;
typedef scalar_t__ snd_pcm_format_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 long FUNC_0 (long) ;
 long FUNC_1 (int ) ;
 long FUNC_2 (int ,long) ;
 int FUNC_3 (int ,long) ;
 int FUNC_4 (struct img_i2s_out*,int) ;
 int FUNC_5 (struct img_i2s_out*,int) ;
 int FUNC_6 (struct img_i2s_out*) ;
 int FUNC_7 (struct img_i2s_out*) ;
 unsigned int FUNC_8 (struct img_i2s_out*,int ) ;
 int FUNC_9 (struct img_i2s_out*,unsigned int,int ) ;
 unsigned int FUNC_10 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_11 (struct snd_pcm_hw_params*) ;
 long FUNC_12 (struct snd_pcm_hw_params*) ;
 struct img_i2s_out* FUNC_13 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_14(struct snd_pcm_substream *VAR_6,
 struct snd_pcm_hw_params *VAR_7, struct snd_soc_dai *VAR_8)
{
 struct img_i2s_out *VAR_9 = FUNC_13(VAR_8);
 unsigned int VAR_10, VAR_11;
 long VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;
 u32 VAR_19, VAR_20, VAR_21 = 0;
 snd_pcm_format_t VAR_22;

 VAR_16 = FUNC_12(VAR_7);
 VAR_22 = FUNC_11(VAR_7);
 VAR_10 = FUNC_10(VAR_7);
 VAR_11 = VAR_10 / 2;

 if (VAR_22 != VAR_5)
  return -VAR_0;

 if ((VAR_10 < 2) ||
     (VAR_10 > (VAR_9->max_i2s_chan * 2)) ||
     (VAR_10 % 2))
  return -VAR_0;

 VAR_12 = FUNC_2(VAR_9->clk_ref, VAR_16 * 256);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_13 = FUNC_2(VAR_9->clk_ref, VAR_16 * 384);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_14 = FUNC_0((VAR_12 / 256) - VAR_16);
 VAR_15 = FUNC_0((VAR_13 / 384) - VAR_16);


 if (VAR_14 > VAR_15)
  FUNC_3(VAR_9->clk_ref, VAR_13);
 else
  FUNC_3(VAR_9->clk_ref, VAR_12);






 VAR_17 = FUNC_1(VAR_9->clk_ref);

 VAR_14 = FUNC_0((VAR_17 / 256) - VAR_16);
 VAR_15 = FUNC_0((VAR_17 / 384) - VAR_16);

 if (VAR_14 > VAR_15)
  VAR_21 |= VAR_4;

 VAR_21 |= ((VAR_11 - 1) <<
         VAR_3) &
         VAR_2;

 VAR_20 = VAR_4 |
         VAR_2;

 FUNC_6(VAR_9);

 VAR_19 = FUNC_8(VAR_9, VAR_1);
 VAR_19 = (VAR_19 & ~VAR_20) | VAR_21;
 FUNC_9(VAR_9, VAR_19, VAR_1);

 for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++)
  FUNC_5(VAR_9, VAR_18);

 for (; VAR_18 < VAR_9->max_i2s_chan; VAR_18++)
  FUNC_4(VAR_9, VAR_18);

 FUNC_7(VAR_9);

 VAR_9->active_channels = VAR_11;

 return 0;
}
