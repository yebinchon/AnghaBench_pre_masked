
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
struct arizona_priv {TYPE_2__* arizona; struct arizona_dai_priv* dai; } ;
struct arizona_dai_priv {int clk; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_8 ;


 int FUNC_1 (struct snd_soc_dai*,char*,int) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 scalar_t__* VAR_9 ;
 int FUNC_4 (struct snd_soc_component*,int) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 struct arizona_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_10,
      struct snd_pcm_hw_params *VAR_11,
      struct snd_soc_dai *VAR_12)
{
 struct snd_soc_component *VAR_13 = VAR_12->component;
 struct arizona_priv *VAR_14 = FUNC_6(VAR_13);
 struct arizona_dai_priv *VAR_15 = &VAR_14->dai[VAR_12->id - 1];
 int VAR_16 = VAR_12->driver->base;
 int VAR_17, VAR_18, VAR_19;





 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_9); VAR_17++)
  if (VAR_9[VAR_17] == FUNC_5(VAR_11))
   break;
 if (VAR_17 == FUNC_0(VAR_9)) {
  FUNC_1(VAR_12, "Unsupported sample rate %dHz\n",
    FUNC_5(VAR_11));
  return -VAR_8;
 }
 VAR_18 = VAR_17;

 switch (VAR_14->arizona->type) {
 case 129:
 case 128:
  if (VAR_9[VAR_18] >= 88200)
   VAR_19 = FUNC_3(VAR_13, VAR_5);
  else
   VAR_19 = FUNC_2(VAR_13, VAR_5);

  if (VAR_19) {
   FUNC_1(VAR_12, "Failed to change DVFS %d\n", VAR_19);
   return VAR_19;
  }
  break;
 default:
  break;
 }

 switch (VAR_15->clk) {
 case 130:
  switch (VAR_14->arizona->type) {
  case 129:
   FUNC_4(VAR_13,
          FUNC_5(VAR_11));
   break;
  default:
   break;
  }

  FUNC_7(VAR_13, VAR_6,
           VAR_7,
           VAR_18);
  if (VAR_16)
   FUNC_7(VAR_13,
     VAR_16 + VAR_2,
     VAR_0, 0);
  break;
 case 131:
  FUNC_7(VAR_13,
           VAR_3,
           VAR_4,
           VAR_18);
  if (VAR_16)
   FUNC_7(VAR_13,
     VAR_16 + VAR_2,
     VAR_0,
     8 << VAR_1);
  break;
 default:
  FUNC_1(VAR_12, "Invalid clock %d\n", VAR_15->clk);
  return -VAR_8;
 }

 return 0;
}
