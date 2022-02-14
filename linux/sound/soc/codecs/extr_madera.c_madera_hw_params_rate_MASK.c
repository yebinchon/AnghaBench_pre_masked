
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {int id; TYPE_1__* driver; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct madera_priv {int rate_lock; TYPE_2__* madera; struct madera_dai_priv* dai; } ;
struct madera_dai_priv {int clk; } ;
struct TYPE_4__ {int regmap; } ;
struct TYPE_3__ {int base; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;





 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_1 (struct snd_soc_dai*,char*,int) ;
 int FUNC_2 (struct snd_soc_dai*,char*) ;
 int FUNC_3 (struct madera_priv*,int) ;
 int FUNC_4 (struct madera_priv*) ;
 scalar_t__* VAR_11 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (int ,int,unsigned int*) ;
 struct madera_priv* FUNC_9 (struct snd_soc_component*) ;
 int FUNC_10 (struct snd_soc_component*,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_12,
     struct snd_pcm_hw_params *VAR_13,
     struct snd_soc_dai *VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_14->component;
 struct madera_priv *VAR_16 = FUNC_9(VAR_15);
 struct madera_dai_priv *VAR_17 = &VAR_16->dai[VAR_14->id - 1];
 int VAR_18 = VAR_14->driver->base;
 int VAR_19, VAR_20;
 unsigned int VAR_21, VAR_22, VAR_23;
 int VAR_24;

 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_11); VAR_19++)
  if (VAR_11[VAR_19] == FUNC_7(VAR_13))
   break;

 if (VAR_19 == FUNC_0(VAR_11)) {
  FUNC_1(VAR_14, "Unsupported sample rate %dHz\n",
          FUNC_7(VAR_13));
  return -VAR_1;
 }
 VAR_20 = VAR_19;

 switch (VAR_17->clk) {
 case 130:
  VAR_21 = VAR_7;
  VAR_23 = 0 << VAR_3;
  break;
 case 129:
  VAR_21 = VAR_9;
  VAR_23 = 1 << VAR_3;
  break;
 case 128:
  VAR_21 = VAR_10;
  VAR_23 = 2 << VAR_3;
  break;
 case 132:
  VAR_21 = VAR_5,
  VAR_23 = 8 << VAR_3;
  break;
 case 131:
  VAR_21 = VAR_6,
  VAR_23 = 9 << VAR_3;
  break;
 default:
  FUNC_1(VAR_14, "Invalid clock %d\n", VAR_17->clk);
  return -VAR_1;
 }

 FUNC_10(VAR_15, VAR_21, VAR_8,
          VAR_20);

 if (!VAR_18)
  return 0;

 VAR_24 = FUNC_8(VAR_16->madera->regmap,
     VAR_18 + VAR_4, &VAR_22);
 if (VAR_24 != 0) {
  FUNC_1(VAR_14, "Failed to check rate: %d\n", VAR_24);
  return VAR_24;
 }

 if ((VAR_22 & VAR_2) == (VAR_23 & VAR_2))
  return 0;

 FUNC_5(&VAR_16->rate_lock);

 if (!FUNC_3(VAR_16, VAR_18 + VAR_4)) {
  FUNC_2(VAR_14, "Cannot change rate while active\n");
  VAR_24 = -VAR_0;
  goto out;
 }


 FUNC_4(VAR_16);
 FUNC_10(VAR_15, VAR_18 + VAR_4,
          VAR_2, VAR_23);
 FUNC_4(VAR_16);

out:
 FUNC_6(&VAR_16->rate_lock);

 return VAR_24;
}
