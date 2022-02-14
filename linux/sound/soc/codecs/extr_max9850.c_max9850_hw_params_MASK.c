
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct max9850_priv {int sysclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 struct max9850_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_6 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_5,
        struct snd_pcm_hw_params *VAR_6,
        struct snd_soc_dai *VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_7->component;
 struct max9850_priv *VAR_9 = FUNC_3(VAR_8);
 u64 VAR_10;
 u8 VAR_11, VAR_12;

 if (!VAR_9->sysclk)
  return -VAR_0;


 VAR_11 = (FUNC_4(VAR_8, VAR_1) >> 2) + 1;
 VAR_10 = (1 << 22);
 VAR_10 *= FUNC_1(VAR_6);
 VAR_10 *= VAR_11;
 FUNC_0(VAR_10, VAR_9->sysclk);

 FUNC_6(VAR_8, VAR_4, (VAR_10 >> 8) & 0x7f);
 FUNC_6(VAR_8, VAR_3, VAR_10 & 0xff);

 switch (FUNC_2(VAR_6)) {
 case 16:
  VAR_12 = 0;
  break;
 case 20:
  VAR_12 = 0x2;
  break;
 case 24:
  VAR_12 = 0x3;
  break;
 default:
  return -VAR_0;
 }
 FUNC_5(VAR_8, VAR_2, 0x3, VAR_12);

 return 0;
}
