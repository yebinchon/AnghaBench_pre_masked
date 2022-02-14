
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dapm_widget {TYPE_1__* dapm; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_card {TYPE_2__* dai_link; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {struct snd_soc_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct snd_soc_dai*,int ,int ,int,int) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int,int ) ;
 struct snd_soc_pcm_runtime* FUNC_3 (struct snd_soc_card*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_6,
      struct snd_kcontrol *VAR_7, int VAR_8)
{
 struct snd_soc_card *VAR_9 = VAR_6->dapm->card;
 struct snd_soc_pcm_runtime *VAR_10;
 struct snd_soc_dai *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_3(VAR_9, VAR_9->dai_link[1].name);
 VAR_11 = VAR_10->cpu_dai;

 switch (VAR_8) {
 case 128:
  VAR_12 = FUNC_1(VAR_11, VAR_2,
       VAR_3, 64 * 8000,
       8000 * 256);
  if (VAR_12 < 0) {
   FUNC_0("Failed to start FLL: %d\n", VAR_12);
   return VAR_12;
  }

  VAR_12 = FUNC_2(VAR_11, VAR_4,
          8000 * 256,
          VAR_1);
  if (VAR_12 < 0) {
   FUNC_0("Failed to set SYSCLK: %d\n", VAR_12);
   return VAR_12;
  }
  break;
 case 129:
  VAR_12 = FUNC_2(VAR_11, VAR_5,
          32768, VAR_1);
  if (VAR_12 < 0) {
   FUNC_0("Failed to switch away from FLL2: %d\n", VAR_12);
   return VAR_12;
  }

  VAR_12 = FUNC_1(VAR_11, VAR_2,
       0, 0, 0);
  if (VAR_12 < 0) {
   FUNC_0("Failed to stop FLL2: %d\n", VAR_12);
   return VAR_12;
  }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
