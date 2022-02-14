
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; struct hdmi_codec_daifmt* playback_dma_data; } ;
struct hdmi_codec_daifmt {int bit_clk_master; int frame_clk_master; int frame_clk_inv; int bit_clk_inv; int fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 unsigned int VAR_7 ;



 unsigned int VAR_8 ;

 unsigned int VAR_9 ;



 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hdmi_codec_daifmt*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_10,
      unsigned int VAR_11)
{
 struct hdmi_codec_daifmt *VAR_12 = VAR_10->playback_dma_data;


 FUNC_1(VAR_12, 0, sizeof(*VAR_12));

 switch (VAR_11 & VAR_9) {
 case 140:
  VAR_12->bit_clk_master = 1;
  VAR_12->frame_clk_master = 1;
  break;
 case 138:
  VAR_12->frame_clk_master = 1;
  break;
 case 139:
  VAR_12->bit_clk_master = 1;
  break;
 case 137:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_11 & VAR_8) {
 case 129:
  break;
 case 130:
  VAR_12->frame_clk_inv = 1;
  break;
 case 132:
  VAR_12->bit_clk_inv = 1;
  break;
 case 133:
  VAR_12->frame_clk_inv = 1;
  VAR_12->bit_clk_inv = 1;
  break;
 }

 switch (VAR_11 & VAR_7) {
 case 134:
  VAR_12->fmt = VAR_4;
  break;
 case 136:
  VAR_12->fmt = VAR_2;
  break;
 case 135:
  VAR_12->fmt = VAR_3;
  break;
 case 128:
  VAR_12->fmt = VAR_6;
  break;
 case 131:
  VAR_12->fmt = VAR_5;
  break;
 case 141:
  VAR_12->fmt = VAR_1;
  break;
 default:
  FUNC_0(VAR_10->dev, "Invalid DAI interface format\n");
  return -VAR_0;
 }

 return 0;
}
