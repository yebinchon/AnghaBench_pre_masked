
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct snd_soc_card {TYPE_6__* dev; TYPE_4__* dai_link; int name; } ;
struct TYPE_12__ {char* platform; } ;
struct snd_soc_acpi_mach {TYPE_5__ mach_params; } ;
struct TYPE_13__ {struct snd_soc_acpi_mach* platform_data; } ;
struct platform_device {TYPE_6__ dev; TYPE_1__* id_entry; } ;
struct bxt_rt286_private {int hdmi_pcm_list; } ;
struct TYPE_11__ {char* name; TYPE_3__* cpus; TYPE_2__* codecs; } ;
struct TYPE_10__ {char* dai_name; } ;
struct TYPE_9__ {int name; } ;
struct TYPE_8__ {scalar_t__ driver_data; } ;


 int ARRAY_SIZE (int ) ;
 int ENOMEM ;
 int GFP_KERNEL ;
 int I2C_NAME_SIZE ;
 int INIT_LIST_HEAD (int *) ;
 int PLATFORM_NAME_SIZE ;
 int broxton_rt298_dais ;
 struct bxt_rt286_private* devm_kzalloc (TYPE_6__*,int,int ) ;
 int devm_snd_soc_register_card (TYPE_6__*,struct snd_soc_card*) ;
 int snd_soc_card_set_drvdata (struct snd_soc_card*,struct bxt_rt286_private*) ;
 int snd_soc_fixup_dai_links_platform_name (struct snd_soc_card*,char const*) ;
 int strncmp (int ,char*,int ) ;

__attribute__((used)) static int broxton_audio_probe(struct platform_device *pdev)
{
 struct bxt_rt286_private *ctx;
 struct snd_soc_card *card =
   (struct snd_soc_card *)pdev->id_entry->driver_data;
 struct snd_soc_acpi_mach *mach;
 const char *platform_name;
 int ret;
 int i;

 for (i = 0; i < ARRAY_SIZE(broxton_rt298_dais); i++) {
  if (!strncmp(card->dai_link[i].codecs->name, "i2c-INT343A:00",
        I2C_NAME_SIZE)) {
   if (!strncmp(card->name, "broxton-rt298",
         PLATFORM_NAME_SIZE)) {
    card->dai_link[i].name = "SSP5-Codec";
    card->dai_link[i].cpus->dai_name = "SSP5 Pin";
   } else if (!strncmp(card->name, "geminilake-rt298",
         PLATFORM_NAME_SIZE)) {
    card->dai_link[i].name = "SSP2-Codec";
    card->dai_link[i].cpus->dai_name = "SSP2 Pin";
   }
  }
 }

 ctx = devm_kzalloc(&pdev->dev, sizeof(*ctx), GFP_KERNEL);
 if (!ctx)
  return -ENOMEM;

 INIT_LIST_HEAD(&ctx->hdmi_pcm_list);

 card->dev = &pdev->dev;
 snd_soc_card_set_drvdata(card, ctx);


 mach = (&pdev->dev)->platform_data;
 platform_name = mach->mach_params.platform;

 ret = snd_soc_fixup_dai_links_platform_name(card,
          platform_name);
 if (ret)
  return ret;

 return devm_snd_soc_register_card(&pdev->dev, card);
}
