
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct snd_soc_card {TYPE_5__* dev; } ;
struct sirf_audio_card {void* gpio_hp_pa; void* gpio_spk_pa; } ;
struct TYPE_13__ {int of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct TYPE_12__ {TYPE_3__* codecs; TYPE_2__* platforms; TYPE_1__* cpus; } ;
struct TYPE_11__ {void* of_node; } ;
struct TYPE_10__ {void* of_node; } ;
struct TYPE_9__ {void* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,char*,int,...) ;
 int FUNC_1 (TYPE_5__*,void*,int ,char*) ;
 struct sirf_audio_card* FUNC_2 (TYPE_5__*,int,int ) ;
 int FUNC_3 (TYPE_5__*,struct snd_soc_card*) ;
 scalar_t__ FUNC_4 (void*) ;
 void* FUNC_5 (int ,char*,int ) ;
 void* FUNC_6 (int ,char*,int ) ;
 TYPE_4__* VAR_3 ;
 int FUNC_7 (struct snd_soc_card*,struct sirf_audio_card*) ;
 struct snd_soc_card VAR_4 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct snd_soc_card *VAR_6 = &VAR_4;
 struct sirf_audio_card *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(&VAR_5->dev, sizeof(struct sirf_audio_card),
   VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_3[0].cpus->of_node =
  FUNC_6(VAR_5->dev.of_node, "sirf,audio-platform", 0);
 VAR_3[0].platforms->of_node =
  FUNC_6(VAR_5->dev.of_node, "sirf,audio-platform", 0);
 VAR_3[0].codecs->of_node =
  FUNC_6(VAR_5->dev.of_node, "sirf,audio-codec", 0);
 VAR_7->gpio_spk_pa = FUNC_5(VAR_5->dev.of_node,
   "spk-pa-gpios", 0);
 VAR_7->gpio_hp_pa = FUNC_5(VAR_5->dev.of_node,
   "hp-pa-gpios", 0);
 if (FUNC_4(VAR_7->gpio_spk_pa)) {
  VAR_8 = FUNC_1(&VAR_5->dev,
    VAR_7->gpio_spk_pa,
    VAR_2, "SPA_PA_SD");
  if (VAR_8) {
   FUNC_0(&VAR_5->dev,
    "Failed to request GPIO_%d for reset: %d\n",
    VAR_7->gpio_spk_pa, VAR_8);
   return VAR_8;
  }
 }
 if (FUNC_4(VAR_7->gpio_hp_pa)) {
  VAR_8 = FUNC_1(&VAR_5->dev,
    VAR_7->gpio_hp_pa,
    VAR_2, "HP_PA_SD");
  if (VAR_8) {
   FUNC_0(&VAR_5->dev,
    "Failed to request GPIO_%d for reset: %d\n",
    VAR_7->gpio_hp_pa, VAR_8);
   return VAR_8;
  }
 }

 VAR_6->dev = &VAR_5->dev;
 FUNC_7(VAR_6, VAR_7);

 VAR_8 = FUNC_3(&VAR_5->dev, VAR_6);
 if (VAR_8)
  FUNC_0(&VAR_5->dev, "snd_soc_register_card() failed:%d\n", VAR_8);

 return VAR_8;
}
