
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs4265_private {int format; int sysclk; } ;
struct TYPE_2__ {int fm_mode; int mclkdiv; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;



 TYPE_1__* VAR_12 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 struct cs4265_private* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_13,
         struct snd_pcm_hw_params *VAR_14,
         struct snd_soc_dai *VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_15->component;
 struct cs4265_private *VAR_17 = FUNC_4(VAR_16);
 int VAR_18;

 if (VAR_13->stream == VAR_10 &&
  ((VAR_17->format & VAR_11)
  == 128))
  return -VAR_9;

 VAR_18 = FUNC_0(VAR_17->sysclk, FUNC_2(VAR_14));
 if (VAR_18 >= 0) {
  FUNC_5(VAR_16, VAR_0,
   VAR_2, VAR_12[VAR_18].fm_mode << 6);
  FUNC_5(VAR_16, VAR_5,
   VAR_6,
   VAR_12[VAR_18].mclkdiv << 4);

 } else {
  FUNC_1(VAR_16->dev, "can't get correct mclk\n");
  return -VAR_9;
 }

 switch (VAR_17->format & VAR_11) {
 case 130:
  FUNC_5(VAR_16, VAR_3,
   VAR_4, (1 << 4));
  FUNC_5(VAR_16, VAR_0,
   VAR_1, (1 << 4));
  FUNC_5(VAR_16, VAR_7,
   VAR_8, (1 << 6));
  break;
 case 128:
  if (FUNC_3(VAR_14) == 16) {
   FUNC_5(VAR_16, VAR_3,
    VAR_4, (2 << 4));
   FUNC_5(VAR_16, VAR_7,
    VAR_8, (2 << 6));
  } else {
   FUNC_5(VAR_16, VAR_3,
    VAR_4, (3 << 4));
   FUNC_5(VAR_16, VAR_7,
    VAR_8, (3 << 6));
  }
  break;
 case 129:
  FUNC_5(VAR_16, VAR_3,
   VAR_4, 0);
  FUNC_5(VAR_16, VAR_0,
   VAR_1, 0);
  FUNC_5(VAR_16, VAR_7,
   VAR_8, 0);

  break;
 default:
  return -VAR_9;
 }
 return 0;
}
