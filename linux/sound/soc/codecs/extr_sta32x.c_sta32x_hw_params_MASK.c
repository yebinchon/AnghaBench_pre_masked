
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sta32x_priv {unsigned int mclk; int regmap; int format; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_3__ {unsigned int fs; int ir; } ;


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
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,...) ;
 TYPE_1__* VAR_10 ;
 unsigned int** VAR_11 ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ,int ,int,unsigned int) ;
 struct sta32x_priv* FUNC_6 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_12,
       struct snd_pcm_hw_params *VAR_13,
       struct snd_soc_dai *VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_14->component;
 struct sta32x_priv *VAR_16 = FUNC_6(VAR_15);
 int VAR_17, VAR_18 = -VAR_0, VAR_19 = -VAR_0;
 unsigned int VAR_20, VAR_21;
 unsigned int VAR_22, VAR_23;
 int VAR_24;

 if (!VAR_16->mclk) {
  FUNC_2(VAR_15->dev,
   "sta32x->mclk is unset. Unable to determine ratio\n");
  return -VAR_1;
 }

 VAR_22 = FUNC_3(VAR_13);
 VAR_23 = VAR_16->mclk / VAR_22;
 FUNC_1(VAR_15->dev, "rate: %u, ratio: %u\n", VAR_22, VAR_23);

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_10); VAR_17++) {
  if (VAR_10[VAR_17].fs == VAR_22) {
   VAR_19 = VAR_10[VAR_17].ir;
   break;
  }
 }

 if (VAR_19 < 0) {
  FUNC_2(VAR_15->dev, "Unsupported samplerate: %u\n", VAR_22);
  return -VAR_0;
 }

 for (VAR_17 = 0; VAR_17 < 6; VAR_17++) {
  if (VAR_11[VAR_19][VAR_17] == VAR_23) {
   VAR_18 = VAR_17;
   break;
  }
 }

 if (VAR_18 < 0) {
  FUNC_2(VAR_15->dev, "Unresolvable ratio: %u\n", VAR_23);
  return -VAR_0;
 }

 VAR_20 = (VAR_19 << VAR_4) |
  (VAR_18 << VAR_6);
 VAR_21 = 0;

 switch (FUNC_4(VAR_13)) {
 case 24:
  FUNC_1(VAR_15->dev, "24bit\n");

 case 32:
  FUNC_1(VAR_15->dev, "24bit or 32bit\n");
  switch (VAR_16->format) {
  case 130:
   VAR_21 |= 0x0;
   break;
  case 129:
   VAR_21 |= 0x1;
   break;
  case 128:
   VAR_21 |= 0x2;
   break;
  }

  break;
 case 20:
  FUNC_1(VAR_15->dev, "20bit\n");
  switch (VAR_16->format) {
  case 130:
   VAR_21 |= 0x4;
   break;
  case 129:
   VAR_21 |= 0x5;
   break;
  case 128:
   VAR_21 |= 0x6;
   break;
  }

  break;
 case 18:
  FUNC_1(VAR_15->dev, "18bit\n");
  switch (VAR_16->format) {
  case 130:
   VAR_21 |= 0x8;
   break;
  case 129:
   VAR_21 |= 0x9;
   break;
  case 128:
   VAR_21 |= 0xa;
   break;
  }

  break;
 case 16:
  FUNC_1(VAR_15->dev, "16bit\n");
  switch (VAR_16->format) {
  case 130:
   VAR_21 |= 0x0;
   break;
  case 129:
   VAR_21 |= 0xd;
   break;
  case 128:
   VAR_21 |= 0xe;
   break;
  }

  break;
 default:
  return -VAR_0;
 }

 VAR_24 = FUNC_5(VAR_16->regmap, VAR_2,
     VAR_5 | VAR_3,
     VAR_20);
 if (VAR_24 < 0)
  return VAR_24;

 VAR_24 = FUNC_5(VAR_16->regmap, VAR_7,
     VAR_9 | VAR_8,
     VAR_21);
 if (VAR_24 < 0)
  return VAR_24;

 return 0;
}
