
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct img_i2s_out {int force_clk_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (struct img_i2s_out*,int ) ;
 int FUNC_1 (struct img_i2s_out*) ;
 int FUNC_2 (struct img_i2s_out*,int ,int ) ;
 struct img_i2s_out* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4, int VAR_5,
 struct snd_soc_dai *VAR_6)
{
 struct img_i2s_out *VAR_7 = FUNC_3(VAR_6);
 u32 VAR_8;

 switch (VAR_5) {
 case 130:
 case 131:
 case 132:
  VAR_8 = FUNC_0(VAR_7, VAR_1);
  if (!VAR_7->force_clk_active)
   VAR_8 |= VAR_2;
  VAR_8 |= VAR_3;
  FUNC_2(VAR_7, VAR_8, VAR_1);
  break;
 case 129:
 case 128:
 case 133:
  FUNC_1(VAR_7);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
