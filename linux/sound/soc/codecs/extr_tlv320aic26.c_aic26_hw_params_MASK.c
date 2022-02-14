
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct aic26 {int mclk; int datfm; scalar_t__ master; TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


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
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 struct aic26* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_5 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_14,
      struct snd_pcm_hw_params *VAR_15,
      struct snd_soc_dai *VAR_16)
{
 struct snd_soc_component *VAR_17 = VAR_16->component;
 struct aic26 *VAR_18 = FUNC_3(VAR_17);
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 u16 VAR_26;

 FUNC_0(&VAR_18->spi->dev, "aic26_hw_params(substream=%p, params=%p)\n",
  VAR_14, VAR_15);
 FUNC_0(&VAR_18->spi->dev, "rate=%i width=%d\n", FUNC_1(VAR_15),
  FUNC_2(VAR_15));

 switch (FUNC_1(VAR_15)) {
 case 8000: VAR_19 = 48000; VAR_20 = VAR_5; break;
 case 11025: VAR_19 = 44100; VAR_20 = VAR_4; break;
 case 12000: VAR_19 = 48000; VAR_20 = VAR_4; break;
 case 16000: VAR_19 = 48000; VAR_20 = VAR_3; break;
 case 22050: VAR_19 = 44100; VAR_20 = VAR_2; break;
 case 24000: VAR_19 = 48000; VAR_20 = VAR_2; break;
 case 32000: VAR_19 = 48000; VAR_20 = VAR_1; break;
 case 44100: VAR_19 = 44100; VAR_20 = VAR_0; break;
 case 48000: VAR_19 = 48000; VAR_20 = VAR_0; break;
 default:
  FUNC_0(&VAR_18->spi->dev, "bad rate\n"); return -VAR_13;
 }


 switch (FUNC_2(VAR_15)) {
 case 8: VAR_21 = VAR_10; break;
 case 16: VAR_21 = VAR_10; break;
 case 24: VAR_21 = VAR_11; break;
 case 32: VAR_21 = VAR_12; break;
 default:
  FUNC_0(&VAR_18->spi->dev, "bad format\n"); return -VAR_13;
 }






 VAR_22 = 1;

 VAR_23 = VAR_19 / (VAR_18->mclk / 2048);

 VAR_24 = VAR_19 - (VAR_23 * (VAR_18->mclk / 2048));
 VAR_24 = (10000 * VAR_24) / (VAR_18->mclk / 2048);
 FUNC_0(&VAR_18->spi->dev, "Setting PLLM to %d.%04d\n", VAR_23, VAR_24);
 VAR_25 = 0;
 VAR_26 = 0x8000 | VAR_25 << 11 | VAR_22 << 8 | VAR_23 << 2;
 FUNC_5(VAR_17, VAR_8, VAR_26);
 VAR_26 = VAR_24 << 2;
 FUNC_5(VAR_17, VAR_9, VAR_26);


 if (VAR_18->master)
  VAR_26 = 0x0800;
 if (VAR_19 == 48000)
  VAR_26 = 0x2000;
 FUNC_4(VAR_17, VAR_7, 0xf800, VAR_26);


 VAR_26 = VAR_21 | VAR_18->datfm | (VAR_20 << 3) | VAR_20;
 FUNC_4(VAR_17, VAR_6, 0xfff, VAR_26);

 return 0;
}
