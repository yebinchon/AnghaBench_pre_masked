
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {int component; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs35l36_private {int regmap; } ;
struct TYPE_3__ {unsigned int rate; unsigned int fs_cfg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_1__* VAR_13 ;
 unsigned int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int ,int ,unsigned int) ;
 struct cs35l36_private* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_14,
     struct snd_pcm_hw_params *VAR_15,
     struct snd_soc_dai *VAR_16)
{
 struct cs35l36_private *VAR_17 =
   FUNC_4(VAR_16->component);
 unsigned int VAR_18, VAR_19 = FUNC_1(VAR_15);
 int VAR_20;

 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_13); VAR_20++) {
  if (VAR_19 == VAR_13[VAR_20].rate)
   FUNC_3(VAR_17->regmap,
        VAR_8,
        VAR_9,
        VAR_13[VAR_20].fs_cfg <<
        VAR_10);
 }

 switch (FUNC_2(VAR_15)) {
 case 16:
  VAR_18 = VAR_5;
  break;
 case 24:
  VAR_18 = VAR_6;
  break;
 case 32:
  VAR_18 = VAR_7;
  break;
 default:
  return -VAR_11;
 }

 if (VAR_14->stream == VAR_12) {
  FUNC_3(VAR_17->regmap, VAR_0,
       VAR_1,
       VAR_18 << VAR_2);
 } else {
  FUNC_3(VAR_17->regmap, VAR_0,
       VAR_3,
       VAR_18 << VAR_4);
 }

 return 0;
}
