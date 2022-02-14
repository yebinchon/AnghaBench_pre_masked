
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct snd_soc_card {TYPE_8__* dev; } ;
struct rx51_audio_pdata {void* speaker_amp_gpio; void* eci_sw_gpio; void* jack_detection_gpio; void* tvout_selection_gpio; } ;
struct TYPE_19__ {struct device_node* of_node; } ;
struct platform_device {TYPE_8__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_15__ {struct device_node* of_node; int * name; } ;
struct TYPE_18__ {TYPE_4__ dlc; } ;
struct TYPE_17__ {struct device_node* of_node; int * dev_name; } ;
struct TYPE_16__ {TYPE_3__* codecs; TYPE_2__* platforms; TYPE_1__* cpus; } ;
struct TYPE_14__ {struct device_node* of_node; int * name; } ;
struct TYPE_13__ {struct device_node* of_node; int * name; } ;
struct TYPE_12__ {struct device_node* of_node; int * dai_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_8__*,char*,...) ;
 void* FUNC_3 (TYPE_8__*,char*,int ) ;
 struct rx51_audio_pdata* FUNC_4 (TYPE_8__*,int,int ) ;
 int FUNC_5 (TYPE_8__*,struct snd_soc_card*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 struct device_node* FUNC_8 (struct device_node*,char*,int) ;
 TYPE_7__* VAR_7 ;
 TYPE_6__* VAR_8 ;
 TYPE_5__* VAR_9 ;
 struct snd_soc_card VAR_10 ;
 int FUNC_9 (struct snd_soc_card*,struct rx51_audio_pdata*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_11)
{
 struct rx51_audio_pdata *VAR_12;
 struct device_node *VAR_13 = VAR_11->dev.of_node;
 struct snd_soc_card *VAR_14 = &VAR_10;
 int VAR_15;

 if (!FUNC_6() && !FUNC_7("nokia,omap3-n900"))
  return -VAR_1;

 VAR_14->dev = &VAR_11->dev;

 if (VAR_13) {
  struct device_node *VAR_16;

  VAR_16 = FUNC_8(VAR_13, "nokia,cpu-dai", 0);
  if (!VAR_16) {
   FUNC_2(&VAR_11->dev, "McBSP node is not provided\n");
   return -VAR_0;
  }
  VAR_9[0].cpus->dai_name = ((void*)0);
  VAR_9[0].platforms->name = ((void*)0);
  VAR_9[0].cpus->of_node = VAR_16;
  VAR_9[0].platforms->of_node = VAR_16;

  VAR_16 = FUNC_8(VAR_13, "nokia,audio-codec", 0);
  if (!VAR_16) {
   FUNC_2(&VAR_11->dev, "Codec node is not provided\n");
   return -VAR_0;
  }
  VAR_9[0].codecs->name = ((void*)0);
  VAR_9[0].codecs->of_node = VAR_16;

  VAR_16 = FUNC_8(VAR_13, "nokia,audio-codec", 1);
  if (!VAR_16) {
   FUNC_2(&VAR_11->dev, "Auxiliary Codec node is not provided\n");
   return -VAR_0;
  }
  VAR_7[0].dlc.name = ((void*)0);
  VAR_7[0].dlc.of_node = VAR_16;
  VAR_8[0].dev_name = ((void*)0);
  VAR_8[0].of_node = VAR_16;

  VAR_16 = FUNC_8(VAR_13, "nokia,headphone-amplifier", 0);
  if (!VAR_16) {
   FUNC_2(&VAR_11->dev, "Headphone amplifier node is not provided\n");
   return -VAR_0;
  }
  VAR_7[1].dlc.name = ((void*)0);
  VAR_7[1].dlc.of_node = VAR_16;
  VAR_8[1].dev_name = ((void*)0);
  VAR_8[1].of_node = VAR_16;
 }

 VAR_12 = FUNC_4(&VAR_11->dev, sizeof(*VAR_12), VAR_3);
 if (VAR_12 == ((void*)0))
  return -VAR_2;

 FUNC_9(VAR_14, VAR_12);

 VAR_12->tvout_selection_gpio = FUNC_3(VAR_14->dev,
           "tvout-selection",
           VAR_6);
 if (FUNC_0(VAR_12->tvout_selection_gpio)) {
  FUNC_2(VAR_14->dev, "could not get tvout selection gpio\n");
  return FUNC_1(VAR_12->tvout_selection_gpio);
 }

 VAR_12->jack_detection_gpio = FUNC_3(VAR_14->dev,
          "jack-detection",
          VAR_4);
 if (FUNC_0(VAR_12->jack_detection_gpio)) {
  FUNC_2(VAR_14->dev, "could not get jack detection gpio\n");
  return FUNC_1(VAR_12->jack_detection_gpio);
 }

 VAR_12->eci_sw_gpio = FUNC_3(VAR_14->dev, "eci-switch",
         VAR_5);
 if (FUNC_0(VAR_12->eci_sw_gpio)) {
  FUNC_2(VAR_14->dev, "could not get eci switch gpio\n");
  return FUNC_1(VAR_12->eci_sw_gpio);
 }

 VAR_12->speaker_amp_gpio = FUNC_3(VAR_14->dev,
       "speaker-amplifier",
       VAR_6);
 if (FUNC_0(VAR_12->speaker_amp_gpio)) {
  FUNC_2(VAR_14->dev, "could not get speaker enable gpio\n");
  return FUNC_1(VAR_12->speaker_amp_gpio);
 }

 VAR_15 = FUNC_5(VAR_14->dev, VAR_14);
 if (VAR_15) {
  FUNC_2(&VAR_11->dev, "snd_soc_register_card failed (%d)\n", VAR_15);
  return VAR_15;
 }

 return 0;
}
