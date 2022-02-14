
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct snd_soc_card {int num_links; int fully_routed; scalar_t__ name; TYPE_4__* dev; } ;
struct property {int dummy; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct omap_twl4030 {int jack_detect; } ;
struct omap_tw4030_pdata {int jack_detect; int voice_connected; scalar_t__ card_name; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {TYPE_2__* platforms; TYPE_1__* cpus; } ;
struct TYPE_9__ {struct device_node* of_node; int * name; } ;
struct TYPE_8__ {struct device_node* of_node; int * dai_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,char*,...) ;
 struct omap_tw4030_pdata* FUNC_1 (TYPE_4__*) ;
 struct omap_twl4030* FUNC_2 (TYPE_4__*,int,int ) ;
 int FUNC_3 (TYPE_4__*,struct snd_soc_card*) ;
 struct property* FUNC_4 (struct device_node*,char*,int *) ;
 int FUNC_5 (struct device_node*,char*,int ) ;
 struct device_node* FUNC_6 (struct device_node*,char*,int ) ;
 struct snd_soc_card VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_7 (struct snd_soc_card*,struct omap_twl4030*) ;
 int FUNC_8 (struct snd_soc_card*,char*) ;
 scalar_t__ FUNC_9 (struct snd_soc_card*,char*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_6)
{
 struct omap_tw4030_pdata *VAR_7 = FUNC_1(&VAR_6->dev);
 struct device_node *VAR_8 = VAR_6->dev.of_node;
 struct snd_soc_card *VAR_9 = &VAR_4;
 struct omap_twl4030 *VAR_10;
 int VAR_11 = 0;

 VAR_9->dev = &VAR_6->dev;

 VAR_10 = FUNC_2(&VAR_6->dev, sizeof(struct omap_twl4030), VAR_3);
 if (VAR_10 == ((void*)0))
  return -VAR_2;

 if (VAR_8) {
  struct device_node *VAR_12;
  struct property *VAR_13;

  if (FUNC_9(VAR_9, "ti,model")) {
   FUNC_0(&VAR_6->dev, "Card name is not provided\n");
   return -VAR_1;
  }

  VAR_12 = FUNC_6(VAR_8, "ti,mcbsp", 0);
  if (!VAR_12) {
   FUNC_0(&VAR_6->dev, "McBSP node is not provided\n");
   return -VAR_0;
  }
  VAR_5[0].cpus->dai_name = ((void*)0);
  VAR_5[0].cpus->of_node = VAR_12;

  VAR_5[0].platforms->name = ((void*)0);
  VAR_5[0].platforms->of_node = VAR_12;

  VAR_12 = FUNC_6(VAR_8, "ti,mcbsp-voice", 0);
  if (!VAR_12) {
   VAR_9->num_links = 1;
  } else {
   VAR_5[1].cpus->dai_name = ((void*)0);
   VAR_5[1].cpus->of_node = VAR_12;

   VAR_5[1].platforms->name = ((void*)0);
   VAR_5[1].platforms->of_node = VAR_12;
  }

  VAR_10->jack_detect = FUNC_5(VAR_8,
            "ti,jack-det-gpio", 0);


  VAR_13 = FUNC_4(VAR_8, "ti,audio-routing", ((void*)0));
  if (VAR_13) {
   VAR_11 = FUNC_8(VAR_9,
           "ti,audio-routing");
   if (VAR_11)
    return VAR_11;

   VAR_9->fully_routed = 1;
  }
 } else if (VAR_7) {
  if (VAR_7->card_name) {
   VAR_9->name = VAR_7->card_name;
  } else {
   FUNC_0(&VAR_6->dev, "Card name is not provided\n");
   return -VAR_1;
  }

  if (!VAR_7->voice_connected)
   VAR_9->num_links = 1;

  VAR_10->jack_detect = VAR_7->jack_detect;
 } else {
  FUNC_0(&VAR_6->dev, "Missing pdata\n");
  return -VAR_1;
 }

 FUNC_7(VAR_9, VAR_10);
 VAR_11 = FUNC_3(&VAR_6->dev, VAR_9);
 if (VAR_11) {
  FUNC_0(&VAR_6->dev, "devm_snd_soc_register_card() failed: %d\n",
   VAR_11);
  return VAR_11;
 }

 return 0;
}
