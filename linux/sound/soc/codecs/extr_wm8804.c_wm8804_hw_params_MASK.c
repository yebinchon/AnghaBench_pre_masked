
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3,
       struct snd_pcm_hw_params *VAR_4,
       struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6;
 u16 VAR_7;

 VAR_6 = VAR_5->component;

 switch (FUNC_1(VAR_4)) {
 case 16:
  VAR_7 = 0x0;
  break;
 case 20:
  VAR_7 = 0x1;
  break;
 case 24:
  VAR_7 = 0x2;
  break;
 default:
  FUNC_0(VAR_5->dev, "Unsupported word length: %u\n",
   FUNC_1(VAR_4));
  return -VAR_0;
 }


 FUNC_2(VAR_6, VAR_2, 0xc, VAR_7 << 2);
 FUNC_2(VAR_6, VAR_1, 0xc, VAR_7 << 2);

 return 0;
}
