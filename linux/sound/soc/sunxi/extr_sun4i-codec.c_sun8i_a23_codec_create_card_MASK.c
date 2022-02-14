
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_card {char* name; int num_aux_devs; int fully_routed; TYPE_2__* aux_dev; void* num_dapm_routes; void* dapm_routes; void* num_dapm_widgets; void* dapm_widgets; struct device* dev; int dai_link; int num_links; } ;
struct device {int of_node; } ;
struct TYPE_3__ {int of_node; } ;
struct TYPE_4__ {TYPE_1__ dlc; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct snd_soc_card* FUNC_1 (int ) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct snd_soc_card* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct snd_soc_card*,char*) ;
 int FUNC_7 (struct device*,int *) ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static struct snd_soc_card *FUNC_8(struct device *VAR_6)
{
 struct snd_soc_card *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_1(-VAR_1);

 VAR_3.dlc.of_node = FUNC_5(VAR_6->of_node,
       "allwinner,codec-analog-controls",
       0);
 if (!VAR_3.dlc.of_node) {
  FUNC_2(VAR_6, "Can't find analog controls for codec.\n");
  return FUNC_1(-VAR_0);
 };

 VAR_7->dai_link = FUNC_7(VAR_6, &VAR_7->num_links);
 if (!VAR_7->dai_link)
  return FUNC_1(-VAR_1);

 VAR_7->dev = VAR_6;
 VAR_7->name = "A23 Audio Codec";
 VAR_7->dapm_widgets = VAR_4;
 VAR_7->num_dapm_widgets = FUNC_0(VAR_4);
 VAR_7->dapm_routes = VAR_5;
 VAR_7->num_dapm_routes = FUNC_0(VAR_5);
 VAR_7->aux_dev = &VAR_3;
 VAR_7->num_aux_devs = 1;
 VAR_7->fully_routed = 1;

 VAR_8 = FUNC_6(VAR_7, "allwinner,audio-routing");
 if (VAR_8)
  FUNC_3(VAR_6, "failed to parse audio-routing: %d\n", VAR_8);

 return VAR_7;
}
