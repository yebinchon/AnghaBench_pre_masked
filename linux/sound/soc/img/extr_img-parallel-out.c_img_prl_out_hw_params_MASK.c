
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct img_prl_out {int clk_ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct img_prl_out*,int ) ;
 int FUNC_2 (struct img_prl_out*,int,int ) ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_5 (struct snd_pcm_hw_params*) ;
 struct img_prl_out* FUNC_6 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_3,
 struct snd_pcm_hw_params *VAR_4, struct snd_soc_dai *VAR_5)
{
 struct img_prl_out *VAR_6 = FUNC_6(VAR_5);
 unsigned int VAR_7, VAR_8;
 u32 VAR_9, VAR_10 = 0;

 VAR_7 = FUNC_5(VAR_4);
 VAR_8 = FUNC_3(VAR_4);

 switch (FUNC_4(VAR_4)) {
 case 128:
  VAR_10 |= VAR_2;
  break;
 case 129:
  break;
 default:
  return -VAR_0;
 }

 if (VAR_8 != 2)
  return -VAR_0;

 FUNC_0(VAR_6->clk_ref, VAR_7 * 256);

 VAR_9 = FUNC_1(VAR_6, VAR_1);
 VAR_9 = (VAR_9 & ~VAR_2) | VAR_10;
 FUNC_2(VAR_6, VAR_9, VAR_1);

 return 0;
}
