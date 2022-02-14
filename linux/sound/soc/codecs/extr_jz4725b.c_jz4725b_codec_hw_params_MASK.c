
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct jz_icdc {int regmap; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;




 scalar_t__ VAR_11 ;
 scalar_t__* VAR_12 ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int ,int ,unsigned int) ;
 struct jz_icdc* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_13,
 struct snd_pcm_hw_params *VAR_14, struct snd_soc_dai *VAR_15)
{
 struct jz_icdc *VAR_16 = FUNC_4(VAR_15->component);
 unsigned int VAR_17, VAR_18;

 switch (FUNC_1(VAR_14)) {
 case 131:
  VAR_18 = 0;
  break;
 case 130:
  VAR_18 = 1;
  break;
 case 129:
  VAR_18 = 2;
  break;
 case 128:
  VAR_18 = 3;
  break;
 default:
  return -VAR_0;
 }

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_12); VAR_17++) {
  if (VAR_12[VAR_17] == FUNC_2(VAR_14))
   break;
 }

 if (VAR_17 == FUNC_0(VAR_12))
  return -VAR_0;

 if (VAR_13->stream == VAR_11) {
  FUNC_3(VAR_16->regmap,
       VAR_2,
       VAR_9,
       VAR_18 << VAR_10);

  FUNC_3(VAR_16->regmap,
       VAR_1,
       VAR_5,
       VAR_17 << VAR_6);
 } else {
  FUNC_3(VAR_16->regmap,
       VAR_2,
       VAR_7,
       VAR_18 << VAR_8);

  FUNC_3(VAR_16->regmap,
       VAR_1,
       VAR_3,
       VAR_17 << VAR_4);
 }

 return 0;
}
