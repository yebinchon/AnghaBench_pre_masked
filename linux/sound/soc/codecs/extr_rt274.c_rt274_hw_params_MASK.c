
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rt274_priv {int sys_clk; scalar_t__ master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 struct rt274_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_4,
       struct snd_pcm_hw_params *VAR_5,
       struct snd_soc_dai *VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_6->component;
 struct rt274_priv *VAR_8 = FUNC_5(VAR_7);
 unsigned int VAR_9 = 0;
 int VAR_10 = 0, VAR_11 = 0;

 switch (FUNC_3(VAR_5)) {

 case 44100:
 case 48000:
  break;
 default:
  FUNC_1(VAR_7->dev, "Unsupported sample rate %d\n",
     FUNC_3(VAR_5));
  return -VAR_0;
 }
 switch (VAR_8->sys_clk) {
 case 12288000:
 case 24576000:
  if (FUNC_3(VAR_5) != 48000) {
   FUNC_1(VAR_7->dev, "Sys_clk is not matched (%d %d)\n",
     FUNC_3(VAR_5), VAR_8->sys_clk);
   return -VAR_0;
  }
  break;
 case 11289600:
 case 22579200:
  if (FUNC_3(VAR_5) != 44100) {
   FUNC_1(VAR_7->dev, "Sys_clk is not matched (%d %d)\n",
     FUNC_3(VAR_5), VAR_8->sys_clk);
   return -VAR_0;
  }
  break;
 }

 if (FUNC_2(VAR_5) <= 16) {

  VAR_9 |= (FUNC_2(VAR_5) - 1);
 } else {
  FUNC_1(VAR_7->dev, "Unsupported channels %d\n",
     FUNC_2(VAR_5));
  return -VAR_0;
 }

 switch (FUNC_4(VAR_5)) {

 case 16:
  VAR_10 = 0;
  VAR_11 = 0;
  VAR_9 |= (0x1 << 4);
  break;
 case 32:
  VAR_10 = 2;
  VAR_11 = 3;
  VAR_9 |= (0x4 << 4);
  break;
 case 20:
  VAR_10 = 1;
  VAR_11 = 1;
  VAR_9 |= (0x2 << 4);
  break;
 case 24:
  VAR_10 = 2;
  VAR_11 = 2;
  VAR_9 |= (0x3 << 4);
  break;
 case 8:
  VAR_10 = 3;
  VAR_11 = 0;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_8->master)
  VAR_11 = 0x3;

 FUNC_6(VAR_7,
  VAR_3, 0xc018, VAR_10 << 3 | VAR_11 << 14);
 FUNC_0(VAR_7->dev, "format val = 0x%x\n", VAR_9);

 FUNC_6(VAR_7, VAR_2, 0x407f, VAR_9);
 FUNC_6(VAR_7, VAR_1, 0x407f, VAR_9);

 return 0;
}
