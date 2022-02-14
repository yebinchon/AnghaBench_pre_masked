
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {TYPE_1__* component; int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct si476x_core {int dummy; } ;
struct TYPE_3__ {int dev; } ;


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
 int FUNC_0 (int ,char*,...) ;
 struct si476x_core* FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct si476x_core*) ;
 int FUNC_5 (struct si476x_core*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_10,
      struct snd_pcm_hw_params *VAR_11,
      struct snd_soc_dai *VAR_12)
{
 struct si476x_core *VAR_13 = FUNC_1(VAR_12->dev);
 int VAR_14, VAR_15, VAR_16;

 VAR_14 = FUNC_2(VAR_11);
 if (VAR_14 < 32000 || VAR_14 > 48000) {
  FUNC_0(VAR_12->component->dev, "Rate: %d is not supported\n", VAR_14);
  return -VAR_0;
 }

 switch (FUNC_3(VAR_11)) {
 case 8:
  VAR_15 = VAR_9;
  break;
 case 16:
  VAR_15 = VAR_6;
  break;
 case 20:
  VAR_15 = VAR_7;
  break;
 case 24:
  VAR_15 = VAR_8;
  break;
 default:
  return -VAR_0;
 }

 FUNC_4(VAR_13);

 VAR_16 = FUNC_7(VAR_12->component, VAR_2,
       VAR_14);
 if (VAR_16 < 0) {
  FUNC_0(VAR_12->component->dev, "Failed to set sample rate\n");
  goto out;
 }

 VAR_16 = FUNC_6(VAR_12->component, VAR_1,
      VAR_3,
      (VAR_15 << VAR_5) |
      (VAR_15 << VAR_4));
 if (VAR_16 < 0) {
  FUNC_0(VAR_12->component->dev, "Failed to set output width\n");
  goto out;
 }

out:
 FUNC_5(VAR_13);

 return VAR_16;
}
