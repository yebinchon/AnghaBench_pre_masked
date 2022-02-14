
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_pcm_runtime {int card; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {TYPE_2__* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct atmel_pdmic {int gclk; int pclk; } ;
struct TYPE_3__ {unsigned int rate_min; unsigned int rate_max; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 struct atmel_pdmic* FUNC_5 (int ) ;
 int FUNC_6 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int
FUNC_7(struct snd_pcm_substream *VAR_18,
       struct snd_pcm_hw_params *VAR_19,
       struct snd_soc_dai *VAR_20)
{
 struct snd_soc_pcm_runtime *VAR_21 = VAR_18->private_data;
 struct atmel_pdmic *VAR_22 = FUNC_5(VAR_21->card);
 struct snd_soc_component *VAR_23 = VAR_20->component;
 unsigned int VAR_24 = VAR_18->runtime->hw.rate_min;
 unsigned int VAR_25 = VAR_18->runtime->hw.rate_max;
 int VAR_26 = FUNC_3(VAR_19);
 int VAR_27 = FUNC_4(VAR_19);
 unsigned long VAR_28, VAR_29;
 unsigned int VAR_30;
 u32 VAR_31, VAR_32, VAR_33, VAR_34;

 if (FUNC_2(VAR_19) != 1) {
  FUNC_1(VAR_23->dev,
   "only supports one channel\n");
  return -VAR_0;
 }

 if ((VAR_26 < VAR_24) || (VAR_26 > VAR_25)) {
  FUNC_1(VAR_23->dev,
   "sample rate is %dHz, min rate is %dHz, max rate is %dHz\n",
   VAR_26, VAR_24, VAR_25);

  return -VAR_0;
 }

 switch (VAR_27) {
 case 16:
  VAR_32 = (VAR_6
        << VAR_9);
  break;
 case 32:
  VAR_32 = (VAR_7
        << VAR_9);
  break;
 default:
  return -VAR_0;
 }

 if ((VAR_26 << 7) > (VAR_25 << 6)) {
  VAR_30 = VAR_26 << 6;
  VAR_32 |= VAR_3 << VAR_5;
 } else {
  VAR_30 = VAR_26 << 7;
  VAR_32 |= VAR_2 << VAR_5;
 }

 VAR_28 = FUNC_0(VAR_22->pclk);
 VAR_29 = FUNC_0(VAR_22->gclk);


 VAR_33 = (u32)(VAR_28/(VAR_30 << 1)) - 1;
 VAR_34 = (u32)(VAR_29/(VAR_30 << 1)) - 1;

 if ((VAR_33 > VAR_16) ||
     (VAR_29/((VAR_34 + 1) << 1) <
      VAR_28/((VAR_33 + 1) << 1))) {
  VAR_31 = VAR_34 << VAR_17;
  VAR_31 |= VAR_11 << VAR_14;
 } else {
  VAR_31 = VAR_33 << VAR_17;
  VAR_31 |= VAR_13 << VAR_14;
 }

 FUNC_6(VAR_23, VAR_10,
  VAR_15 | VAR_12, VAR_31);

 FUNC_6(VAR_23, VAR_1,
  VAR_4 | VAR_8, VAR_32);

 return 0;
}
