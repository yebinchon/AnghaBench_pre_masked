
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct max98926_priv {int ch_size; int regmap; } ;
struct TYPE_3__ {int rate; int sr; } ;


 int FUNC_0 (TYPE_1__*) ;
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



 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 TYPE_1__* VAR_13 ;
 int FUNC_5 (int ,int ,int ,int) ;
 struct max98926_priv* FUNC_6 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_14,
  struct snd_pcm_hw_params *VAR_15,
  struct snd_soc_dai *VAR_16)
{
 int VAR_17 = -VAR_0;
 int VAR_18 = FUNC_4(VAR_15), VAR_19;
 struct snd_soc_component *VAR_20 = VAR_16->component;
 struct max98926_priv *VAR_21 = FUNC_6(VAR_20);
 int VAR_22;

 switch (FUNC_3(VAR_15)) {
 case 130:
  FUNC_5(VAR_21->regmap,
   VAR_12,
   VAR_8,
   VAR_5);
  VAR_21->ch_size = 16;
  break;
 case 129:
  FUNC_5(VAR_21->regmap,
   VAR_12,
   VAR_8,
   VAR_6);
  VAR_21->ch_size = 24;
  break;
 case 128:
  FUNC_5(VAR_21->regmap,
   VAR_12,
   VAR_8,
   VAR_7);
  VAR_21->ch_size = 32;
  break;
 default:
  FUNC_1(VAR_20->dev, "format unsupported %d\n",
   FUNC_3(VAR_15));
  return -VAR_0;
 }


 VAR_22 = FUNC_2(VAR_15) * VAR_21->ch_size;

 switch (VAR_22) {
 case 32:
  FUNC_5(VAR_21->regmap,
   VAR_9,
   VAR_4,
   VAR_1);
  break;
 case 48:
  FUNC_5(VAR_21->regmap,
   VAR_9,
   VAR_4,
   VAR_2);
  break;
 case 64:
  FUNC_5(VAR_21->regmap,
   VAR_9,
   VAR_4,
   VAR_3);
  break;
 default:
  return -VAR_0;
 }


 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_13); VAR_19++) {
  if (VAR_13[VAR_19].rate >= VAR_18) {
   VAR_17 = VAR_13[VAR_19].sr;
   break;
  }
 }
 if (VAR_17 < 0)
  return -VAR_0;


 FUNC_5(VAR_21->regmap,
  VAR_9,
  VAR_10, VAR_17 << VAR_11);
 return 0;
}
