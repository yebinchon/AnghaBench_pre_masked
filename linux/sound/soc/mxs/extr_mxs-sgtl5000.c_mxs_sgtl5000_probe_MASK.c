
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct snd_soc_card {int num_dapm_widgets; int dapm_widgets; TYPE_5__* dev; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {TYPE_3__* platforms; TYPE_2__* cpus; TYPE_1__* codecs; } ;
struct TYPE_9__ {struct device_node* of_node; int * name; } ;
struct TYPE_8__ {struct device_node* of_node; int * dai_name; } ;
struct TYPE_7__ {struct device_node* of_node; int * name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,char*,...) ;
 int FUNC_2 (TYPE_5__*,struct snd_soc_card*) ;
 int FUNC_3 (int ,int,int) ;
 struct snd_soc_card VAR_2 ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct device_node*,char*,int *) ;
 int FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (struct device_node*,char*,int) ;
 int FUNC_7 (struct snd_soc_card*,char*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct snd_soc_card *VAR_6 = &VAR_2;
 int VAR_7, VAR_8;
 struct device_node *VAR_9 = VAR_5->dev.of_node;
 struct device_node *VAR_10[2], *VAR_11;

 VAR_10[0] = FUNC_6(VAR_9, "saif-controllers", 0);
 VAR_10[1] = FUNC_6(VAR_9, "saif-controllers", 1);
 VAR_11 = FUNC_6(VAR_9, "audio-codec", 0);
 if (!VAR_10[0] || !VAR_10[1] || !VAR_11) {
  FUNC_1(&VAR_5->dev, "phandle missing or invalid\n");
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  VAR_3[VAR_8].codecs->name = ((void*)0);
  VAR_3[VAR_8].codecs->of_node = VAR_11;
  VAR_3[VAR_8].cpus->dai_name = ((void*)0);
  VAR_3[VAR_8].cpus->of_node = VAR_10[VAR_8];
  VAR_3[VAR_8].platforms->name = ((void*)0);
  VAR_3[VAR_8].platforms->of_node = VAR_10[VAR_8];
 }

 FUNC_5(VAR_11);
 FUNC_5(VAR_10[0]);
 FUNC_5(VAR_10[1]);






 VAR_7 = FUNC_3(0, 44100 * 256, 44100);
 if (VAR_7) {
  FUNC_1(&VAR_5->dev, "failed to get mclk\n");
  return VAR_7;
 }

 VAR_6->dev = &VAR_5->dev;

 if (FUNC_4(VAR_9, "audio-routing", ((void*)0))) {
  VAR_6->dapm_widgets = VAR_4;
  VAR_6->num_dapm_widgets = FUNC_0(VAR_4);

  VAR_7 = FUNC_7(VAR_6, "audio-routing");
  if (VAR_7) {
   FUNC_1(&VAR_5->dev, "failed to parse audio-routing (%d)\n",
    VAR_7);
   return VAR_7;
  }
 }

 VAR_7 = FUNC_2(&VAR_5->dev, VAR_6);
 if (VAR_7) {
  if (VAR_7 != -VAR_1)
   FUNC_1(&VAR_5->dev, "snd_soc_register_card failed (%d)\n",
    VAR_7);
  return VAR_7;
 }

 return 0;
}
